
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

void
FUNC_5(void)
{
 int VAR_5, VAR_6;

 VAR_3 = FUNC_4(VAR_0, VAR_2);
 if (VAR_3 < 0 && VAR_4 == VAR_1) {
  VAR_6 = VAR_4;
  VAR_5 = FUNC_0("ctl");
  if (VAR_5 != -1)
   VAR_3 = FUNC_4(VAR_0, VAR_2);
  else
   VAR_4 = VAR_6;
 }
 if (VAR_3 < 0)
  FUNC_1(1, "failed to open %s", VAR_0);
}
