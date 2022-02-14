
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_hmac_drbg ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int *,int,int *,int,int *,int ) ;
 int FUNC_3 (int *,int *,int,int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
  uint8_t VAR_1[32], VAR_2[16], VAR_3[32], VAR_4[256], VAR_5[256];


  FUNC_5(VAR_1, sizeof VAR_1, "48c121b18733af15c27e1dd9ba66a9a81a5579cdba0f5b657ec53c2b9e90bbf6");
  FUNC_5(VAR_2, sizeof VAR_2, "bbb7c777428068fad9970891f879b1af");
  FUNC_5(VAR_3, sizeof VAR_3, "e0ffefdadb9ccf990504d568bdb4d862cbe17ccce6e22dfcab8b4804fd21421a");
  FUNC_5(VAR_5, sizeof VAR_5, "05da6aac7d980da038f65f392841476d37fe70fbd3e369d1f80196e66e54b8fadb1d60e1a0f3d4dc173769d75fc3410549d7a843270a54a068b4fe767d7d9a59604510a875ad1e9731c8afd0fd50b825e2c50d062576175106a9981be37e02ec7c5cd0a69aa0ca65bddaee1b0de532e10cfa1f5bf6a026e47379736a099d6750ab121dbe3622b841baf8bdcbe875c85ba4b586b8b5b57b0fecbec08c12ff2a9453c47c6e32a52103d972c62ab9affb8e728a31fcefbbccc556c0f0a35f4b10ace2d96b906e36cbb72233201e536d3e13b045187b417d2449cad1edd192e061f12d22147b0a176ea8d9c4c35404395b6502ef333a813b6586037479e0fa3c6a23");

  cf_hmac_drbg VAR_6;
  FUNC_2(&VAR_6, &VAR_0, VAR_1, sizeof VAR_1, VAR_2, sizeof VAR_2, ((void*)0), 0);
  FUNC_3(&VAR_6, VAR_3, sizeof VAR_3, ((void*)0), 0);
  FUNC_1(&VAR_6, VAR_4, sizeof VAR_4);
  FUNC_1(&VAR_6, VAR_4, sizeof VAR_4);
  FUNC_0(FUNC_4(VAR_4, VAR_5, sizeof VAR_4) == 0);
}
