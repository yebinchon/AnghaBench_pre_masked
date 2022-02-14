
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
typedef int oppanel_line_t ;
struct TYPE_9__ {void* line; void* line_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char,int) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (struct device_node*,char*,int*) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char*,int,int,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 u32 VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_6(VAR_8, "#length", &VAR_9);
 if (VAR_10) {
  FUNC_8("Operator panel length property not found\n");
  return VAR_10;
 }
 VAR_10 = FUNC_6(VAR_8, "#lines", &VAR_2);
 if (VAR_10) {
  FUNC_8("Operator panel lines property not found\n");
  return VAR_10;
 }
 VAR_6 = VAR_9 * VAR_2;

 FUNC_7("Operator panel of size %u found with %u lines of length %u\n",
   VAR_6, VAR_2, VAR_9);

 VAR_3 = FUNC_2(VAR_6, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_2, sizeof(oppanel_line_t), VAR_1);
 if (!VAR_5) {
  VAR_10 = -VAR_0;
  goto free_oppanel_data;
 }

 FUNC_4(VAR_3, ' ', VAR_6);
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_5[VAR_11].line_len = FUNC_1(VAR_9);
  VAR_5[VAR_11].line = FUNC_1(FUNC_0(&VAR_3[VAR_11 *
      VAR_9]));
 }

 VAR_10 = FUNC_5(&VAR_4);
 if (VAR_10) {
  FUNC_8("Failed to register as misc device\n");
  goto free_oppanel;
 }

 return 0;

free_oppanel:
 FUNC_3(VAR_5);
free_oppanel_data:
 FUNC_3(VAR_3);
 return VAR_10;
}
