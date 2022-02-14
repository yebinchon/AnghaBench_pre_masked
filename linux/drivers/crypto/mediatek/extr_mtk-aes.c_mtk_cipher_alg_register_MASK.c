
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_cryp {int dev; int aes_list; int * aes; int * irq; } ;
struct TYPE_2__ {int lock; int dev_list; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ,char*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct mtk_cryp*) ;
 int FUNC_7 (struct mtk_cryp*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct mtk_cryp*,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct mtk_cryp *VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_6->aes_list);


 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7)
  goto err_record;

 VAR_7 = FUNC_3(VAR_6->dev, VAR_6->irq[VAR_2], VAR_5,
          0, "mtk-aes", VAR_6->aes[0]);
 if (VAR_7) {
  FUNC_2(VAR_6->dev, "unable to request AES irq.\n");
  goto err_res;
 }

 VAR_7 = FUNC_3(VAR_6->dev, VAR_6->irq[VAR_3], VAR_5,
          0, "mtk-aes", VAR_6->aes[1]);
 if (VAR_7) {
  FUNC_2(VAR_6->dev, "unable to request AES irq.\n");
  goto err_res;
 }


 FUNC_9(VAR_6, FUNC_0(VAR_2), VAR_0);
 FUNC_9(VAR_6, FUNC_0(VAR_3), VAR_1);

 FUNC_10(&VAR_4.lock);
 FUNC_4(&VAR_6->aes_list, &VAR_4.dev_list);
 FUNC_11(&VAR_4.lock);

 VAR_7 = FUNC_8();
 if (VAR_7)
  goto err_algs;

 return 0;

err_algs:
 FUNC_10(&VAR_4.lock);
 FUNC_5(&VAR_6->aes_list);
 FUNC_11(&VAR_4.lock);
err_res:
 FUNC_6(VAR_6);
err_record:

 FUNC_2(VAR_6->dev, "mtk-aes initialization failed.\n");
 return VAR_7;
}
