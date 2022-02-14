
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int ,int *) ;
 char* FUNC_1 (char const*,int ,int *) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, size_t *VAR_1, size_t *VAR_2)
{
 uint32_t VAR_3;
 char VAR_4[4];
 uint16_t VAR_5[2];

 *VAR_1 = 0;
 *VAR_2 = 0;
 while (*VAR_0) {
  VAR_0 = FUNC_1(VAR_0, 0, &VAR_3);


  *VAR_1 += FUNC_2(VAR_3, VAR_4);
  *VAR_2 += FUNC_0(VAR_3, VAR_5);
 }
}
