
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int numbuf ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,scalar_t__,char*,int ,int) ;
 int FUNC_1 (char*,int,char*,int ) ;

char *
FUNC_2(int64_t VAR_4)
{
 static char VAR_5[20];

 if (VAR_3) {
  FUNC_0(VAR_5, VAR_4 < 0 ? 7 : 6,
      VAR_4, "", VAR_0, VAR_2 | VAR_1);
  return (VAR_5);
 }
 FUNC_1(VAR_5, sizeof(VAR_5), "%ju", (uintmax_t)VAR_4);
 return(VAR_5);
}
