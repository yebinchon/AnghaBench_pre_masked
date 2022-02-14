
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct node {TYPE_1__ dev; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int cpumask_var_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct node* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4, bool VAR_5, char *VAR_6)
{
 ssize_t VAR_7;
 cpumask_var_t VAR_8;
 struct node *VAR_9 = FUNC_6(VAR_4);


 FUNC_0((VAR_1/32 * 9) > (VAR_2-1));

 if (!FUNC_1(&VAR_8, VAR_0))
  return 0;

 FUNC_3(VAR_8, FUNC_4(VAR_9->dev.id), VAR_3);
 VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_8);
 FUNC_5(VAR_8);

 return VAR_7;
}
