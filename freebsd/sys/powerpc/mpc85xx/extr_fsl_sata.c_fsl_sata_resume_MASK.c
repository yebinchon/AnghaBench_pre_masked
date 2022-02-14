
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_sata_channel {int mtx; int sim; } ;
typedef int device_t ;


 int VAR_0 ;
 struct fsl_sata_channel* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fsl_sata_channel*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct fsl_sata_channel *VAR_2 = FUNC_0(VAR_1);

 FUNC_3(&VAR_2->mtx);
 FUNC_1(VAR_1);
 FUNC_2(VAR_2);
 FUNC_5(VAR_2->sim, VAR_0);
 FUNC_4(&VAR_2->mtx);
 return (0);
}
