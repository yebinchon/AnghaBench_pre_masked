
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rmi_function {int dev; } ;
struct rmi_f34_firmware {int * data; int config_size; int image_size; } ;
struct f34_data {int update_size; scalar_t__ update_progress; struct rmi_function* fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct f34_data*,int ,int ,int) ;
 int FUNC_3 (struct f34_data*,int *) ;
 int FUNC_4 (struct f34_data*,int *) ;

__attribute__((used)) static int FUNC_5(struct f34_data *VAR_3,
      const struct rmi_f34_firmware *VAR_4)
{
 struct rmi_function *VAR_5 = VAR_3->fn;
 u32 VAR_6 = FUNC_1(VAR_4->image_size);
 u32 VAR_7 = FUNC_1(VAR_4->config_size);
 int VAR_8;

 VAR_3->update_progress = 0;
 VAR_3->update_size = VAR_6 + VAR_7;

 if (VAR_6) {
  FUNC_0(&VAR_5->dev, "Erasing firmware...\n");
  VAR_8 = FUNC_2(VAR_3, VAR_0,
          VAR_2, 1);
  if (VAR_8)
   return VAR_8;

  FUNC_0(&VAR_5->dev, "Writing firmware (%d bytes)...\n",
    VAR_6);
  VAR_8 = FUNC_4(VAR_3, VAR_4->data);
  if (VAR_8)
   return VAR_8;
 }

 if (VAR_7) {




  if (!VAR_6) {
   FUNC_0(&VAR_5->dev, "Erasing config...\n");
   VAR_8 = FUNC_2(VAR_3, VAR_1,
           VAR_2, 1);
   if (VAR_8)
    return VAR_8;
  }

  FUNC_0(&VAR_5->dev, "Writing config (%d bytes)...\n",
    VAR_7);
  VAR_8 = FUNC_3(VAR_3, &VAR_4->data[VAR_6]);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
