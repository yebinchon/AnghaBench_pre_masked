
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_port {unsigned int flags; TYPE_1__* ops; } ;
struct ata_link {int * device; struct ata_port* ap; } ;
struct TYPE_2__ {int (* sff_dev_select ) (struct ata_port*,int ) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct ata_port*,unsigned int,unsigned long) ;
 scalar_t__ FUNC_2 (struct ata_port*,int) ;
 int FUNC_3 (struct ata_link*,char*,int) ;
 unsigned int FUNC_4 (int *,unsigned int,int*) ;
 scalar_t__ FUNC_5 (struct ata_link*) ;
 int FUNC_6 (struct ata_port*,int ) ;

int FUNC_7(struct ata_link *VAR_2, unsigned int *VAR_3,
        unsigned long VAR_4)
{
 struct ata_port *VAR_5 = VAR_2->ap;
 unsigned int VAR_6 = VAR_5->flags & VAR_0;
 unsigned int VAR_7 = 0;
 int VAR_8;
 u8 VAR_9;

 FUNC_0("ENTER\n");


 if (FUNC_2(VAR_5, 0))
  VAR_7 |= (1 << 0);
 if (VAR_6 && FUNC_2(VAR_5, 1))
  VAR_7 |= (1 << 1);


 VAR_5->ops->sff_dev_select(VAR_5, 0);


 FUNC_0("about to softreset, devmask=%x\n", VAR_7);
 VAR_8 = FUNC_1(VAR_5, VAR_7, VAR_4);

 if (VAR_8 && (VAR_8 != -VAR_1 || FUNC_5(VAR_2))) {
  FUNC_3(VAR_2, "SRST failed (errno=%d)\n", VAR_8);
  return VAR_8;
 }


 VAR_3[0] = FUNC_4(&VAR_2->device[0],
       VAR_7 & (1 << 0), &VAR_9);
 if (VAR_6 && VAR_9 != 0x81)
  VAR_3[1] = FUNC_4(&VAR_2->device[1],
        VAR_7 & (1 << 1), &VAR_9);

 FUNC_0("EXIT, classes[0]=%u [1]=%u\n", VAR_3[0], VAR_3[1]);
 return 0;
}
