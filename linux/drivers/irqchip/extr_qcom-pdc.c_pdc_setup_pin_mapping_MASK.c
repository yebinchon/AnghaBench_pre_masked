
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int cnt; int parent_base; int pin_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct device_node*,char*,int) ;
 int FUNC_2 (struct device_node*,char*,int,int *) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = FUNC_1(VAR_5, "qcom,pdc-ranges", sizeof(u32));
 if (VAR_7 <= 0 || VAR_7 % 3)
  return -VAR_0;

 VAR_4 = VAR_7 / 3;
 VAR_3 = FUNC_0(VAR_4, sizeof(*VAR_3), VAR_2);
 if (!VAR_3) {
  VAR_4 = 0;
  return -VAR_1;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_2(VAR_5, "qcom,pdc-ranges",
       VAR_7 * 3 + 0,
       &VAR_3[VAR_7].pin_base);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_2(VAR_5, "qcom,pdc-ranges",
       VAR_7 * 3 + 1,
       &VAR_3[VAR_7].parent_base);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_2(VAR_5, "qcom,pdc-ranges",
       VAR_7 * 3 + 2,
       &VAR_3[VAR_7].cnt);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
