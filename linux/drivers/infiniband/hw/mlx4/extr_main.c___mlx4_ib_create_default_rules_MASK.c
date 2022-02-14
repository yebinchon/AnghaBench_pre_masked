
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_flow_spec {int type; int size; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_qp {int dummy; } ;
struct ib_flow_spec_ib {int dummy; } ;
struct default_rules {int* rules_create_list; } ;
struct _rule_hw {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

 int FUNC_1 (int ,int ,union ib_flow_spec*,struct _rule_hw*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(
  struct mlx4_ib_dev *VAR_1,
  struct ib_qp *VAR_2,
  const struct default_rules *VAR_3,
  struct _rule_hw *VAR_4) {
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->rules_create_list); VAR_6++) {
  int VAR_7;
  union ib_flow_spec VAR_8;
  switch (VAR_3->rules_create_list[VAR_6]) {
  case 0:

   continue;
  case 128:
   VAR_8.type = 128;
   VAR_8.size = sizeof(struct ib_flow_spec_ib);

   break;
  default:

   return -VAR_0;
  }

  VAR_7 = FUNC_1(VAR_1->dev, 0, &VAR_8,
          VAR_4);
  if (VAR_7 < 0) {
   FUNC_2("invalid parsing\n");
   return -VAR_0;
  }

  VAR_4 = (void *)VAR_4 + VAR_7;
  VAR_5 += VAR_7;
 }
 return VAR_5;
}
