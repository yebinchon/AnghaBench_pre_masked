
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dual_link; } ;
struct thc63_dev {TYPE_1__ timings; TYPE_2__* dev; int next; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,int ,int) ;
 struct device_node* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;

__attribute__((used)) static int FUNC_7(struct thc63_dev *VAR_4)
{
 struct device_node *VAR_5;
 struct device_node *VAR_6;

 VAR_5 = FUNC_4(VAR_4->dev->of_node,
       VAR_3, -1);
 if (!VAR_5) {
  FUNC_1(VAR_4->dev, "Missing endpoint in port@%u\n",
   VAR_3);
  return -VAR_0;
 }

 VAR_6 = FUNC_5(VAR_5);
 FUNC_6(VAR_5);
 if (!VAR_6) {
  FUNC_1(VAR_4->dev, "Endpoint in port@%u unconnected\n",
   VAR_3);
  return -VAR_0;
 }

 if (!FUNC_2(VAR_6)) {
  FUNC_1(VAR_4->dev, "port@%u remote endpoint is disabled\n",
   VAR_3);
  FUNC_6(VAR_6);
  return -VAR_0;
 }

 VAR_4->next = FUNC_3(VAR_6);
 FUNC_6(VAR_6);
 if (!VAR_4->next)
  return -VAR_1;

 VAR_5 = FUNC_4(VAR_4->dev->of_node,
       VAR_2, -1);
 if (VAR_5) {
  VAR_6 = FUNC_5(VAR_5);
  FUNC_6(VAR_5);

  if (VAR_6) {
   if (FUNC_2(VAR_6))
    VAR_4->timings.dual_link = 1;
   FUNC_6(VAR_6);
  }
 }

 FUNC_0(VAR_4->dev, "operating in %s-link mode\n",
  VAR_4->timings.dual_link ? "dual" : "single");

 return 0;
}
