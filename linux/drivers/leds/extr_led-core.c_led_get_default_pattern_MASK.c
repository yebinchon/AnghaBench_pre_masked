
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct led_classdev {TYPE_1__* dev; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_2__ {struct fwnode_handle* fwnode; } ;


 int VAR_0 ;
 int FUNC_0 (struct fwnode_handle*,char*) ;
 scalar_t__ FUNC_1 (struct fwnode_handle*,char*,int *,int) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;

u32 *FUNC_4(struct led_classdev *VAR_1, unsigned int *VAR_2)
{
 struct fwnode_handle *VAR_3 = VAR_1->dev->fwnode;
 u32 *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, "led-pattern");
 if (VAR_5 < 0)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_5, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 if (FUNC_1(VAR_3, "led-pattern", VAR_4, VAR_5)) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 *VAR_2 = VAR_5;

 return VAR_4;
}
