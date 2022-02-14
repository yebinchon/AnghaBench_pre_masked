
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tid_info {scalar_t__ uidx; int tlen; int * tlvs; } ;
struct named_object {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ ipfw_obj_ntlv ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 TYPE_1__* FUNC_2 (int *,int ,scalar_t__,int ) ;
 struct named_object* FUNC_3 (int ,int ,int ,char const*) ;

__attribute__((used)) static int
FUNC_4(struct ip_fw_chain *VAR_3, struct tid_info *VAR_4,
    struct named_object **VAR_5)
{
 ipfw_obj_ntlv *VAR_6;
 const char *VAR_7;

 FUNC_1("uidx %d", VAR_4->uidx);
 if (VAR_4->uidx != 0) {
  if (VAR_4->tlvs == ((void*)0))
   return (VAR_0);

  VAR_6 = FUNC_2(VAR_4->tlvs, VAR_4->tlen, VAR_4->uidx,
      VAR_1);
  if (VAR_6 == ((void*)0))
   return (VAR_0);
  VAR_7 = VAR_6->name;
 } else
  VAR_7 = VAR_2;





 *VAR_5 = FUNC_3(FUNC_0(VAR_3), 0,
     VAR_1, VAR_7);





 return (0);
}
