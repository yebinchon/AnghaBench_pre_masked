
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sockopt_data {size_t valsize; } ;
struct ip_fw_chain {int n_rules; struct ip_fw** map; } ;
struct ip_fw_bcounter {int dummy; } ;
struct ip_fw {int dummy; } ;
struct dump_args {int* bmask; int e; int b; int rcount; int rcounters; int tcount; scalar_t__ rsize; } ;
typedef int ipfw_obj_tlv ;
typedef int ipfw_obj_ntlv ;
typedef int ipfw_obj_dyntlv ;
typedef int ipfw_obj_ctlv ;
struct TYPE_2__ {int flags; size_t end_rule; size_t start_rule; size_t size; int set_mask; } ;
typedef TYPE_1__ ipfw_cfg_lheader ;
typedef int ip_fw3_opheader ;
typedef int da ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct ip_fw*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ip_fw_chain*,struct dump_args*,struct sockopt_data*) ;
 int FUNC_4 (struct ip_fw_chain*,struct dump_args*,struct sockopt_data*) ;
 int FUNC_5 (int*,int ) ;
 int FUNC_6 (struct ip_fw_chain*,struct sockopt_data*) ;
 int FUNC_7 (int*,int*) ;
 int FUNC_8 (struct ip_fw_chain*,size_t,int ) ;
 scalar_t__ FUNC_9 (struct sockopt_data*,int) ;
 int* FUNC_10 (int,int ,int) ;
 int FUNC_11 (struct ip_fw_chain*,struct ip_fw*,struct dump_args*) ;
 int FUNC_12 (struct dump_args*,int ,int) ;

__attribute__((used)) static int
FUNC_13(struct ip_fw_chain *VAR_12, ip_fw3_opheader *VAR_13,
    struct sockopt_data *VAR_14)
{
 struct dump_args VAR_15;
 ipfw_cfg_lheader *VAR_16;
 struct ip_fw *VAR_17;
 size_t VAR_18, VAR_19;
 uint32_t VAR_20, *VAR_21;
 int VAR_22, VAR_23;

 VAR_16 = (ipfw_cfg_lheader *)FUNC_9(VAR_14, sizeof(*VAR_16));
 if (VAR_16 == ((void*)0))
  return (VAR_0);

 VAR_22 = 0;
 VAR_21 = ((void*)0);
 FUNC_12(&VAR_15, 0, sizeof(VAR_15));




 if (VAR_16->flags & (VAR_4 | VAR_3))
  VAR_15.bmask = VAR_21 = FUNC_10(
      sizeof(uint32_t) * VAR_6 * 2 / 32, VAR_7,
      VAR_8 | VAR_9);
 FUNC_0(VAR_12);





 VAR_18 = sizeof(ipfw_cfg_lheader);
 VAR_15.e = VAR_12->n_rules;

 if (VAR_16->end_rule != 0) {

  if ((VAR_19 = VAR_16->start_rule) > VAR_5)
   VAR_19 = VAR_5;
  VAR_15.b = FUNC_8(VAR_12, VAR_19, 0);
  VAR_19 = (VAR_16->end_rule < VAR_5) ?
      VAR_16->end_rule + 1: VAR_5;
  VAR_15.e = FUNC_8(VAR_12, VAR_19, VAR_10) + 1;
 }

 if (VAR_16->flags & VAR_4) {
  for (VAR_23 = VAR_15.b; VAR_23 < VAR_15.e; VAR_23++) {
   VAR_17 = VAR_12->map[VAR_23];
   VAR_15.rsize += FUNC_2(VAR_17) + sizeof(ipfw_obj_tlv);
   VAR_15.rcount++;

   FUNC_11(VAR_12, VAR_17, &VAR_15);
  }

  if (VAR_16->flags & VAR_2) {
   VAR_15.rsize += sizeof(struct ip_fw_bcounter) * VAR_15.rcount;
   VAR_15.rcounters = 1;
  }
  VAR_18 += VAR_15.rsize + sizeof(ipfw_obj_ctlv);
 }

 if (VAR_16->flags & VAR_3) {
  VAR_18 += sizeof(ipfw_obj_ctlv) +
      FUNC_7(VAR_21, &VAR_23) * sizeof(ipfw_obj_dyntlv);
  VAR_15.tcount += VAR_23;
 }

 if (VAR_15.tcount > 0)
  VAR_18 += VAR_15.tcount * sizeof(ipfw_obj_ntlv) +
      sizeof(ipfw_obj_ctlv);






 VAR_16->size = VAR_18;
 VAR_16->set_mask = ~VAR_11;
 VAR_20 = VAR_16->flags;
 VAR_16 = ((void*)0);

 if (VAR_14->valsize < VAR_18) {
  VAR_22 = VAR_1;
  goto cleanup;
 }


 if (VAR_15.tcount > 0) {
  VAR_22 = FUNC_3(VAR_12, &VAR_15, VAR_14);
  if (VAR_22 != 0)
   goto cleanup;
 }

 if (VAR_20 & VAR_4) {
  VAR_22 = FUNC_4(VAR_12, &VAR_15, VAR_14);
  if (VAR_22 != 0)
   goto cleanup;
 }

 if (VAR_20 & VAR_3)
  VAR_22 = FUNC_6(VAR_12, VAR_14);

cleanup:
 FUNC_1(VAR_12);

 if (VAR_21 != ((void*)0))
  FUNC_5(VAR_21, VAR_7);

 return (VAR_22);
}
