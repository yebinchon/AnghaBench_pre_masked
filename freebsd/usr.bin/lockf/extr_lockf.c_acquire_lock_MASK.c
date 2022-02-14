
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char const*,int,int) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_9, int VAR_10)
{
 int VAR_11;

 if ((VAR_11 = FUNC_1(VAR_9, VAR_7|VAR_6|VAR_10, 0666)) == -1) {
  if (VAR_8 == VAR_0 || VAR_8 == VAR_1)
   return (-1);
  else if (VAR_8 == VAR_2 && (VAR_10 & VAR_5) == 0)
   FUNC_0(VAR_4, "%s", VAR_9);
  FUNC_0(VAR_3, "cannot open %s", VAR_9);
 }
 return (VAR_11);
}
