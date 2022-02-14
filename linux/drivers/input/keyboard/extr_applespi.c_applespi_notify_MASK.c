
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct applespi_data {int read_active; int cmd_msg_lock; TYPE_1__* spi; int rd_m; int suspended; } ;
typedef int acpi_handle ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct applespi_data*,int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static u32 FUNC_5(acpi_handle VAR_4, u32 VAR_5, void *VAR_6)
{
 struct applespi_data *VAR_7 = VAR_6;
 int VAR_8;
 unsigned long VAR_9;

 FUNC_4(VAR_1, VAR_2);

 FUNC_2(&VAR_7->cmd_msg_lock, VAR_9);

 if (!VAR_7->suspended) {
  VAR_8 = FUNC_0(VAR_7, &VAR_7->rd_m,
         VAR_3);
  if (VAR_8)
   FUNC_1(&VAR_7->spi->dev,
     "Error queueing async read to device: %d\n",
     VAR_8);
  else
   VAR_7->read_active = 1;
 }

 FUNC_3(&VAR_7->cmd_msg_lock, VAR_9);

 return VAR_0;
}
