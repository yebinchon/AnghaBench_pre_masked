
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sata_rcar_priv {scalar_t__ base; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct sata_rcar_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct ata_port *VAR_5)
{
 struct sata_rcar_priv *VAR_6 = VAR_5->host->private_data;
 u8 VAR_7 = 0;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_6->base + VAR_2);
 if (VAR_8 & VAR_1)
  VAR_7 |= VAR_4;
 if (VAR_8 & VAR_0)
  VAR_7 |= VAR_3;

 return VAR_7;
}
