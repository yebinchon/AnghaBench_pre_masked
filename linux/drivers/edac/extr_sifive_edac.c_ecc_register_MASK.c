
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int notifier_call; } ;
struct sifive_edac_priv {TYPE_2__* dci; TYPE_1__ notifier; } ;
struct platform_device {int dev; } ;
struct TYPE_8__ {char* mod_name; int * dev; void* dev_name; void* ctl_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *) ;
 struct sifive_edac_priv* FUNC_4 (int *,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int ,char*,int,char*,int,int,int *,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct platform_device*,struct sifive_edac_priv*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct sifive_edac_priv *VAR_5;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->notifier.notifier_call = VAR_3;
 FUNC_9(VAR_4, VAR_5);

 VAR_5->dci = FUNC_6(0, "sifive_ecc", 1, "sifive_ecc",
         1, 1, ((void*)0), 0,
         FUNC_7());
 if (FUNC_0(VAR_5->dci))
  return FUNC_1(VAR_5->dci);

 VAR_5->dci->dev = &VAR_4->dev;
 VAR_5->dci->mod_name = "Sifive ECC Manager";
 VAR_5->dci->ctl_name = FUNC_3(&VAR_4->dev);
 VAR_5->dci->dev_name = FUNC_3(&VAR_4->dev);

 if (FUNC_5(VAR_5->dci)) {
  FUNC_2(VAR_5->dci->dev, "failed to register with EDAC core\n");
  goto err;
 }

 FUNC_10(&VAR_5->notifier);

 return 0;

err:
 FUNC_8(VAR_5->dci);

 return -VAR_1;
}
