
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_uobject {int dummy; } ;
typedef enum uverbs_obj_access { ____Placeholder_uverbs_obj_access } uverbs_obj_access ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ib_uobject*,struct uverbs_attr_bundle*) ;
 int FUNC_2 (struct ib_uobject*,struct uverbs_attr_bundle*) ;
 int FUNC_3 (struct ib_uobject*,int ) ;

int FUNC_4(struct ib_uobject *VAR_4,
      enum uverbs_obj_access VAR_5, bool VAR_6,
      struct uverbs_attr_bundle *VAR_7)
{
 int VAR_8 = 0;







 switch (VAR_5) {
 case 129:
  FUNC_3(VAR_4, VAR_2);
  break;
 case 128:
  FUNC_3(VAR_4, VAR_3);
  break;
 case 131:
  if (VAR_4)
   FUNC_3(VAR_4, VAR_1);
  break;
 case 130:
  if (VAR_6)
   VAR_8 = FUNC_2(VAR_4, VAR_7);
  else
   FUNC_1(VAR_4, VAR_7);
  break;
 default:
  FUNC_0(1);
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
