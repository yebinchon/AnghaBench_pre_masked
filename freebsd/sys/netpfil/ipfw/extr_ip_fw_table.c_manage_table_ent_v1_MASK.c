
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tei ;
struct tid_info {int uidx; int type; } ;
struct tentry_info {int flags; struct table_value* pvalue; int masklen; int subtype; int * paddr; } ;
struct table_value {int dummy; } ;
struct sockopt_data {int valsize; int kavail; scalar_t__ kbuf; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_16__ {int value; } ;
struct TYPE_14__ {int length; int flags; } ;
struct TYPE_17__ {int idx; TYPE_6__ v; int result; TYPE_4__ head; int masklen; int subtype; int k; } ;
typedef TYPE_7__ ipfw_obj_tentry ;
struct TYPE_15__ {scalar_t__ opcode; } ;
struct TYPE_11__ {int length; } ;
struct TYPE_13__ {int type; TYPE_1__ head; } ;
struct TYPE_18__ {TYPE_5__ opheader; TYPE_3__ ntlv; } ;
typedef TYPE_8__ ipfw_obj_header ;
struct TYPE_12__ {int length; } ;
struct TYPE_19__ {int count; int flags; TYPE_2__ head; } ;
typedef TYPE_9__ ipfw_obj_ctlv ;
typedef int ip_fw3_opheader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct ip_fw_chain*,struct tid_info*,struct tentry_info*,int ,int) ;
 int FUNC_1 (struct ip_fw_chain*,struct tid_info*,struct tentry_info*,int ,int) ;
 int FUNC_2 (struct tentry_info*,int ) ;
 int FUNC_3 (struct table_value*,int *) ;
 int FUNC_4 (struct sockopt_data*,int) ;
 int FUNC_5 (int *) ;
 struct tentry_info* FUNC_6 (int,int ,int) ;
 int FUNC_7 (struct tentry_info*,int ,int) ;
 int FUNC_8 (TYPE_8__*,struct tid_info*) ;

__attribute__((used)) static int
FUNC_9(struct ip_fw_chain *VAR_22, ip_fw3_opheader *VAR_23,
    struct sockopt_data *VAR_24)
{
 ipfw_obj_tentry *VAR_25, *VAR_26;
 ipfw_obj_ctlv *VAR_27;
 ipfw_obj_header *VAR_28;
 struct tentry_info *VAR_29, VAR_30, *VAR_31;
 struct tid_info VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36;


 if (VAR_24->valsize < (sizeof(*VAR_28) + sizeof(*VAR_27)))
  return (VAR_0);


 if (VAR_24->valsize != VAR_24->kavail)
  return (VAR_0);

 VAR_28 = (ipfw_obj_header *)VAR_24->kbuf;


 if (VAR_28->ntlv.head.length != sizeof(VAR_28->ntlv))
  return (VAR_0);

 VAR_36 = sizeof(*VAR_28);

 VAR_27 = (ipfw_obj_ctlv *)(VAR_28 + 1);
 if (VAR_27->head.length + VAR_36 != VAR_24->valsize)
  return (VAR_0);

 VAR_36 += sizeof(*VAR_27);
 VAR_25 = (ipfw_obj_tentry *)(VAR_27 + 1);
 if (VAR_27->count * sizeof(*VAR_25) + VAR_36 != VAR_24->valsize)
  return (VAR_0);

 if (VAR_27->count == 0)
  return (0);






 FUNC_4(VAR_24, VAR_24->valsize);


 VAR_26 = VAR_25;
 VAR_35 = VAR_25->idx;
 for (VAR_34 = 0; VAR_34 < VAR_27->count; VAR_34++, VAR_26++) {
  if (VAR_26->head.length != sizeof(*VAR_26))
   return (VAR_0);
  if (VAR_26->idx != VAR_35)
   return (VAR_1);
 }


 FUNC_8(VAR_28, &VAR_32);
 VAR_32.type = VAR_28->ntlv.type;
 VAR_32.uidx = VAR_35;


 if (VAR_27->count == 1) {
  FUNC_7(&VAR_30, 0, sizeof(VAR_30));
  VAR_31 = &VAR_30;
 } else
  VAR_31 = FUNC_6(VAR_27->count * sizeof(VAR_30), VAR_11,
      VAR_12 | VAR_13);

 VAR_29 = VAR_31;
 VAR_26 = VAR_25;
 for (VAR_34 = 0; VAR_34 < VAR_27->count; VAR_34++, VAR_26++, VAR_29++) {
  VAR_29->paddr = &VAR_26->k;
  VAR_29->subtype = VAR_26->subtype;
  VAR_29->masklen = VAR_26->masklen;
  if (VAR_26->head.flags & VAR_2)
   VAR_29->flags |= VAR_20;

  FUNC_5(&VAR_26->v.value);
  VAR_29->pvalue = (struct table_value *)&VAR_26->v.value;
 }

 VAR_33 = (VAR_28->opheader.opcode == VAR_10) ?
     FUNC_0(VAR_22, &VAR_32, VAR_31, VAR_27->flags, VAR_27->count) :
     FUNC_1(VAR_22, &VAR_32, VAR_31, VAR_27->flags, VAR_27->count);


 VAR_29 = VAR_31;
 VAR_26 = VAR_25;
 for (VAR_34 = 0; VAR_34 < VAR_27->count; VAR_34++, VAR_26++, VAR_29++) {
  if (VAR_29->flags & VAR_14)
   VAR_26->result = VAR_3;
  else if (VAR_29->flags & VAR_15)
   VAR_26->result = VAR_4;
  else if (VAR_29->flags & VAR_21)
   VAR_26->result = VAR_9;
  else if (VAR_29->flags & VAR_18)
   VAR_26->result = VAR_7;
  else if (VAR_29->flags & VAR_16)
   VAR_26->result = VAR_5;
  else if (VAR_29->flags & VAR_19)
   VAR_26->result = VAR_8;
  else if (VAR_29->flags & VAR_17)
   VAR_26->result = VAR_6;
  FUNC_3(VAR_29->pvalue, &VAR_26->v.value);
 }

 if (VAR_31 != &VAR_30)
  FUNC_2(VAR_31, VAR_11);

 return (VAR_33);
}
