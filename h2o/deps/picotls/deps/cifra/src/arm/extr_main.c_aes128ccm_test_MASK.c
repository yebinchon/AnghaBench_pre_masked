
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_aes_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int *,int,int,int *,int,int *,int,int *,int *,int) ;

__attribute__((used)) static void FUNC_2(void)
{
  uint8_t VAR_1[16] = { 0 };
  cf_aes_context VAR_2;
  FUNC_0(&VAR_2, VAR_1, sizeof VAR_1);

  uint8_t VAR_3[16] = { 0 };
  uint8_t VAR_4[16] = { 0 };
  uint8_t VAR_5[11] = { 0 };
  uint8_t VAR_6[16] = { 0 };
  uint8_t VAR_7[16] = { 0 };

  FUNC_1(&VAR_0, &VAR_2,
                 VAR_3, sizeof VAR_3, 4,
                 VAR_4, sizeof VAR_4,
                 VAR_5, sizeof VAR_5,
                 VAR_6,
                 VAR_7, sizeof VAR_7);
}
