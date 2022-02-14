
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static long
FUNC_2(int VAR_2, const char *VAR_3, const char *VAR_4, int VAR_5)
{
 const char *VAR_6;
 char *VAR_7;
 long VAR_8;

 VAR_6 = ((void*)0);
 VAR_7 = ((void*)0);
 VAR_1 = 0;
 VAR_8 = FUNC_1(VAR_4, &VAR_7, 0);
 if ((VAR_7 != ((void*)0) && *VAR_7 != '\0') || VAR_1 != 0)
  VAR_6 = "is not a number";
 if (VAR_8 < 0 || (!VAR_5 && VAR_8 == 0))
  VAR_6 = "must be greater than zero";
 if (VAR_6) {
  if (VAR_3)
   FUNC_0(VAR_0, "--%s argument %s", VAR_3, VAR_6);
  else
   FUNC_0(VAR_0, "-%c argument %s", VAR_2, VAR_6);
 }
 return (VAR_8);
}
