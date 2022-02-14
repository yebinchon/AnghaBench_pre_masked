
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct iforce_core_effect {int flags; } ;
struct iforce {struct iforce_core_effect* core_effects; } ;
struct ff_effect {size_t id; int type; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iforce*,struct ff_effect*,struct ff_effect*) ;
 int FUNC_2 (struct iforce*,struct ff_effect*,struct ff_effect*) ;
 int FUNC_3 (struct iforce*,struct ff_effect*,struct ff_effect*) ;
 struct iforce* FUNC_4 (struct input_dev*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct input_dev *VAR_4, struct ff_effect *VAR_5, struct ff_effect *VAR_6)
{
 struct iforce *VAR_7 = FUNC_4(VAR_4);
 struct iforce_core_effect *VAR_8 = &VAR_7->core_effects[VAR_5->id];
 int VAR_9;

 if (FUNC_0(VAR_2, VAR_8->flags)) {

  if (FUNC_6(VAR_3, VAR_8->flags))
   return -VAR_0;
 }




 switch (VAR_5->type) {
 case 129:
  VAR_9 = FUNC_3(VAR_7, VAR_5, VAR_6);
  break;

 case 131:
  VAR_9 = FUNC_2(VAR_7, VAR_5, VAR_6);
  break;

 case 128:
 case 130:
  VAR_9 = FUNC_1(VAR_7, VAR_5, VAR_6);
  break;

 default:
  return -VAR_1;
 }

 if (VAR_9 == 0) {



  FUNC_5(VAR_3, VAR_8->flags);
 }
 return VAR_9;
}
