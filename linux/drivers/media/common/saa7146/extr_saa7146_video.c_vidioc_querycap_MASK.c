
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int capabilities; scalar_t__ bus_info; scalar_t__ card; scalar_t__ driver; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {TYPE_2__* ext_vv_data; int pci; TYPE_1__* ext; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int capabilities; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6, struct v4l2_capability *VAR_7)
{
 struct saa7146_dev *VAR_8 = ((struct saa7146_fh *)VAR_6)->dev;

 FUNC_2((char *)VAR_7->driver, "saa7146 v4l2", sizeof(VAR_7->driver));
 FUNC_2((char *)VAR_7->card, VAR_8->ext->name, sizeof(VAR_7->card));
 FUNC_1((char *)VAR_7->bus_info, "PCI:%s", FUNC_0(VAR_8->pci));
 VAR_7->capabilities = VAR_3 | VAR_4 |
       VAR_1 | VAR_2 |
       VAR_0;
 VAR_7->capabilities |= VAR_8->ext_vv_data->capabilities;
 return 0;
}
