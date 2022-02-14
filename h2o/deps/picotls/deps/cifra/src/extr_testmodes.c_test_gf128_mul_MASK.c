
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_gf128 ;


 int FUNC_0 (int) ;
 int FUNC_1 (void const*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (void const*,int *,int) ;

__attribute__((used)) static void FUNC_5(void)
{
  uint8_t VAR_0[16];

  const void *VAR_1 = "\x03\x88\xda\xce\x60\xb6\xa3\x92\xf3\x28\xc2\xb9\x71\xb2\xfe\x78";
  const void *VAR_2 = "\x66\xe9\x4b\xd4\xef\x8a\x2c\x3b\x88\x4c\xfa\x59\xca\x34\x2b\x2e";
  const void *VAR_3 = "\x5e\x2e\xc7\x46\x91\x70\x62\x88\x2c\x85\xb0\x68\x53\x53\xde\xb7";

  cf_gf128 VAR_4, VAR_5, VAR_6;
  FUNC_1(VAR_1, VAR_4);
  FUNC_1(VAR_2, VAR_5);
  FUNC_2(VAR_4, VAR_5, VAR_6);
  FUNC_3(VAR_6, VAR_0);
  FUNC_0(FUNC_4(VAR_3, VAR_0, 16) == 0);
}
