
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int u_int ;
struct vm_freelist {int dummy; } ;
struct TYPE_5__ {int order; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vm_freelist*,TYPE_1__*,int,int) ;

__attribute__((used)) static void
FUNC_5(vm_page_t VAR_2, u_int VAR_3, struct vm_freelist *VAR_4, int VAR_5)
{
 u_int VAR_6;
 int VAR_7;

 FUNC_0(VAR_3 > 0, ("vm_phys_enq_range: npages is 0"));
 FUNC_0(((FUNC_1(VAR_2) + VAR_3 * VAR_0) &
     ((VAR_0 << (FUNC_3(VAR_3) - 1)) - 1)) == 0,
     ("vm_phys_enq_range: page %p and npages %u are misaligned",
     VAR_2, VAR_3));
 do {
  FUNC_0(VAR_2->order == VAR_1,
      ("vm_phys_enq_range: page %p has unexpected order %d",
      VAR_2, VAR_2->order));
  VAR_7 = FUNC_2(VAR_3) - 1;
  FUNC_0(VAR_7 < VAR_1,
      ("vm_phys_enq_range: order %d is out of range", VAR_7));
  FUNC_4(VAR_4, VAR_2, VAR_7, VAR_5);
  VAR_6 = 1 << VAR_7;
  VAR_2 += VAR_6;
  VAR_3 -= VAR_6;
 } while (VAR_3 > 0);
}
