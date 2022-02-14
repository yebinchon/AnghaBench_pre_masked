
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct component_ops {int dummy; } ;
struct component {int subcomponent; int node; scalar_t__ master; struct device* dev; struct component_ops const* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,struct component_ops const*) ;
 int FUNC_1 (struct component*) ;
 struct component* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,struct component*) ;
 int FUNC_8 (struct component*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_4, const struct component_ops *VAR_5,
 int VAR_6)
{
 struct component *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->ops = VAR_5;
 VAR_7->dev = VAR_4;
 VAR_7->subcomponent = VAR_6;

 FUNC_0(VAR_4, "adding component (ops %ps)\n", VAR_5);

 FUNC_5(&VAR_3);
 FUNC_3(&VAR_7->node, &VAR_2);

 VAR_8 = FUNC_8(VAR_7);
 if (VAR_8 < 0) {
  if (VAR_7->master)
   FUNC_7(VAR_7->master, VAR_7);
  FUNC_4(&VAR_7->node);

  FUNC_1(VAR_7);
 }
 FUNC_6(&VAR_3);

 return VAR_8 < 0 ? VAR_8 : 0;
}
