
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ep93xx_pata_data {int dummy; } ;
struct ata_queued_cmd {TYPE_2__* dev; } ;
struct ata_port {TYPE_3__* host; } ;
struct TYPE_6__ {struct ep93xx_pata_data* private_data; } ;
struct TYPE_5__ {TYPE_1__* link; } ;
struct TYPE_4__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ep93xx_pata_data*,int ) ;
 int FUNC_2 (struct ep93xx_pata_data*,int ,int ) ;
 int FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_5(struct ata_queued_cmd *VAR_2,
       unsigned char *VAR_3,
       unsigned int VAR_4, int VAR_5)
{
 struct ata_port *VAR_6 = VAR_2->dev->link->ap;
 struct ep93xx_pata_data *VAR_7 = VAR_6->host->private_data;
 u16 *VAR_8 = (u16 *)VAR_3;
 unsigned int VAR_9 = VAR_4 >> 1;


 while (VAR_9--)
  if (VAR_5 == VAR_1)
   *VAR_8++ = FUNC_0(
    FUNC_1(
     VAR_7, VAR_0));
  else
   FUNC_2(VAR_7, FUNC_3(*VAR_8++),
    VAR_0);


 if (FUNC_4(VAR_4 & 0x01)) {
  unsigned char VAR_10[2] = { };

  VAR_3 += VAR_4 - 1;

  if (VAR_5 == VAR_1) {
   *VAR_10 = FUNC_0(
    FUNC_1(
     VAR_7, VAR_0));
   *VAR_3 = VAR_10[0];
  } else {
   VAR_10[0] = *VAR_3;
   FUNC_2(VAR_7, FUNC_3(*VAR_10),
       VAR_0);
  }
  VAR_9++;
 }

 return VAR_9 << 1;
}
