
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct ib_umem {TYPE_2__* context; TYPE_1__* odp_data; } ;
struct ib_device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__ invalidate_range; struct ib_device* device; } ;
struct TYPE_3__ {int* dma_list; struct page** page_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ib_device*,struct page*,int ,int,int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,int) ;
 scalar_t__ FUNC_2 (struct ib_umem*,unsigned long) ;
 int FUNC_3 (struct ib_umem*,int,int,int *) ;
 int FUNC_4 (char*,struct page*,struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(
  struct ib_umem *VAR_4,
  int VAR_5,
  u64 VAR_6,
  struct page *VAR_7,
  u64 VAR_8,
  unsigned long VAR_9)
{
 struct ib_device *VAR_10 = VAR_4->context->device;
 dma_addr_t VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;






 if (FUNC_2(VAR_4, VAR_9)) {
  VAR_14 = -VAR_1;
  goto out;
 }
 if (!(VAR_4->odp_data->dma_list[VAR_5])) {
  VAR_11 = FUNC_0(VAR_10,
        VAR_7,
        0, VAR_3,
        VAR_0);
  if (FUNC_1(VAR_10, VAR_11)) {
   VAR_14 = -VAR_2;
   goto out;
  }
  VAR_4->odp_data->dma_list[VAR_5] = VAR_11 | VAR_8;
  VAR_4->odp_data->page_list[VAR_5] = VAR_7;
  VAR_12 = 1;
 } else if (VAR_4->odp_data->page_list[VAR_5] == VAR_7) {
  VAR_4->odp_data->dma_list[VAR_5] |= VAR_8;
 } else {
  FUNC_4("error: got different pages in IB device and from get_user_pages. IB device page: %p, gup page: %p\n",
         VAR_4->odp_data->page_list[VAR_5], VAR_7);


  VAR_13 = 1;
 }

out:

 if (VAR_4->context->invalidate_range || !VAR_12)
  FUNC_5(VAR_7);

 if (VAR_13 && VAR_4->context->invalidate_range) {
  FUNC_3(
   VAR_4,
   VAR_6 + (VAR_5 * VAR_3),
   VAR_6 + ((VAR_5+1)*VAR_3),
   ((void*)0));
  VAR_14 = -VAR_1;
 }

 return VAR_14;
}
