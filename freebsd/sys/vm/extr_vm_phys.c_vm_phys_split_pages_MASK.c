
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct vm_freelist {int dummy; } ;
struct TYPE_4__ {scalar_t__ order; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vm_freelist*,TYPE_1__*,int,int) ;

__attribute__((used)) static __inline void
FUNC_2(vm_page_t VAR_1, int VAR_2, struct vm_freelist *VAR_3, int VAR_4,
    int VAR_5)
{
 vm_page_t VAR_6;

 while (VAR_2 > VAR_4) {
  VAR_2--;
  VAR_6 = &VAR_1[1 << VAR_2];
  FUNC_0(VAR_6->order == VAR_0,
      ("vm_phys_split_pages: page %p has unexpected order %d",
      VAR_6, VAR_6->order));
  FUNC_1(VAR_3, VAR_6, VAR_2, VAR_5);
        }
}
