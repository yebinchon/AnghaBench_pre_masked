
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union nat64lsn_pgidx {scalar_t__ index; scalar_t__ proto; scalar_t__ addr; scalar_t__ port; } ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct sockopt_data {size_t valsize; scalar_t__ kbuf; } ;
struct nat64lsn_pg {int dummy; } ;
struct nat64lsn_cfg {scalar_t__ prefix4; scalar_t__ pmask4; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_8__ {int set; int name; } ;
struct TYPE_12__ {TYPE_1__ ntlv; } ;
typedef TYPE_5__ ipfw_obj_header ;
struct TYPE_10__ {scalar_t__ type; size_t length; } ;
struct TYPE_13__ {TYPE_3__ head; } ;
typedef TYPE_6__ ipfw_obj_data ;
struct TYPE_11__ {scalar_t__ index; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_14__ {int count; TYPE_4__ next; TYPE_2__ alias4; } ;
typedef TYPE_7__ ipfw_nat64lsn_stg_v1 ;
typedef int ipfw_nat64lsn_state_v1 ;
typedef int ip_fw3_opheader ;


 int FUNC_0 (struct nat64lsn_cfg*) ;
 int FUNC_1 (struct nat64lsn_cfg*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct sockopt_data*,int) ;
 int FUNC_7 (struct nat64lsn_cfg*,union nat64lsn_pgidx*,struct nat64lsn_pg*,struct sockopt_data*,int*) ;
 struct nat64lsn_cfg* FUNC_8 (int ,int ,int ) ;
 struct nat64lsn_pg* FUNC_9 (struct nat64lsn_cfg*,union nat64lsn_pgidx*) ;
 int FUNC_10 (struct nat64lsn_cfg*,struct nat64lsn_pg*,union nat64lsn_pgidx*) ;

__attribute__((used)) static int
FUNC_11(struct ip_fw_chain *VAR_9, ip_fw3_opheader *VAR_10,
    struct sockopt_data *VAR_11)
{
 ipfw_obj_header *VAR_12;
 ipfw_obj_data *VAR_13;
 ipfw_nat64lsn_stg_v1 *VAR_14;
 struct nat64lsn_cfg *VAR_15;
 struct nat64lsn_pg *VAR_16;
 union nat64lsn_pgidx VAR_17;
 size_t VAR_18;
 uint32_t VAR_19, VAR_20;
 int VAR_21;

 VAR_18 = sizeof(ipfw_obj_header) + sizeof(ipfw_obj_data) +
     sizeof(uint64_t);

 if (VAR_11->valsize < VAR_18)
  return (VAR_0);

 VAR_12 = (ipfw_obj_header *)VAR_11->kbuf;
 VAR_13 = (ipfw_obj_data *)(VAR_12 + 1);
 if (VAR_13->head.type != VAR_3 ||
     VAR_13->head.length != VAR_18 - sizeof(ipfw_obj_header))
  return (VAR_0);

 VAR_17.index = *(uint64_t *)(VAR_13 + 1);
 if (VAR_17.index != 0 && VAR_17.proto != VAR_4 &&
     VAR_17.proto != VAR_5 && VAR_17.proto != VAR_6)
  return (VAR_0);
 if (VAR_17.index == VAR_7)
  return (VAR_0);

 FUNC_3(VAR_9);
 VAR_15 = FUNC_8(FUNC_2(VAR_9), VAR_12->ntlv.name, VAR_12->ntlv.set);
 if (VAR_15 == ((void*)0)) {
  FUNC_4(VAR_9);
  return (VAR_1);
 }
 if (VAR_17.index == 0) {
  VAR_17.addr = VAR_15->prefix4;
  VAR_17.proto = VAR_4;
  VAR_17.port = VAR_8;
 }
 if (VAR_17.addr < VAR_15->prefix4 || VAR_17.addr > VAR_15->pmask4 ||
     VAR_17.port < VAR_8) {
  FUNC_4(VAR_9);
  return (VAR_0);
 }
 VAR_18 = sizeof(ipfw_obj_header) + sizeof(ipfw_obj_data) +
     sizeof(ipfw_nat64lsn_stg_v1);
 if (VAR_11->valsize < VAR_18) {
  FUNC_4(VAR_9);
  return (VAR_2);
 }
 VAR_12 = (ipfw_obj_header *)FUNC_6(VAR_11, VAR_18);
 VAR_13 = (ipfw_obj_data *)(VAR_12 + 1);
 VAR_13->head.type = VAR_3;
 VAR_13->head.length = VAR_18 - sizeof(ipfw_obj_header);
 VAR_14 = (ipfw_nat64lsn_stg_v1 *)(VAR_13 + 1);
 VAR_14->count = VAR_20 = 0;
 VAR_14->next.index = VAR_17.index;




 FUNC_0(VAR_15);
 VAR_21 = 0;
 do {
  VAR_16 = FUNC_9(VAR_15, &VAR_17);
  if (VAR_16 != ((void*)0)) {
   VAR_19 = 0;
   VAR_21 = FUNC_7(VAR_15, &VAR_17, VAR_16,
       VAR_11, &VAR_19);
   if (VAR_21 != 0)
    break;
   if (VAR_19 > 0) {
    VAR_14->count += VAR_19;
    VAR_20 += VAR_19;

    VAR_13->head.length +=
        VAR_19 * sizeof(ipfw_nat64lsn_state_v1);
    VAR_18 += VAR_19 * sizeof(ipfw_nat64lsn_state_v1);
   }
   VAR_14->alias4.s_addr = FUNC_5(VAR_17.addr);
  }

  switch (FUNC_10(VAR_15, VAR_16, &VAR_17)) {
  case -1:
   VAR_21 = VAR_1;
   break;
  case 1:



   if (VAR_14->count == 0)
    continue;

   VAR_18 += sizeof(ipfw_nat64lsn_stg_v1);
   if (VAR_11->valsize < VAR_18) {
    VAR_21 = VAR_2;
    break;
   }

   VAR_14->next.index = VAR_17.index;
   VAR_14 = (ipfw_nat64lsn_stg_v1 *)FUNC_6(VAR_11,
       sizeof(ipfw_nat64lsn_stg_v1));
   VAR_13->head.length += sizeof(ipfw_nat64lsn_stg_v1);
   VAR_14->count = 0;
   break;
  }
  VAR_14->next.index = VAR_17.index;
 } while (VAR_21 == 0);
 FUNC_1(VAR_15);
 FUNC_4(VAR_9);
 return ((VAR_20 > 0 || VAR_17.index == VAR_7) ? 0: VAR_21);
}
