
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_dev {int iclk; int hw_version; int dev; } ;


 int FUNC_0 (struct atmel_sha_dev*) ;
 int FUNC_1 (struct atmel_sha_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct atmel_sha_dev *VAR_0)
{
 FUNC_1(VAR_0);

 VAR_0->hw_version = FUNC_0(VAR_0);

 FUNC_3(VAR_0->dev,
   "version: 0x%x\n", VAR_0->hw_version);

 FUNC_2(VAR_0->iclk);
}
