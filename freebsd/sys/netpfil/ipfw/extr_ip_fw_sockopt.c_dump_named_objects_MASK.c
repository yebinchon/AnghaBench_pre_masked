
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockopt_data {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct dump_args {int tcount; int bmask; } ;
typedef int ipfw_obj_ntlv ;
struct TYPE_3__ {int length; int type; } ;
struct TYPE_4__ {int count; int objsize; TYPE_1__ head; } ;
typedef TYPE_2__ ipfw_obj_ctlv ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct dump_args*,struct sockopt_data*) ;
 scalar_t__ FUNC_3 (struct sockopt_data*,int) ;
 int FUNC_4 (struct ip_fw_chain*) ;

__attribute__((used)) static int
FUNC_5(struct ip_fw_chain *VAR_3, struct dump_args *VAR_4,
    struct sockopt_data *VAR_5)
{
 ipfw_obj_ctlv *VAR_6;
 int VAR_7;

 FUNC_1(VAR_4->tcount > 0);

 VAR_6 = (ipfw_obj_ctlv *)FUNC_3(VAR_5, sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 VAR_6->head.type = VAR_2;
 VAR_6->head.length = VAR_4->tcount * sizeof(ipfw_obj_ntlv) +
     sizeof(*VAR_6);
 VAR_6->count = VAR_4->tcount;
 VAR_6->objsize = sizeof(ipfw_obj_ntlv);


 VAR_7 = FUNC_2(FUNC_4(VAR_3), VAR_4, VAR_5);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_4->bmask += VAR_1 / 32;
 return (FUNC_2(FUNC_0(VAR_3), VAR_4, VAR_5));
}
