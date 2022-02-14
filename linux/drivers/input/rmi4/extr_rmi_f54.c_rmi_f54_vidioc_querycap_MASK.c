
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct f54_data {TYPE_1__* fn; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;
 struct f54_data* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
       struct v4l2_capability *VAR_4)
{
 struct f54_data *VAR_5 = FUNC_3(VAR_2);

 FUNC_2(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_2(VAR_4->card, VAR_1, sizeof(VAR_4->card));
 FUNC_1(VAR_4->bus_info, sizeof(VAR_4->bus_info),
  "rmi4:%s", FUNC_0(&VAR_5->fn->dev));

 return 0;
}
