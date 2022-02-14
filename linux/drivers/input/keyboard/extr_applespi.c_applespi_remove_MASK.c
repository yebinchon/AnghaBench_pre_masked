
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct applespi_data {int debugfs_root; int gpe; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct applespi_data*) ;
 int FUNC_3 (struct applespi_data*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct applespi_data* FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_1)
{
 struct applespi_data *VAR_2 = FUNC_6(VAR_1);

 FUNC_3(VAR_2);

 FUNC_0(((void*)0), VAR_2->gpe);
 FUNC_1(((void*)0), VAR_2->gpe, VAR_0);
 FUNC_5(&VAR_1->dev);

 FUNC_2(VAR_2);

 FUNC_4(VAR_2->debugfs_root);

 return 0;
}
