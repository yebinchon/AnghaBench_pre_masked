
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_cbc ;
typedef int cf_aes_context ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,void const*,int) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (int *,void const*,int *,int) ;
 int FUNC_4 (int *,int *,int *,void const*) ;
 scalar_t__ FUNC_5 (int *,void const*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
  uint8_t VAR_1[16];

  const void *VAR_2 = "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f";
  const void *VAR_3 = "\x2b\x7e\x15\x16\x28\xae\xd2\xa6\xab\xf7\x15\x88\x09\xcf\x4f\x3c";
  const void *VAR_4 = "\x6b\xc1\xbe\xe2\x2e\x40\x9f\x96\xe9\x3d\x7e\x11\x73\x93\x17\x2a";
  const void *VAR_5 = "\x76\x49\xab\xac\x81\x19\xb2\x46\xce\xe9\x8e\x9b\x12\xe9\x19\x7d";

  cf_aes_context VAR_6;
  FUNC_1(&VAR_6, VAR_3, 16);

  cf_cbc VAR_7;
  FUNC_4(&VAR_7, &VAR_0, &VAR_6, VAR_2);
  FUNC_3(&VAR_7, VAR_4, VAR_1, 1);
  FUNC_0(FUNC_5(VAR_1, VAR_5, 16) == 0);

  uint8_t VAR_8[16];
  FUNC_4(&VAR_7, &VAR_0, &VAR_6, VAR_2);
  FUNC_2(&VAR_7, VAR_1, VAR_8, 1);
  FUNC_0(FUNC_5(VAR_8, VAR_4, 16) == 0);
}
