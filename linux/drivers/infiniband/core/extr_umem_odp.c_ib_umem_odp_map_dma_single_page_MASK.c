
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct TYPE_3__ {struct ib_device* ibdev; } ;
struct ib_umem_odp {int* dma_list; int page_shift; struct page** page_list; int npages; TYPE_1__ umem; } ;
struct TYPE_4__ {int (* invalidate_range ) (struct ib_umem_odp*,scalar_t__,scalar_t__) ;} ;
struct ib_device {TYPE_2__ ops; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ib_device*,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct ib_device*,int) ;
 scalar_t__ FUNC_3 (struct ib_umem_odp*,unsigned long) ;
 int FUNC_4 (struct ib_umem_odp*) ;
 int FUNC_5 (struct ib_umem_odp*) ;
 scalar_t__ FUNC_6 (struct ib_umem_odp*) ;
 int FUNC_7 (char*,struct page*,struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct ib_umem_odp*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_10(
  struct ib_umem_odp *VAR_3,
  int VAR_4,
  struct page *VAR_5,
  u64 VAR_6,
  unsigned long VAR_7)
{
 struct ib_device *VAR_8 = VAR_3->umem.ibdev;
 dma_addr_t VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;






 if (FUNC_3(VAR_3, VAR_7)) {
  VAR_11 = -VAR_1;
  goto out;
 }
 if (!(VAR_3->dma_list[VAR_4])) {
  VAR_9 =
   FUNC_1(VAR_8, VAR_5, 0, FUNC_0(VAR_3->page_shift),
     VAR_0);
  if (FUNC_2(VAR_8, VAR_9)) {
   VAR_11 = -VAR_2;
   goto out;
  }
  VAR_3->dma_list[VAR_4] = VAR_9 | VAR_6;
  VAR_3->page_list[VAR_4] = VAR_5;
  VAR_3->npages++;
 } else if (VAR_3->page_list[VAR_4] == VAR_5) {
  VAR_3->dma_list[VAR_4] |= VAR_6;
 } else {
  FUNC_7("error: got different pages in IB device and from get_user_pages. IB device page: %p, gup page: %p\n",
         VAR_3->page_list[VAR_4], VAR_5);


  VAR_10 = 1;
 }

out:
 FUNC_8(VAR_5);

 if (VAR_10) {
  FUNC_5(VAR_3);
  VAR_8->ops.invalidate_range(
   VAR_3,
   FUNC_6(VAR_3) +
    (VAR_4 << VAR_3->page_shift),
   FUNC_6(VAR_3) +
    ((VAR_4 + 1) << VAR_3->page_shift));
  FUNC_4(VAR_3);
  VAR_11 = -VAR_1;
 }

 return VAR_11;
}
