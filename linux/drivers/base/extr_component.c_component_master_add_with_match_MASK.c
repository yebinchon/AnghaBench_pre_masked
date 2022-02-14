
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct master {int node; struct component_match* match; struct component_master_ops const* ops; struct device* dev; } ;
struct device {int dummy; } ;
struct component_match {int num; } ;
struct component_master_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct master*) ;
 int FUNC_1 (struct device*,struct component_match*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct master*) ;
 struct master* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct master*,int *) ;

int FUNC_8(struct device *VAR_4,
 const struct component_master_ops *VAR_5,
 struct component_match *VAR_6)
{
 struct master *VAR_7;
 int VAR_8;


 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_6->num);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_4;
 VAR_7->ops = VAR_5;
 VAR_7->match = VAR_6;

 FUNC_0(VAR_7);

 FUNC_5(&VAR_2);
 FUNC_4(&VAR_7->node, &VAR_3);

 VAR_8 = FUNC_7(VAR_7, ((void*)0));

 if (VAR_8 < 0)
  FUNC_2(VAR_7);

 FUNC_6(&VAR_2);

 return VAR_8 < 0 ? VAR_8 : 0;
}
