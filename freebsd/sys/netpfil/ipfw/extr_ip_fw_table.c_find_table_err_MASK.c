
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tid_info {int uidx; int set; int tlen; int * tlvs; } ;
struct table_config {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ ipfw_obj_ntlv ;
typedef int bname ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int ,int,int ) ;
 struct named_object* FUNC_1 (struct namedobj_instance*,int ,char*) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct namedobj_instance *VAR_3, struct tid_info *VAR_4,
    struct table_config **VAR_5)
{
 char *VAR_6, VAR_7[16];
 struct named_object *VAR_8;
 ipfw_obj_ntlv *VAR_9;
 uint32_t VAR_10;

 if (VAR_4->tlvs != ((void*)0)) {
  VAR_9 = FUNC_0(VAR_4->tlvs, VAR_4->tlen, VAR_4->uidx,
      VAR_1);
  if (VAR_9 == ((void*)0))
   return (VAR_0);
  VAR_6 = VAR_9->name;






  VAR_10 = (VAR_2 != 0) ? VAR_4->set : 0;
 } else {
  FUNC_2(VAR_7, sizeof(VAR_7), "%d", VAR_4->uidx);
  VAR_6 = VAR_7;
  VAR_10 = 0;
 }

 VAR_8 = FUNC_1(VAR_3, VAR_10, VAR_6);
 *VAR_5 = (struct table_config *)VAR_8;

 return (0);
}
