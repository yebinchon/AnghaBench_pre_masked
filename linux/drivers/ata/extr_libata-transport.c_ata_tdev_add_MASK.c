
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int release; int * parent; } ;
struct ata_port {int print_id; } ;
struct ata_link {int pmp; int tdev; struct ata_port* ap; } ;
struct ata_device {int devno; struct ata_link* link; struct device tdev; } ;


 int FUNC_0 (struct ata_device*) ;
 scalar_t__ FUNC_1 (struct ata_link*) ;
 int FUNC_2 (struct ata_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct device*,char*,int ,int ) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct ata_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->tdev;
 struct ata_link *VAR_3 = VAR_1->link;
 struct ata_port *VAR_4 = VAR_3->ap;
 int VAR_5;

 FUNC_5(VAR_2);
 VAR_2->parent = &VAR_3->tdev;
 VAR_2->release = VAR_0;
 if (FUNC_1(VAR_3))
  FUNC_3(VAR_2, "dev%d.%d", VAR_4->print_id,VAR_1->devno);
        else
  FUNC_3(VAR_2, "dev%d.%d.0", VAR_4->print_id, VAR_3->pmp);

 FUNC_8(VAR_2);
 FUNC_0(VAR_1);
 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5) {
  FUNC_2(VAR_1);
  return VAR_5;
 }

 FUNC_6(VAR_2);
 FUNC_7(VAR_2);
 return 0;
}
