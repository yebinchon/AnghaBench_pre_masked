
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct scsi_device {size_t id; int request_queue; int host; } ;
struct pata_macio_priv {scalar_t__ kind; int pdev; } ;
struct TYPE_2__ {struct ata_device* device; } ;
struct ata_port {TYPE_1__ link; struct pata_macio_priv* private_data; } ;
struct ata_device {scalar_t__ class; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ata_device*,char*) ;
 int FUNC_2 (struct scsi_device*) ;
 struct ata_port* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static int FUNC_9(struct scsi_device *VAR_7)
{
 struct ata_port *VAR_8 = FUNC_3(VAR_7->host);
 struct pata_macio_priv *VAR_9 = VAR_8->private_data;
 struct ata_device *VAR_10;
 u16 VAR_11;
 int VAR_12;


 VAR_12 = FUNC_2(VAR_7);
 if (VAR_12)
  return VAR_12;


 VAR_10 = &VAR_8->link.device[VAR_7->id];


 if (VAR_9->kind == VAR_5) {
  FUNC_4(VAR_7->request_queue, 31);
  FUNC_5(VAR_7->request_queue, 31);


  FUNC_1(VAR_10, "OHare alignment limits applied\n");
  return 0;
 }


 if (VAR_10->class != VAR_0)
  return 0;


 if (VAR_9->kind == VAR_6 || VAR_9->kind == VAR_4) {

  FUNC_4(VAR_7->request_queue, 15);
  FUNC_5(VAR_7->request_queue, 15);






  FUNC_0(!VAR_9->pdev);
  FUNC_7(VAR_9->pdev, VAR_1, 0x08);
  FUNC_6(VAR_9->pdev, VAR_2, &VAR_11);
  FUNC_8(VAR_9->pdev, VAR_2,
          VAR_11 | VAR_3);


  FUNC_1(VAR_10, "K2/Shasta alignment limits applied\n");
 }

 return 0;
}
