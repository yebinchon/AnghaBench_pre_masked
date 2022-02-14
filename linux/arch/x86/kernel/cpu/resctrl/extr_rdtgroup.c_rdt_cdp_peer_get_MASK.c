
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_resource {int rid; } ;
struct rdt_domain {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rdt_domain*) ;




 scalar_t__ FUNC_1 (int ) ;
 struct rdt_domain* FUNC_2 (struct rdt_resource*,int ,int *) ;
 struct rdt_resource* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct rdt_resource *VAR_3, struct rdt_domain *VAR_4,
       struct rdt_resource **VAR_5,
       struct rdt_domain **VAR_6)
{
 struct rdt_resource *VAR_7 = ((void*)0);
 struct rdt_domain *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 switch (VAR_3->rid) {
 case 128:
  VAR_7 = &VAR_2[129];
  break;
 case 129:
  VAR_7 = &VAR_2[128];
  break;
 case 130:
  VAR_7 = &VAR_2[131];
  break;
 case 131:
  VAR_7 = &VAR_2[130];
  break;
 default:
  VAR_9 = -VAR_1;
  goto out;
 }
 VAR_8 = FUNC_2(VAR_7, VAR_4->id, ((void*)0));
 if (FUNC_1(FUNC_0(VAR_8))) {
  VAR_7 = ((void*)0);
  VAR_9 = -VAR_0;
 }

out:
 *VAR_5 = VAR_7;
 *VAR_6 = VAR_8;

 return VAR_9;
}
