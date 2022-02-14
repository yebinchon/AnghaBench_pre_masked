
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {int dummy; } ;
struct device_node {struct device_node* sibling; struct device_node* child; } ;
struct ata_port {TYPE_1__* host; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct ata_port** ports; int dev; } ;


 struct ata_port* FUNC_0 (struct Scsi_Host*) ;
 int* FUNC_1 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,struct device_node*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_0, struct Scsi_Host *VAR_1)
{
 struct ata_port *VAR_2;
 struct device_node *VAR_3;
 int VAR_4;


 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return 0;


 VAR_3 = FUNC_2(FUNC_4(VAR_2->host->dev));
 if (VAR_3 == ((void*)0))
  return 0;


 VAR_4 = (VAR_2 == VAR_2->host->ports[0]) ? 0 : 1;
 for (VAR_3 = VAR_3->child; VAR_3 != ((void*)0); VAR_3 = VAR_3->sibling) {
  const u32 *VAR_5 = FUNC_1(VAR_3, "reg", ((void*)0));
  if (!VAR_5)
   continue;
  if (VAR_4 == *VAR_5) {
   FUNC_3(VAR_0, "devspec: %pOF\n", VAR_3);
   break;
  }
 }
 return 0;
}
