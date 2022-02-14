
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockopt_data {int valsize; scalar_t__ kbuf; } ;
struct ip_fw_chain {int nat; } ;
struct cfg_nat {int id; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_5__ {int name; TYPE_1__ head; } ;
typedef TYPE_2__ ipfw_obj_ntlv ;
struct TYPE_6__ {TYPE_2__ ntlv; } ;
typedef TYPE_3__ ipfw_obj_header ;
typedef int ip_fw3_opheader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct cfg_nat*,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct ip_fw_chain*,int ) ;
 int FUNC_6 (struct cfg_nat*) ;
 struct cfg_nat* FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int
FUNC_9(struct ip_fw_chain *VAR_3, ip_fw3_opheader *VAR_4,
    struct sockopt_data *VAR_5)
{
 ipfw_obj_header *VAR_6;
 struct cfg_nat *VAR_7;
 ipfw_obj_ntlv *VAR_8;


 if (VAR_5->valsize < sizeof(*VAR_6))
  return (VAR_0);

 VAR_6 = (ipfw_obj_header *)VAR_5->kbuf;


 if (VAR_6->ntlv.head.length != sizeof(VAR_6->ntlv))
  return (VAR_0);

 VAR_8 = &VAR_6->ntlv;

 if (FUNC_8(VAR_8->name, sizeof(VAR_8->name)) == sizeof(VAR_8->name))
  return (VAR_0);

 FUNC_0(VAR_3);
 VAR_7 = FUNC_7(&VAR_3->nat, VAR_8->name);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_3);
  return (VAR_1);
 }
 FUNC_2(VAR_3);
 FUNC_4(VAR_7, VAR_2);
 FUNC_5(VAR_3, VAR_7->id);
 FUNC_3(VAR_3);
 FUNC_1(VAR_3);

 FUNC_6(VAR_7);

 return (0);
}
