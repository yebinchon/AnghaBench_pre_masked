
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_tis_spi_phy {int priv; int iobuf; struct spi_device* spi_device; } ;
struct spi_device {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 struct tpm_tis_spi_phy* FUNC_1 (int *,int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_4)
{
 struct tpm_tis_spi_phy *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(&VAR_4->dev, sizeof(struct tpm_tis_spi_phy),
      VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->spi_device = VAR_4;

 VAR_5->iobuf = FUNC_0(&VAR_4->dev, VAR_2, VAR_1);
 if (!VAR_5->iobuf)
  return -VAR_0;


 if (VAR_4->irq > 0)
  VAR_6 = VAR_4->irq;
 else
  VAR_6 = -1;

 return FUNC_2(&VAR_4->dev, &VAR_5->priv, VAR_6, &VAR_3,
     ((void*)0));
}
