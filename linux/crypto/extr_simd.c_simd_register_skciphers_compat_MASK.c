
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* cra_name; char* cra_driver_name; } ;
struct skcipher_alg {TYPE_1__ base; } ;
struct simd_skcipher_alg {int dummy; } ;


 scalar_t__ FUNC_0 (struct simd_skcipher_alg*) ;
 int FUNC_1 (struct simd_skcipher_alg*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct skcipher_alg*,int) ;
 struct simd_skcipher_alg* FUNC_4 (char const*,char const*,char const*) ;
 int FUNC_5 (struct skcipher_alg*,int,struct simd_skcipher_alg**) ;
 int FUNC_6 (char*,char*,int) ;

int FUNC_7(struct skcipher_alg *VAR_0, int VAR_1,
       struct simd_skcipher_alg **VAR_2)
{
 int VAR_3;
 int VAR_4;
 const char *VAR_5;
 const char *VAR_6;
 const char *VAR_7;
 struct simd_skcipher_alg *VAR_8;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_2(FUNC_6(VAR_0[VAR_4].base.cra_name, "__", 2));
  FUNC_2(FUNC_6(VAR_0[VAR_4].base.cra_driver_name, "__", 2));
  VAR_5 = VAR_0[VAR_4].base.cra_name + 2;
  VAR_6 = VAR_0[VAR_4].base.cra_driver_name + 2;
  VAR_7 = VAR_0[VAR_4].base.cra_driver_name;
  VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_7);
  VAR_3 = FUNC_1(VAR_8);
  if (FUNC_0(VAR_8))
   goto err_unregister;
  VAR_2[VAR_4] = VAR_8;
 }
 return 0;

err_unregister:
 FUNC_5(VAR_0, VAR_1, VAR_2);
 return VAR_3;
}
