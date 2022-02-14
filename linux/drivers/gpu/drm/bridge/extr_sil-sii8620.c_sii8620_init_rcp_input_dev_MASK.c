
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sii8620 {int error; struct rc_dev* rc_dev; int dev; } ;
struct TYPE_2__ {int bustype; } ;
struct rc_dev {char* input_phys; char* driver_name; char* device_name; int allowed_protocols; int map_name; TYPE_1__ input_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct rc_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct rc_dev*) ;
 int FUNC_3 (struct rc_dev*) ;

__attribute__((used)) static void FUNC_4(struct sii8620 *VAR_5)
{
 struct rc_dev *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2);
 if (!VAR_6) {
  FUNC_0(VAR_5->dev, "Failed to allocate RC device\n");
  VAR_5->error = -VAR_1;
  return;
 }

 VAR_6->input_phys = "sii8620/input0";
 VAR_6->input_id.bustype = VAR_0;
 VAR_6->map_name = VAR_3;
 VAR_6->allowed_protocols = VAR_4;
 VAR_6->driver_name = "sii8620";
 VAR_6->device_name = "sii8620";

 VAR_7 = FUNC_3(VAR_6);

 if (VAR_7) {
  FUNC_0(VAR_5->dev, "Failed to register RC device\n");
  VAR_5->error = VAR_7;
  FUNC_2(VAR_5->rc_dev);
  return;
 }
 VAR_5->rc_dev = VAR_6;
}
