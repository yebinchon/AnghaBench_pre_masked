
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_8__ {int line; int max_frame_size; struct TYPE_8__* next_device; TYPE_1__* p_dev; int port; int irq_level; int io_base; int device_name; } ;
struct TYPE_7__ {int dev; } ;
typedef TYPE_2__ MGSLPC_INFO ;


 scalar_t__ FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int* VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,char*,int) ;
 struct device* FUNC_6 (int *,int ,size_t,int *) ;

__attribute__((used)) static int FUNC_7(MGSLPC_INFO *VAR_5)
{
 MGSLPC_INFO *VAR_6 = ((void*)0);
 struct device *VAR_7;
 int VAR_8;

 VAR_5->next_device = ((void*)0);
 VAR_5->line = VAR_2;
 FUNC_5(VAR_5->device_name,"ttySLP%d",VAR_5->line);

 if (VAR_5->line < VAR_0) {
  if (VAR_1[VAR_5->line])
   VAR_5->max_frame_size = VAR_1[VAR_5->line];
 }

 VAR_2++;

 if (!VAR_3)
  VAR_3 = VAR_5;
 else {
  VAR_6 = VAR_3;
  while (VAR_6->next_device)
   VAR_6 = VAR_6->next_device;
  VAR_6->next_device = VAR_5;
 }

 if (VAR_5->max_frame_size < 4096)
  VAR_5->max_frame_size = 4096;
 else if (VAR_5->max_frame_size > 65535)
  VAR_5->max_frame_size = 65535;

 FUNC_4("SyncLink PC Card %s:IO=%04X IRQ=%d\n",
  VAR_5->device_name, VAR_5->io_base, VAR_5->irq_level);







 VAR_7 = FUNC_6(&VAR_5->port, VAR_4, VAR_5->line,
   &VAR_5->p_dev->dev);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);



  goto failed;
 }

 return 0;

failed:
 if (VAR_6)
  VAR_6->next_device = ((void*)0);
 else
  VAR_3 = ((void*)0);
 VAR_2--;
 return VAR_8;
}
