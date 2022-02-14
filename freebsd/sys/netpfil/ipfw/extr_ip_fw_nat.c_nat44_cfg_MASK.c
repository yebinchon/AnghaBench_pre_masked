
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockopt_data {int valsize; scalar_t__ kbuf; } ;
struct nat44_cfg_redir {int dummy; } ;
struct nat44_cfg_nat {int redir_cnt; int name; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_5__ {TYPE_1__ head; } ;
struct TYPE_6__ {TYPE_2__ ntlv; } ;
typedef TYPE_3__ ipfw_obj_header ;
typedef int ip_fw3_opheader ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*,struct nat44_cfg_nat*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char**,int) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_1, ip_fw3_opheader *VAR_2,
    struct sockopt_data *VAR_3)
{
 ipfw_obj_header *VAR_4;
 struct nat44_cfg_nat *VAR_5;
 int VAR_6;
 size_t VAR_7;
 char *VAR_8;


 if (VAR_3->valsize < (sizeof(*VAR_4) + sizeof(*VAR_5)))
  return (VAR_0);

 VAR_4 = (ipfw_obj_header *)VAR_3->kbuf;


 if (VAR_4->ntlv.head.length != sizeof(VAR_4->ntlv))
  return (VAR_0);

 VAR_5 = (struct nat44_cfg_nat *)(VAR_4 + 1);


 if (FUNC_1(VAR_5->name, sizeof(VAR_5->name)) == sizeof(VAR_5->name))
  return (VAR_0);
 VAR_6 = FUNC_2(VAR_5->name, &VAR_8, 10);
 if (VAR_6 == 0 || *VAR_8 != '\0')
  return (VAR_0);

 VAR_7 = sizeof(*VAR_4) + sizeof(*VAR_5);

 if (VAR_3->valsize < VAR_7 + VAR_5->redir_cnt*sizeof(struct nat44_cfg_redir))
  return (VAR_0);

 FUNC_0(VAR_1, VAR_5);
 return (0);
}
