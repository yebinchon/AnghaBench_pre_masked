
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_acf {int dev; scalar_t__ sram; int sram_pool; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct fsi_master_acf*) ;
 int FUNC_4 (int ,unsigned long,int ) ;
 int FUNC_5 (struct fsi_master_acf*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct fsi_master_acf* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_1)
{
 struct fsi_master_acf *VAR_2 = FUNC_9(FUNC_2(VAR_1));


 FUNC_6(&VAR_2->lock);
 FUNC_3(VAR_2);
 FUNC_0(((void*)0), ((void*)0));
 FUNC_7(&VAR_2->lock);


 FUNC_4(VAR_2->sram_pool, (unsigned long)VAR_2->sram, VAR_0);
 FUNC_8(FUNC_1(VAR_2->dev));

 FUNC_5(VAR_2);
}
