
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct cc_drvdata {scalar_t__ hw_rev; int std_bodies; struct cc_aead_handle* aead_handle; } ;
struct TYPE_6__ {int cra_driver_name; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct cc_crypto_alg {TYPE_2__ aead_alg; int entry; struct cc_drvdata* drvdata; } ;
struct cc_aead_handle {scalar_t__ sram_workspace_addr; int aead_list; } ;
struct TYPE_8__ {scalar_t__ min_hw_rev; int std_body; int driver_name; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct cc_crypto_alg*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct cc_crypto_alg*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_4 (struct cc_drvdata*) ;
 struct cc_crypto_alg* FUNC_5 (TYPE_3__*,struct device*) ;
 scalar_t__ FUNC_6 (struct cc_drvdata*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct device*,char*,int ) ;
 int FUNC_9 (struct device*,char*,...) ;
 struct device* FUNC_10 (struct cc_drvdata*) ;
 int FUNC_11 (struct cc_crypto_alg*) ;
 struct cc_aead_handle* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;

int FUNC_14(struct cc_drvdata *VAR_5)
{
 struct cc_aead_handle *VAR_6;
 struct cc_crypto_alg *VAR_7;
 int VAR_8 = -VAR_0;
 int VAR_9;
 struct device *VAR_10 = FUNC_10(VAR_5);

 VAR_6 = FUNC_12(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto fail0;
 }

 FUNC_1(&VAR_6->aead_list);
 VAR_5->aead_handle = VAR_6;

 VAR_6->sram_workspace_addr = FUNC_6(VAR_5,
        VAR_2);

 if (VAR_6->sram_workspace_addr == VAR_3) {
  FUNC_9(VAR_10, "SRAM pool exhausted\n");
  VAR_8 = -VAR_0;
  goto fail1;
 }


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
  if ((VAR_4[VAR_9].min_hw_rev > VAR_5->hw_rev) ||
      !(VAR_5->std_bodies & VAR_4[VAR_9].std_body))
   continue;

  VAR_7 = FUNC_5(&VAR_4[VAR_9], VAR_10);
  if (FUNC_2(VAR_7)) {
   VAR_8 = FUNC_3(VAR_7);
   FUNC_9(VAR_10, "%s alg allocation failed\n",
    VAR_4[VAR_9].driver_name);
   goto fail1;
  }
  VAR_7->drvdata = VAR_5;
  VAR_8 = FUNC_7(&VAR_7->aead_alg);
  if (VAR_8) {
   FUNC_9(VAR_10, "%s alg registration failed\n",
    VAR_7->aead_alg.base.cra_driver_name);
   goto fail2;
  } else {
   FUNC_13(&VAR_7->entry, &VAR_6->aead_list);
   FUNC_8(VAR_10, "Registered %s\n",
    VAR_7->aead_alg.base.cra_driver_name);
  }
 }

 return 0;

fail2:
 FUNC_11(VAR_7);
fail1:
 FUNC_4(VAR_5);
fail0:
 return VAR_8;
}
