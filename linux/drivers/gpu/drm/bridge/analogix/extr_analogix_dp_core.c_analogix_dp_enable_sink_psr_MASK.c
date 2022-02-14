
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct analogix_dp_device {int psr_supported; int dev; int aux; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct analogix_dp_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ,unsigned char*) ;
 int FUNC_3 (int *,int ,unsigned char) ;

__attribute__((used)) static int FUNC_4(struct analogix_dp_device *VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;


 VAR_5 = FUNC_2(&VAR_3->aux, VAR_2, &VAR_4);
 if (VAR_5 != 1) {
  FUNC_1(VAR_3->dev, "failed to get psr config\n");
  goto end;
 }

 VAR_4 &= ~VAR_1;
 VAR_5 = FUNC_3(&VAR_3->aux, VAR_2, VAR_4);
 if (VAR_5 != 1) {
  FUNC_1(VAR_3->dev, "failed to disable panel psr\n");
  goto end;
 }


 VAR_4 = VAR_0;
 VAR_5 = FUNC_3(&VAR_3->aux, VAR_2, VAR_4);
 if (VAR_5 != 1) {
  FUNC_1(VAR_3->dev, "failed to set panel psr\n");
  goto end;
 }


 VAR_4 = VAR_1 | VAR_0;
 VAR_5 = FUNC_3(&VAR_3->aux, VAR_2, VAR_4);
 if (VAR_5 != 1) {
  FUNC_1(VAR_3->dev, "failed to set panel psr\n");
  goto end;
 }

 FUNC_0(VAR_3);

 VAR_3->psr_supported = 1;

 return 0;
end:
 FUNC_1(VAR_3->dev, "enable psr fail, force to disable psr\n");

 return VAR_5;
}
