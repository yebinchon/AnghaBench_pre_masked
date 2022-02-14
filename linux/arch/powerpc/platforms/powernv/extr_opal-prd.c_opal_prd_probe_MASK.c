
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_7)
{
 int VAR_8;

 if (!VAR_7 || !VAR_7->dev.of_node)
  return -VAR_1;




 if (VAR_6)
  return -VAR_0;

 VAR_6 = VAR_7->dev.of_node;

 VAR_8 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_8) {
  FUNC_3("Couldn't register event notifier\n");
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_3, &VAR_5);
 if (VAR_8) {
  FUNC_3("Couldn't register PRD2 event notifier\n");
  return VAR_8;
 }

 VAR_8 = FUNC_0(&VAR_4);
 if (VAR_8) {
  FUNC_3("failed to register miscdev\n");
  FUNC_2(VAR_2,
    &VAR_5);
  return VAR_8;
 }

 return 0;
}
