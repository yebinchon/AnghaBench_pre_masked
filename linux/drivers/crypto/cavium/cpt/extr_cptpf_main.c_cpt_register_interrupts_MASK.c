
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct cpt_device {TYPE_1__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cpt_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ,int ,char*,struct cpt_device*) ;

__attribute__((used)) static int FUNC_7(struct cpt_device *VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = &VAR_3->pdev->dev;


 VAR_4 = FUNC_3(VAR_3->pdev, VAR_0,
   VAR_0, VAR_1);
 if (VAR_4 < 0) {
  FUNC_2(&VAR_3->pdev->dev, "Request for #%d msix vectors failed\n",
   VAR_0);
  return VAR_4;
 }


 VAR_4 = FUNC_6(FUNC_5(VAR_3->pdev, FUNC_0(0)),
     VAR_2, 0, "CPT Mbox0", VAR_3);
 if (VAR_4)
  goto fail;


 FUNC_1(VAR_3);
 return 0;

fail:
 FUNC_2(VAR_5, "Request irq failed\n");
 FUNC_4(VAR_3->pdev);
 return VAR_4;
}
