
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;
typedef int buffer ;


 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *,char*,int ,int,int) ;
 int FUNC_2 (char*,int,char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_6)
{
 char VAR_7[64];
 semid_t VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = (intptr_t)VAR_6;
 for (VAR_9 = 0; VAR_9 < VAR_10 + 1; VAR_9++) {
  FUNC_2(VAR_7, sizeof(VAR_7), "%s%d", VAR_4, VAR_9);
  if (FUNC_1(&VAR_8, VAR_7, VAR_3, 0777, 1) < 0) {
   if (VAR_5 == VAR_2 || VAR_5 == VAR_0 ||
       VAR_5 == VAR_1)
    return (FUNC_0(0, 0));
   return (FUNC_0(1, VAR_5));
  }
 }
 return (FUNC_0(2, VAR_5));
}
