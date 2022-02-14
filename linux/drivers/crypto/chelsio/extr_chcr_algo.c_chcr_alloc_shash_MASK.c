
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 struct crypto_shash* FUNC_0 (int ) ;





 struct crypto_shash* FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static struct crypto_shash *FUNC_2(unsigned int VAR_1)
{
 struct crypto_shash *VAR_2 = FUNC_0(-VAR_0);

 switch (VAR_1) {
 case 132:
  VAR_2 = FUNC_1("sha1", 0, 0);
  break;
 case 131:
  VAR_2 = FUNC_1("sha224", 0, 0);
  break;
 case 130:
  VAR_2 = FUNC_1("sha256", 0, 0);
  break;
 case 129:
  VAR_2 = FUNC_1("sha384", 0, 0);
  break;
 case 128:
  VAR_2 = FUNC_1("sha512", 0, 0);
  break;
 }

 return VAR_2;
}
