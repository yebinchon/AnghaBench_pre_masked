
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_3->dev, "initialising\n");

 VAR_4 = FUNC_5(VAR_1, "osiris-dvs");
 if (VAR_4) {
  FUNC_1(&VAR_3->dev, "cannot claim gpio\n");
  goto err_nogpio;
 }


 FUNC_3(VAR_1, 1);

 VAR_4 = FUNC_0(&VAR_2,
     VAR_0);
 if (VAR_4) {
  FUNC_1(&VAR_3->dev, "failed to register with cpufreq\n");
  goto err_nofreq;
 }

 FUNC_6(1);

 return 0;

err_nofreq:
 FUNC_4(VAR_1);

err_nogpio:
 return VAR_4;
}
