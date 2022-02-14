
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockopt_data {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;
typedef int ipfw_obj_ntlv ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct named_object*,int *) ;
 scalar_t__ FUNC_2 (struct sockopt_data*,int) ;
 struct named_object* FUNC_3 (struct namedobj_instance*,int ) ;

__attribute__((used)) static int
FUNC_4(struct namedobj_instance *VAR_1, uint16_t VAR_2,
    struct sockopt_data *VAR_3)
{
 struct named_object *VAR_4;
 ipfw_obj_ntlv *VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 FUNC_0(VAR_4 != ((void*)0), ("invalid object kernel index passed"));

 VAR_5 = (ipfw_obj_ntlv *)FUNC_2(VAR_3, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_4, VAR_5);
 return (0);
}
