
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cyapa {int gen; int operational; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* operational_check ) (struct cyapa*) ;} ;





 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_0 (struct cyapa*) ;
 int FUNC_1 (struct cyapa*,int) ;
 int FUNC_2 (struct cyapa*) ;

__attribute__((used)) static int FUNC_3(struct cyapa *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, 4000);
 if (VAR_5)
  return VAR_5;

 switch (VAR_4->gen) {
 case 128:
  VAR_4->ops = &VAR_3;
  break;
 case 129:
  VAR_4->ops = &VAR_2;
  break;
 case 130:
  VAR_4->ops = &VAR_1;
  break;
 default:
  return -VAR_0;
 }

 VAR_5 = VAR_4->ops->operational_check(VAR_4);
 if (!VAR_5 && FUNC_0(VAR_4))
  VAR_4->operational = 1;
 else
  VAR_4->operational = 0;

 return VAR_5;
}
