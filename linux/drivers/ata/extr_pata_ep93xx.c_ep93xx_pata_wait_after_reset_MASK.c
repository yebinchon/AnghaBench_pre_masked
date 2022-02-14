
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ep93xx_pata_data {int dummy; } ;
struct ata_port {TYPE_2__* ops; TYPE_1__* host; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_4__ {int (* sff_dev_select ) (struct ata_port*,int) ;} ;
struct TYPE_3__ {struct ep93xx_pata_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_port*,int ) ;
 int FUNC_1 (struct ata_link*,unsigned long) ;
 int FUNC_2 (struct ep93xx_pata_data*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ata_port*,int) ;
 int FUNC_5 (struct ata_port*,int) ;
 int FUNC_6 (struct ata_port*,int) ;
 int FUNC_7 (struct ata_port*,int) ;

__attribute__((used)) static int FUNC_8(struct ata_link *VAR_4,
     unsigned int VAR_5,
     unsigned long VAR_6)
{
 struct ata_port *VAR_7 = VAR_4->ap;
 struct ep93xx_pata_data *VAR_8 = VAR_7->host->private_data;
 unsigned int VAR_9 = VAR_5 & (1 << 0);
 unsigned int VAR_10 = VAR_5 & (1 << 1);
 int VAR_11, VAR_12 = 0;

 FUNC_0(VAR_7, VAR_0);


 VAR_11 = FUNC_1(VAR_4, VAR_6);




 if (VAR_11)
  return VAR_11;





 if (VAR_10) {
  int VAR_13;

  VAR_7->ops->sff_dev_select(VAR_7, 1);






  for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
   u8 VAR_14, VAR_15;

   VAR_14 = FUNC_2(VAR_8,
    VAR_3);
   VAR_15 = FUNC_2(VAR_8,
    VAR_2);
   if (VAR_14 == 1 && VAR_15 == 1)
    break;
   FUNC_3(50);
  }

  VAR_11 = FUNC_1(VAR_4, VAR_6);
  if (VAR_11) {
   if (VAR_11 != -VAR_1)
    return VAR_11;
   VAR_12 = VAR_11;
  }
 }

 VAR_7->ops->sff_dev_select(VAR_7, 0);
 if (VAR_10)
  VAR_7->ops->sff_dev_select(VAR_7, 1);
 if (VAR_9)
  VAR_7->ops->sff_dev_select(VAR_7, 0);

 return VAR_12;
}
