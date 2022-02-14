
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct component_match {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,struct component_match**) ;
 int VAR_1 ;
 int VAR_2 ;
 struct device* FUNC_2 (struct device*,int *,int ) ;
 int FUNC_3 (struct device*,struct component_match**,int ,int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ,int *,int *,struct device*) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3,
      struct component_match **VAR_4)
{
 struct device *VAR_5;
 int VAR_6;







 if (FUNC_4(VAR_3->of_node, "qcom,mdss") ||
     FUNC_4(VAR_3->of_node, "qcom,sdm845-mdss")) {
  VAR_6 = FUNC_6(VAR_3->of_node, ((void*)0), ((void*)0), VAR_3);
  if (VAR_6) {
   FUNC_0(VAR_3, "failed to populate children devices\n");
   return VAR_6;
  }

  VAR_5 = FUNC_2(VAR_3, ((void*)0), VAR_1);
  if (!VAR_5) {
   FUNC_0(VAR_3, "failed to find MDSS MDP node\n");
   FUNC_5(VAR_3);
   return -VAR_0;
  }

  FUNC_7(VAR_5);


  FUNC_3(VAR_3, VAR_4, VAR_2,
        VAR_5->of_node);
 } else {

  VAR_5 = VAR_3;
 }

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6)
  FUNC_5(VAR_3);

 return VAR_6;
}
