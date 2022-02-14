
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hci_dev {int dummy; } ;
struct btmtksdio_dev {int func; int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*) ;
 int VAR_15 ;
 int VAR_16 ;
 struct btmtksdio_dev* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int ,struct btmtksdio_dev*,int,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,int ,int*) ;

__attribute__((used)) static int FUNC_11(struct hci_dev *VAR_17)
{
 struct btmtksdio_dev *VAR_18 = FUNC_1(VAR_17);
 int VAR_19;
 u32 VAR_20;

 FUNC_3(VAR_18->func);

 VAR_19 = FUNC_6(VAR_18->func);
 if (VAR_19 < 0)
  goto err_release_host;


 FUNC_10(VAR_18->func, VAR_1, VAR_7, &VAR_19);
 if (VAR_19 < 0)
  goto err_disable_func;

 VAR_19 = FUNC_2(VAR_15, VAR_18, VAR_20,
     VAR_20 & VAR_0, 2000, 1000000);
 if (VAR_19 < 0) {
  FUNC_0(VAR_18->hdev, "Cannot get ownership from device");
  goto err_disable_func;
 }


 FUNC_10(VAR_18->func, VAR_3, VAR_7, &VAR_19);
 if (VAR_19 < 0)
  goto err_disable_func;

 FUNC_10(VAR_18->func, 0, VAR_6, &VAR_19);
 if (VAR_19 < 0)
  goto err_disable_func;

 VAR_19 = FUNC_4(VAR_18->func, VAR_16);
 if (VAR_19 < 0)
  goto err_disable_func;

 VAR_19 = FUNC_9(VAR_18->func, VAR_9);
 if (VAR_19 < 0)
  goto err_release_irq;




 FUNC_10(VAR_18->func, VAR_11 | VAR_12,
      VAR_8, &VAR_19);
 if (VAR_19 < 0)
  goto err_release_irq;


 FUNC_10(VAR_18->func, VAR_2, VAR_5, &VAR_19);
 if (VAR_19 < 0)
  goto err_release_irq;


 FUNC_10(VAR_18->func, VAR_10 | VAR_13 | VAR_14,
      VAR_6, &VAR_19);
 if (VAR_19 < 0)
  goto err_release_irq;


 FUNC_10(VAR_18->func, VAR_4, VAR_7, &VAR_19);
 if (VAR_19 < 0)
  goto err_release_irq;

 FUNC_7(VAR_18->func);

 return 0;

err_release_irq:
 FUNC_8(VAR_18->func);

err_disable_func:
 FUNC_5(VAR_18->func);

err_release_host:
 FUNC_7(VAR_18->func);

 return VAR_19;
}
