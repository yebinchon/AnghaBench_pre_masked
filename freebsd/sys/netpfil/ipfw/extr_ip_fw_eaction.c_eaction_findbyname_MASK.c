
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tid_info {int type; int uidx; int tlen; int * tlvs; } ;
struct named_object {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ ipfw_obj_ntlv ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *,int ,int ,int ) ;
 struct named_object* FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct ip_fw_chain *VAR_3, struct tid_info *VAR_4,
    struct named_object **VAR_5)
{
 ipfw_obj_ntlv *VAR_6;

 if (VAR_4->tlvs == ((void*)0))
  return (VAR_0);


 VAR_6 = FUNC_2(VAR_4->tlvs, VAR_4->tlen, VAR_4->uidx,
     VAR_2);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 FUNC_1("name %s, uidx %u, type %u", VAR_6->name,
     VAR_4->uidx, VAR_4->type);





 *VAR_5 = FUNC_3(FUNC_0(VAR_3),
     0, VAR_2, VAR_6->name);
 if (*VAR_5 == ((void*)0))
  return (VAR_1);
 return (0);
}
