
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct fpga_manager {int state; int name; struct device dev; } ;
struct fpga_image_info {int dummy; } ;
struct firmware {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,char const*) ;
 int FUNC_1 (struct device*,char*,char const*,int ) ;
 int FUNC_2 (struct fpga_manager*,struct fpga_image_info*,int ,int ) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,char const*,struct device*) ;

__attribute__((used)) static int FUNC_5(struct fpga_manager *VAR_2,
      struct fpga_image_info *VAR_3,
      const char *VAR_4)
{
 struct device *VAR_5 = &VAR_2->dev;
 const struct firmware *VAR_6;
 int VAR_7;

 FUNC_1(VAR_5, "writing %s to %s\n", VAR_4, VAR_2->name);

 VAR_2->state = VAR_0;

 VAR_7 = FUNC_4(&VAR_6, VAR_4, VAR_5);
 if (VAR_7) {
  VAR_2->state = VAR_1;
  FUNC_0(VAR_5, "Error requesting firmware %s\n", VAR_4);
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_6->data, VAR_6->size);

 FUNC_3(VAR_6);

 return VAR_7;
}
