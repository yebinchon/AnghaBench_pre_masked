
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tid_info {int type; } ;
struct table_config {int locked; int limit; TYPE_2__* ta; } ;
struct sockopt_data {int valsize; scalar_t__ kbuf; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_4__ {char* name; } ;
struct _ipfw_obj_header {TYPE_1__ ntlv; } ;
struct TYPE_6__ {int mflags; int flags; int limit; int type; } ;
typedef TYPE_3__ ipfw_xtable_info ;
typedef int ip_fw3_opheader ;
struct TYPE_5__ {int flags; } ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (char*) ;
 struct table_config* FUNC_4 (struct namedobj_instance*,struct tid_info*) ;
 int FUNC_5 (struct _ipfw_obj_header*,struct tid_info*) ;

__attribute__((used)) static int
FUNC_6(struct ip_fw_chain *VAR_7, ip_fw3_opheader *VAR_8,
    struct sockopt_data *VAR_9)
{
 struct _ipfw_obj_header *VAR_10;
 ipfw_xtable_info *VAR_11;
 char *VAR_12;
 struct tid_info VAR_13;
 struct namedobj_instance *VAR_14;
 struct table_config *VAR_15;

 if (VAR_9->valsize != sizeof(*VAR_10) + sizeof(ipfw_xtable_info))
  return (VAR_1);

 VAR_10 = (struct _ipfw_obj_header *)VAR_9->kbuf;
 VAR_11 = (ipfw_xtable_info *)(VAR_10 + 1);





 VAR_12 = VAR_10->ntlv.name;
 if (FUNC_3(VAR_12) != 0)
  return (VAR_1);

 FUNC_5(VAR_10, &VAR_13);
 VAR_13.type = VAR_11->type;

 FUNC_1(VAR_7);
 VAR_14 = FUNC_0(VAR_7);
 if ((VAR_15 = FUNC_4(VAR_14, &VAR_13)) == ((void*)0)) {
  FUNC_2(VAR_7);
  return (VAR_2);
 }


 if ((VAR_15->ta->flags & VAR_6) != 0) {
  FUNC_2(VAR_7);
  return (VAR_0);
 }

 if ((VAR_11->mflags & VAR_4) != 0)
  VAR_15->limit = VAR_11->limit;
 if ((VAR_11->mflags & VAR_5) != 0)
  VAR_15->locked = ((VAR_11->flags & VAR_3) != 0);
 FUNC_2(VAR_7);

 return (0);
}
