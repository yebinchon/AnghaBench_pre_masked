
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
struct namedobj_instance {int dummy; } ;
struct named_object {void* set; int name; int refcnt; int ocnt; } ;
struct manage_sets_args {void* new_set; int set; } ;
typedef enum ipfw_sets_cmd { ____Placeholder_ipfw_sets_cmd } ipfw_sets_cmd ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct namedobj_instance*,int ,struct manage_sets_args*,int ) ;
 struct named_object* FUNC_1 (struct namedobj_instance*,int ) ;
 int * FUNC_2 (struct namedobj_instance*,void*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_3(struct namedobj_instance *VAR_6, uint16_t VAR_7,
    uint16_t VAR_8, uint8_t VAR_9, enum ipfw_sets_cmd VAR_10)
{
 struct manage_sets_args VAR_11;
 struct named_object *VAR_12;

 VAR_11.set = VAR_8;
 VAR_11.new_set = VAR_9;
 switch (VAR_10) {
 case 130:
  return (FUNC_0(VAR_6, VAR_4,
      &VAR_11, VAR_7));
 case 129:
  return (FUNC_0(VAR_6, VAR_5,
      &VAR_11, VAR_7));
 case 132:
  return (FUNC_0(VAR_6, VAR_3,
      &VAR_11, VAR_7));
 case 133:





  VAR_12 = FUNC_1(VAR_6, VAR_8);
  if (VAR_9 != 0)
   VAR_12->ocnt++;
  else
   VAR_12->ocnt = 0;
  return (0);
 case 128:

  VAR_12 = FUNC_1(VAR_6, VAR_8);
  if (VAR_12->ocnt != VAR_12->refcnt)
   return (VAR_0);
  if (FUNC_2(VAR_6, VAR_9, VAR_7,
      VAR_12->name) != ((void*)0))
   return (VAR_1);
  return (0);
 case 131:

  VAR_12 = FUNC_1(VAR_6, VAR_8);
  VAR_12->set = VAR_9;
  return (0);
 }
 return (VAR_2);
}
