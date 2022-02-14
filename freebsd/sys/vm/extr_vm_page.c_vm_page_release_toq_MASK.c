
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_8__ {scalar_t__ valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(vm_page_t VAR_3, int VAR_4)
{

 FUNC_2(VAR_3);
 if ((VAR_4 & (VAR_2 | VAR_1)) != 0 || VAR_3->valid == 0)
  FUNC_0(VAR_3);
 else if (FUNC_1(VAR_3))
  FUNC_4(VAR_3);
 else
  FUNC_3(VAR_3, VAR_0);
}
