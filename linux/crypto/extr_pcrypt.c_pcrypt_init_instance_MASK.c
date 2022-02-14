
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cra_alignmask; int cra_blocksize; scalar_t__ cra_priority; int cra_name; int cra_driver_name; } ;
struct crypto_instance {TYPE_1__ alg; } ;
struct crypto_alg {char* cra_driver_name; int cra_alignmask; int cra_blocksize; scalar_t__ cra_priority; int cra_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct crypto_instance *VAR_2,
    struct crypto_alg *VAR_3)
{
 if (FUNC_1(VAR_2->alg.cra_driver_name, VAR_0,
       "pcrypt(%s)", VAR_3->cra_driver_name) >= VAR_0)
  return -VAR_1;

 FUNC_0(VAR_2->alg.cra_name, VAR_3->cra_name, VAR_0);

 VAR_2->alg.cra_priority = VAR_3->cra_priority + 100;
 VAR_2->alg.cra_blocksize = VAR_3->cra_blocksize;
 VAR_2->alg.cra_alignmask = VAR_3->cra_alignmask;

 return 0;
}
