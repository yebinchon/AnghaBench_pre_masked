
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int tf ;
struct ata_taskfile {int feature; } ;
struct ata_port {TYPE_2__* ops; } ;
struct ata_device {int horkage; int devno; TYPE_1__* link; } ;
struct TYPE_4__ {scalar_t__ (* sff_check_status ) (struct ata_port*) ;int (* sff_tf_read ) (struct ata_port*,struct ata_taskfile*) ;int (* sff_dev_select ) (struct ata_port*,int ) ;} ;
struct TYPE_3__ {struct ata_port* ap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct ata_taskfile*) ;
 int FUNC_1 (struct ata_taskfile*,int ,int) ;
 int FUNC_2 (struct ata_port*,int ) ;
 int FUNC_3 (struct ata_port*,struct ata_taskfile*) ;
 scalar_t__ FUNC_4 (struct ata_port*) ;

unsigned int FUNC_5(struct ata_device *VAR_4, int VAR_5,
      u8 *VAR_6)
{
 struct ata_port *VAR_7 = VAR_4->link->ap;
 struct ata_taskfile VAR_8;
 unsigned int VAR_9;
 u8 VAR_10;

 VAR_7->ops->sff_dev_select(VAR_7, VAR_4->devno);

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));

 VAR_7->ops->sff_tf_read(VAR_7, &VAR_8);
 VAR_10 = VAR_8.feature;
 if (VAR_6)
  *VAR_6 = VAR_10;


 if (VAR_10 == 0)

  VAR_4->horkage |= VAR_3;
 else if (VAR_10 == 1)
                   ;
 else if ((VAR_4->devno == 0) && (VAR_10 == 0x81))
                   ;
 else
  return VAR_1;


 VAR_9 = FUNC_0(&VAR_8);

 if (VAR_9 == VAR_2) {






  if (VAR_5 && (VAR_4->horkage & VAR_3))
   VAR_9 = VAR_0;
  else
   VAR_9 = VAR_1;
 } else if ((VAR_9 == VAR_0) &&
     (VAR_7->ops->sff_check_status(VAR_7) == 0))
  VAR_9 = VAR_1;

 return VAR_9;
}
