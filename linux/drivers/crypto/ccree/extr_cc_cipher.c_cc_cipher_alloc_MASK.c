
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct cc_drvdata {scalar_t__ hw_rev; int std_bodies; scalar_t__ sec_disabled; struct cc_cipher_handle* cipher_handle; } ;
struct TYPE_6__ {int cra_driver_name; } ;
struct TYPE_8__ {TYPE_1__ base; } ;
struct cc_crypto_alg {TYPE_3__ skcipher_alg; int entry; struct cc_drvdata* drvdata; } ;
struct cc_cipher_handle {int alg_list; } ;
struct TYPE_7__ {scalar_t__ min_hw_rev; int std_body; int driver_name; scalar_t__ sec_func; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct cc_crypto_alg*) ;
 int FUNC_3 (struct cc_crypto_alg*) ;
 int FUNC_4 (struct cc_drvdata*) ;
 struct cc_crypto_alg* FUNC_5 (TYPE_2__*,struct device*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct device*,char*,int,...) ;
 int FUNC_8 (struct device*,char*,int) ;
 struct device* FUNC_9 (struct cc_drvdata*) ;
 int FUNC_10 (struct cc_crypto_alg*) ;
 struct cc_cipher_handle* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 TYPE_2__* VAR_2 ;

int FUNC_13(struct cc_drvdata *VAR_3)
{
 struct cc_cipher_handle *VAR_4;
 struct cc_crypto_alg *VAR_5;
 struct device *VAR_6 = FUNC_9(VAR_3);
 int VAR_7 = -VAR_0;
 int VAR_8;

 VAR_4 = FUNC_11(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->alg_list);
 VAR_3->cipher_handle = VAR_4;


 FUNC_7(VAR_6, "Number of algorithms = %zu\n",
  FUNC_0(VAR_2));
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  if ((VAR_2[VAR_8].min_hw_rev > VAR_3->hw_rev) ||
      !(VAR_3->std_bodies & VAR_2[VAR_8].std_body) ||
      (VAR_3->sec_disabled && VAR_2[VAR_8].sec_func))
   continue;

  FUNC_7(VAR_6, "creating %s\n", VAR_2[VAR_8].driver_name);
  VAR_5 = FUNC_5(&VAR_2[VAR_8], VAR_6);
  if (FUNC_2(VAR_5)) {
   VAR_7 = FUNC_3(VAR_5);
   FUNC_8(VAR_6, "%s alg allocation failed\n",
    VAR_2[VAR_8].driver_name);
   goto fail0;
  }
  VAR_5->drvdata = VAR_3;

  FUNC_7(VAR_6, "registering %s\n",
   VAR_2[VAR_8].driver_name);
  VAR_7 = FUNC_6(&VAR_5->skcipher_alg);
  FUNC_7(VAR_6, "%s alg registration rc = %x\n",
   VAR_5->skcipher_alg.base.cra_driver_name, VAR_7);
  if (VAR_7) {
   FUNC_8(VAR_6, "%s alg registration failed\n",
    VAR_5->skcipher_alg.base.cra_driver_name);
   FUNC_10(VAR_5);
   goto fail0;
  } else {
   FUNC_12(&VAR_5->entry,
          &VAR_4->alg_list);
   FUNC_7(VAR_6, "Registered %s\n",
    VAR_5->skcipher_alg.base.cra_driver_name);
  }
 }
 return 0;

fail0:
 FUNC_4(VAR_3);
 return VAR_7;
}
