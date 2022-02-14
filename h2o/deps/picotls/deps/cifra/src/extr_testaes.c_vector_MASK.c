
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_aes_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,size_t) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 size_t FUNC_6 (int *,int,char const*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_0, const char *VAR_1,
                   const char *VAR_2)
{
  uint8_t VAR_3[32], VAR_4[16], VAR_5[16], VAR_6[16];
  size_t VAR_7 = sizeof VAR_3;
  cf_aes_context VAR_8;

  VAR_7 = FUNC_6(VAR_3, 32, VAR_2);
  FUNC_6(VAR_4, 16, VAR_0);
  FUNC_6(VAR_5, 16, VAR_1);

  FUNC_4(&VAR_8, VAR_3, VAR_7);
  FUNC_2(&VAR_8, VAR_4, VAR_6);
  FUNC_0(FUNC_5(VAR_6, VAR_5, 16) == 0);

  FUNC_1(&VAR_8, VAR_5, VAR_6);
  FUNC_0(FUNC_5(VAR_6, VAR_4, 16) == 0);
  FUNC_3(&VAR_8);
}
