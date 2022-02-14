
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct touchscreen_data {TYPE_1__* input; struct ipaq_micro* micro; } ;
struct TYPE_11__ {int parent; } ;
struct platform_device {TYPE_5__ dev; } ;
struct ipaq_micro {int dummy; } ;
struct TYPE_10__ {char* name; int close; int open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*,char*) ;
 struct ipaq_micro* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 TYPE_1__* FUNC_3 (TYPE_5__*) ;
 struct touchscreen_data* FUNC_4 (TYPE_5__*,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,struct touchscreen_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct platform_device*,struct touchscreen_data*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_9)
{
 struct ipaq_micro *VAR_10 = FUNC_1(VAR_9->dev.parent);
 struct touchscreen_data *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(&VAR_9->dev, sizeof(*VAR_11), VAR_6);
 if (!VAR_11)
  return -VAR_3;

 VAR_11->micro = VAR_10;

 VAR_11->input = FUNC_3(&VAR_9->dev);
 if (!VAR_11->input) {
  FUNC_0(&VAR_9->dev, "failed to allocate input device\n");
  return -VAR_3;
 }

 VAR_11->input->name = "ipaq micro ts";
 VAR_11->input->open = VAR_8;
 VAR_11->input->close = VAR_7;

 FUNC_8(VAR_11->input, VAR_11);

 FUNC_7(VAR_11->input, VAR_5, VAR_2);
 FUNC_7(VAR_11->input, VAR_4, VAR_0);
 FUNC_7(VAR_11->input, VAR_4, VAR_1);
 FUNC_6(VAR_11->input, VAR_0, 0, 1023, 0, 0);
 FUNC_6(VAR_11->input, VAR_1, 0, 1023, 0, 0);

 VAR_12 = FUNC_5(VAR_11->input);
 if (VAR_12) {
  FUNC_0(&VAR_9->dev, "error registering touch input\n");
  return VAR_12;
 }

 FUNC_9(VAR_9, VAR_11);

 FUNC_2(&VAR_9->dev, "iPAQ micro touchscreen\n");

 return 0;
}
