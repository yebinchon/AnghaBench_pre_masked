
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int numbuf ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int,int ,char*,int ,int ) ;
 int FUNC_3 (char*,int,char*,int ) ;

char *
FUNC_4(int64_t VAR_3)
{
 static char VAR_4[20];

 if (VAR_2) {
  FUNC_2(VAR_4, VAR_3 < 0 ? 7 : 6,
      FUNC_0(VAR_3), "", VAR_0, VAR_1);
  return (VAR_4);
 }
 FUNC_3(VAR_4, sizeof(VAR_4), "%juk", (uintmax_t)FUNC_1(VAR_3));
 return(VAR_4);
}
