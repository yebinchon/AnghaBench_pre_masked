
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cra_driver_name; int cra_name; } ;
struct crypto_instance {TYPE_1__ alg; } ;
struct crypto_alg {char* cra_name; char* cra_driver_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,char*,char const*,char*) ;

int FUNC_1(struct crypto_instance *VAR_2, const char *VAR_3,
   struct crypto_alg *VAR_4)
{
 if (FUNC_0(VAR_2->alg.cra_name, VAR_0, "%s(%s)", VAR_3,
       VAR_4->cra_name) >= VAR_0)
  return -VAR_1;

 if (FUNC_0(VAR_2->alg.cra_driver_name, VAR_0, "%s(%s)",
       VAR_3, VAR_4->cra_driver_name) >= VAR_0)
  return -VAR_1;

 return 0;
}
