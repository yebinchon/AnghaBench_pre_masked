
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_1__*,int ,int,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(void)
{
 while (1) {
  if (FUNC_3(VAR_7, VAR_2, VAR_3 | VAR_4,
       "read block", "completion") & VAR_4) {
   FUNC_4(VAR_7->pi);
   if (VAR_8 < VAR_1) {
    FUNC_2(VAR_7, 0);
    VAR_8++;
    FUNC_5(VAR_7->pi, VAR_5);
    return;
   }
   FUNC_0(VAR_0);
   return;
  }
  FUNC_6(VAR_7->pi, VAR_6, 512);
  if (FUNC_1())
   break;
 }
 FUNC_4(VAR_7->pi);
 FUNC_0(0);
}
