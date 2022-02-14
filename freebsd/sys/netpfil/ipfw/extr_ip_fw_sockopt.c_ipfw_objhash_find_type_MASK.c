
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tid_info {int set; int uidx; int tlen; int * tlvs; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ ipfw_obj_ntlv ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ,int ,int ) ;
 struct named_object* FUNC_1 (struct namedobj_instance*,int ,char*) ;

int
FUNC_2(struct namedobj_instance *VAR_2, struct tid_info *VAR_3,
    uint32_t VAR_4, struct named_object **VAR_5)
{
 char *VAR_6;
 ipfw_obj_ntlv *VAR_7;
 uint32_t VAR_8;

 if (VAR_3->tlvs == ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_0(VAR_3->tlvs, VAR_3->tlen, VAR_3->uidx, VAR_4);
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 VAR_6 = VAR_7->name;






 VAR_8 = VAR_3->set;
 *VAR_5 = FUNC_1(VAR_2, VAR_8, VAR_6);
 if (*VAR_5 == ((void*)0))
  return (VAR_1);
 return (0);
}
