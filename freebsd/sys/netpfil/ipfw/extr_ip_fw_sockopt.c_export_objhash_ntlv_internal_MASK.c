
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt_data {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;
typedef int ipfw_obj_ntlv ;


 int VAR_0 ;
 int FUNC_0 (struct named_object*,int *) ;
 scalar_t__ FUNC_1 (struct sockopt_data*,int) ;

__attribute__((used)) static int
FUNC_2(struct namedobj_instance *VAR_1,
    struct named_object *VAR_2, void *VAR_3)
{
 struct sockopt_data *VAR_4;
 ipfw_obj_ntlv *VAR_5;

 VAR_4 = (struct sockopt_data *)VAR_3;
 VAR_5 = (ipfw_obj_ntlv *)FUNC_1(VAR_4, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 FUNC_0(VAR_2, VAR_5);
 return (0);
}
