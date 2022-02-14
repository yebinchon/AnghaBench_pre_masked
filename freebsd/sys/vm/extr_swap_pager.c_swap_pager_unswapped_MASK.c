
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ daddr_t ;
struct TYPE_3__ {int pindex; int object; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(vm_page_t VAR_2)
{
 daddr_t VAR_3;

 VAR_3 = FUNC_1(VAR_2->object, VAR_2->pindex, VAR_1);
 if (VAR_3 != VAR_0)
  FUNC_0(VAR_3, 1);
}
