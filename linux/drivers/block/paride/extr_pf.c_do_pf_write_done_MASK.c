
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 if (FUNC_1(VAR_5, VAR_2, 0, "write block", "done") & VAR_3) {
  FUNC_2(VAR_5->pi);
  if (VAR_6 < VAR_1) {
   VAR_6++;
   FUNC_3(VAR_5->pi, VAR_4);
   return;
  }
  FUNC_0(VAR_0);
  return;
 }
 FUNC_2(VAR_5->pi);
 FUNC_0(0);
}
