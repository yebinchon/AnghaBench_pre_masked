
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_sata_channel {int mtx; scalar_t__ oslots; int sim; } ;
typedef int device_t ;


 int VAR_0 ;
 struct fsl_sata_channel* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct fsl_sata_channel*,int *,int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct fsl_sata_channel *VAR_3 = FUNC_0(VAR_2);

 FUNC_3(&VAR_3->mtx);
 FUNC_5(VAR_3->sim, 1);
 while (VAR_3->oslots)
  FUNC_2(VAR_3, &VAR_3->mtx, VAR_0, "fsl_satasusp", VAR_1/100);
 FUNC_1(VAR_2);
 FUNC_4(&VAR_3->mtx);
 return (0);
}
