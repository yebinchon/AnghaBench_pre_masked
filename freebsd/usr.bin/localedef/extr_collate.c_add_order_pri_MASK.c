
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(int32_t VAR_4)
{
 if (VAR_1 >= VAR_0) {
  FUNC_0(VAR_3,"too many weights (max %d)", VAR_0);
  return;
 }
 VAR_2[VAR_1] = VAR_4;
 VAR_1++;
}
