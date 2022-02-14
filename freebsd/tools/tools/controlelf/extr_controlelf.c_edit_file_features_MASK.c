
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
typedef scalar_t__ ssize_t ;
typedef int features ;
typedef int Elf ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *,int,int,int *,int *) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int *,int) ;

__attribute__((used)) static bool
FUNC_5(Elf *VAR_1, int VAR_2, int VAR_3, char *VAR_4)
{
 u_int32_t VAR_5;
 u_int64_t VAR_6;

 if (!FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_5, &VAR_6)) {
  FUNC_3("NT_FREEBSD_FEATURE_CTL note not found");
  return (0);
 }

 if (!FUNC_0(VAR_4, &VAR_5))
  return (0);

 if (FUNC_2(VAR_3, VAR_6, VAR_0) == -1 ||
     FUNC_4(VAR_3, &VAR_5, sizeof(VAR_5)) <
     (ssize_t)sizeof(VAR_5)) {
  FUNC_3("error writing feature value");
  return (0);
 }
 return (1);
}
