
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct sockopt_data {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int name; int kidx; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_3__ {int length; int type; } ;
struct TYPE_4__ {int name; int idx; TYPE_1__ head; } ;
typedef TYPE_2__ ipfw_obj_ntlv ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct sockopt_data*,int) ;
 struct named_object* FUNC_3 (struct namedobj_instance*,int ) ;
 int FUNC_4 (int ,int ,int) ;

int
FUNC_5(struct ip_fw_chain *VAR_2, uint16_t VAR_3,
    struct sockopt_data *VAR_4)
{
 struct namedobj_instance *VAR_5;
 struct named_object *VAR_6;
 ipfw_obj_ntlv *VAR_7;

 VAR_5 = FUNC_0(VAR_2);

 VAR_6 = FUNC_3(VAR_5, VAR_3);
 FUNC_1(VAR_6 != ((void*)0), ("invalid table kidx passed"));

 VAR_7 = (ipfw_obj_ntlv *)FUNC_2(VAR_4, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_7->head.type = VAR_1;
 VAR_7->head.length = sizeof(*VAR_7);
 VAR_7->idx = VAR_6->kidx;
 FUNC_4(VAR_7->name, VAR_6->name, sizeof(VAR_7->name));

 return (0);
}
