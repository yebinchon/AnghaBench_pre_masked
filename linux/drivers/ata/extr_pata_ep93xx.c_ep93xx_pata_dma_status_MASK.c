
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ep93xx_pata_data {scalar_t__ ide_base; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct ep93xx_pata_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct ata_port *VAR_12)
{
 struct ep93xx_pata_data *VAR_13 = VAR_12->host->private_data;
 u32 VAR_14 = FUNC_0(VAR_13->ide_base + VAR_5);
 if (VAR_14 & VAR_10 || VAR_14 & VAR_9 ||
     VAR_14 & VAR_8 || VAR_14 & VAR_7)
  return VAR_1;


 if (FUNC_0(VAR_13->ide_base + VAR_3) & VAR_4)
  return VAR_2;

 if (VAR_14 & VAR_11 || VAR_14 & VAR_6)
  return VAR_0;

 return 0;
}
