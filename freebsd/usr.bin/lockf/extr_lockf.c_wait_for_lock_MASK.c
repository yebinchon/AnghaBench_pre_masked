
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char const*,int,int) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_6)
{
 int VAR_7;

 if ((VAR_7 = FUNC_2(VAR_6, VAR_4|VAR_3, 0666)) == -1) {
  if (VAR_5 == VAR_1 || VAR_5 == VAR_0)
   return;
  FUNC_1(VAR_2, "cannot open %s", VAR_6);
 }
 FUNC_0(VAR_7);
}
