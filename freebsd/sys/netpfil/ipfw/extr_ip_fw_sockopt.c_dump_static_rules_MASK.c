
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockopt_data {int dummy; } ;
struct ip_fw_chain {struct ip_fw** map; } ;
struct ip_fw_bcounter {int dummy; } ;
struct ip_fw {int dummy; } ;
struct dump_args {int b; int e; int rcounters; int rcount; scalar_t__ rsize; } ;
typedef int ipfw_obj_tlv ;
struct TYPE_3__ {scalar_t__ length; int type; } ;
struct TYPE_4__ {int count; TYPE_1__ head; } ;
typedef TYPE_2__ ipfw_obj_ctlv ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_fw*) ;
 int FUNC_1 (struct ip_fw*,int *,int,int ) ;
 scalar_t__ FUNC_2 (struct sockopt_data*,int) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_2, struct dump_args *VAR_3,
    struct sockopt_data *VAR_4)
{
 ipfw_obj_ctlv *VAR_5;
 struct ip_fw *VAR_6;
 caddr_t VAR_7;
 int VAR_8, VAR_9;


 VAR_5 = (ipfw_obj_ctlv *)FUNC_2(VAR_4, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 VAR_5->head.type = VAR_1;
 VAR_5->head.length = VAR_3->rsize + sizeof(*VAR_5);
 VAR_5->count = VAR_3->rcount;

 for (VAR_8 = VAR_3->b; VAR_8 < VAR_3->e; VAR_8++) {
  VAR_6 = VAR_2->map[VAR_8];

  VAR_9 = FUNC_0(VAR_6) + sizeof(ipfw_obj_tlv);
  if (VAR_3->rcounters != 0)
   VAR_9 += sizeof(struct ip_fw_bcounter);
  VAR_7 = (caddr_t)FUNC_2(VAR_4, VAR_9);
  if (VAR_7 == ((void*)0))
   return (VAR_0);

  FUNC_1(VAR_6, VAR_7, VAR_9, VAR_3->rcounters);
 }

 return (0);
}
