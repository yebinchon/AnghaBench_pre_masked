
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_hmac_ctx ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
  uint8_t VAR_3[32] = { 0 },
          VAR_4[32] = { 0 };

  cf_hmac_ctx VAR_5;
  FUNC_1(&VAR_5, &VAR_0, VAR_3, sizeof VAR_3);
  FUNC_2(&VAR_5, VAR_1, VAR_2);
  FUNC_0(&VAR_5, VAR_4);
}
