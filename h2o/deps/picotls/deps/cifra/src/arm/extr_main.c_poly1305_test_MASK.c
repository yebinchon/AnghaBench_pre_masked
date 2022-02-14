
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_poly1305 ;
typedef int cf_aes_context ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
  uint8_t VAR_2[32] = { 0 },
          VAR_3[16] = { 0 },
          VAR_4[16],
          VAR_5[16];

  cf_aes_context VAR_6;
  FUNC_1(&VAR_6, VAR_2, 16);
  FUNC_0(&VAR_6, VAR_3, VAR_4);

  cf_poly1305 VAR_7;
  FUNC_3(&VAR_7, VAR_2 + 16, VAR_4);
  FUNC_4(&VAR_7, VAR_0, VAR_1);
  FUNC_2(&VAR_7, VAR_5);
}
