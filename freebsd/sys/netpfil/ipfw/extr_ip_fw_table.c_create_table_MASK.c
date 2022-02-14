
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tid_info {int type; } ;
struct sockopt_data {int valsize; scalar_t__ kbuf; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_4__ {char* name; } ;
struct _ipfw_obj_header {TYPE_1__ ntlv; } ;
struct TYPE_5__ {char* algoname; int type; } ;
typedef TYPE_2__ ipfw_xtable_info ;
typedef int ip_fw3_opheader ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (struct ip_fw_chain*,struct tid_info*,char*,TYPE_2__*,int *,int ) ;
 int * FUNC_5 (struct namedobj_instance*,struct tid_info*) ;
 int FUNC_6 (struct _ipfw_obj_header*,struct tid_info*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int
FUNC_8(struct ip_fw_chain *VAR_2, ip_fw3_opheader *VAR_3,
    struct sockopt_data *VAR_4)
{
 struct _ipfw_obj_header *VAR_5;
 ipfw_xtable_info *VAR_6;
 char *VAR_7, *VAR_8;
 struct tid_info VAR_9;
 struct namedobj_instance *VAR_10;

 if (VAR_4->valsize != sizeof(*VAR_5) + sizeof(ipfw_xtable_info))
  return (VAR_1);

 VAR_5 = (struct _ipfw_obj_header *)VAR_4->kbuf;
 VAR_6 = (ipfw_xtable_info *)(VAR_5 + 1);





 VAR_7 = VAR_5->ntlv.name;
 VAR_8 = VAR_6->algoname;
 if (FUNC_3(VAR_7) != 0 ||
     FUNC_7(VAR_8, sizeof(VAR_6->algoname)) == sizeof(VAR_6->algoname))
  return (VAR_1);

 if (VAR_8[0] == '\0') {

  VAR_8 = ((void*)0);
 }

 FUNC_6(VAR_5, &VAR_9);
 VAR_9.type = VAR_6->type;

 VAR_10 = FUNC_0(VAR_2);

 FUNC_1(VAR_2);
 if (FUNC_5(VAR_10, &VAR_9) != ((void*)0)) {
  FUNC_2(VAR_2);
  return (VAR_0);
 }
 FUNC_2(VAR_2);

 return (FUNC_4(VAR_2, &VAR_9, VAR_8, VAR_6, ((void*)0), 0));
}
