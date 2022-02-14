
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simd_aead_alg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct simd_aead_alg* FUNC_0 (int ) ;
 struct simd_aead_alg* FUNC_1 (char const*,char*,char const*) ;
 int FUNC_2 (char*,int,char*,char const*) ;

struct simd_aead_alg *FUNC_3(const char *VAR_2,
           const char *VAR_3)
{
 char VAR_4[VAR_0];

 if (FUNC_2(VAR_4, VAR_0, "simd-%s", VAR_3) >=
     VAR_0)
  return FUNC_0(-VAR_1);

 return FUNC_1(VAR_2, VAR_4, VAR_3);
}
