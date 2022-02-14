
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ts ;
struct tid_info {int dummy; } ;
struct tentry_info {int dummy; } ;
struct TYPE_3__ {int func; } ;
struct tableop_state {scalar_t__ modified; int count; struct tentry_info* tei; struct table_algo* ta; int vmask; int vshared; struct table_config* tc; TYPE_1__ opstate; struct ip_fw_chain* ch; } ;
struct TYPE_4__ {int kidx; int refcnt; } ;
struct table_config {int count; int astate; struct table_algo* ta; TYPE_2__ no; int vmask; int vshared; } ;
struct table_algo {int (* add ) (int ,int ,struct tentry_info*,char*,int*) ;int ta_buf_size; } ;
struct ip_fw_chain {int dummy; } ;
typedef char* caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct ip_fw_chain*,struct tableop_state*) ;
 int FUNC_6 (struct table_config*,struct tentry_info*) ;
 int FUNC_7 (struct ip_fw_chain*,struct tableop_state*,struct table_config*,int ,int) ;
 int FUNC_8 (struct ip_fw_chain*,struct tableop_state*) ;
 int FUNC_9 (struct ip_fw_chain*,struct tid_info*,struct tentry_info*,int,int ,struct table_config**) ;
 int FUNC_10 (struct ip_fw_chain*,struct table_algo*,struct tentry_info*,int,int,char*,char*) ;
 int FUNC_11 (struct ip_fw_chain*,struct table_config*,struct tentry_info*,int,int) ;
 int FUNC_12 (struct ip_fw_chain*,struct tableop_state*) ;
 int FUNC_13 (struct tableop_state*,int ,int) ;
 int FUNC_14 (struct ip_fw_chain*,struct table_algo*,struct tentry_info*,int,int ,char**) ;
 int VAR_3 ;
 int FUNC_15 (struct ip_fw_chain*,struct table_config*,int ,struct tentry_info*,char*,int,int) ;
 int FUNC_16 (struct tentry_info*,int ,int,int) ;
 int FUNC_17 (int ,int ,struct tentry_info*,char*,int*) ;

int
FUNC_18(struct ip_fw_chain *VAR_4, struct tid_info *VAR_5,
    struct tentry_info *VAR_6, uint8_t VAR_7, uint32_t VAR_8)
{
 struct table_config *VAR_9;
 struct table_algo *VAR_10;
 uint16_t VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 uint32_t VAR_16, VAR_17;
 struct tentry_info *VAR_18;
 struct tableop_state VAR_19;
 char VAR_20[VAR_2];
 caddr_t VAR_21, VAR_22;

 FUNC_13(&VAR_19, 0, sizeof(VAR_19));
 VAR_10 = ((void*)0);
 FUNC_0(VAR_4);




restart:
 if (VAR_19.modified != 0) {
  FUNC_1(VAR_4);
  FUNC_10(VAR_4, VAR_10, VAR_6, VAR_8, VAR_15,
      VAR_21, VAR_20);
  FUNC_13(&VAR_19, 0, sizeof(VAR_19));
  VAR_10 = ((void*)0);
  FUNC_0(VAR_4);
 }

 VAR_12 = FUNC_9(VAR_4, VAR_5, VAR_6, VAR_8, VAR_1, &VAR_9);
 if (VAR_12 != 0) {
  FUNC_1(VAR_4);
  return (VAR_12);
 }
 VAR_10 = VAR_9->ta;


 VAR_19.ch = VAR_4;
 VAR_19.opstate.func = VAR_3;
 VAR_19.tc = VAR_9;
 VAR_19.vshared = VAR_9->vshared;
 VAR_19.vmask = VAR_9->vmask;
 VAR_19.ta = VAR_10;
 VAR_19.tei = VAR_6;
 VAR_19.count = VAR_8;
 VAR_15 = 0;
 FUNC_5(VAR_4, &VAR_19);
 FUNC_1(VAR_4);



 VAR_21 = VAR_20;
 VAR_12 = FUNC_14(VAR_4, VAR_10, VAR_6, VAR_8, VAR_1, &VAR_21);

 FUNC_0(VAR_4);
 FUNC_8(VAR_4, &VAR_19);

 VAR_9->no.refcnt--;


 if (VAR_12 != 0)
  goto cleanup;






 if (VAR_19.modified != 0)
  goto restart;






 VAR_12 = FUNC_12(VAR_4, &VAR_19);
 if (VAR_12 != 0)
  goto cleanup;
 if (VAR_19.modified != 0)
  goto restart;





 VAR_11 = VAR_9->no.kidx;
 VAR_12 = FUNC_7(VAR_4, &VAR_19, VAR_9, FUNC_4(VAR_4, VAR_11), VAR_8);
 if (VAR_12 != 0)
  goto cleanup;
 if (VAR_19.modified != 0)
  goto restart;


 VAR_11 = VAR_9->no.kidx;
 VAR_10 = VAR_9->ta;
 VAR_17 = 0;
 VAR_13 = 0;

 FUNC_2(VAR_4);

 VAR_22 = VAR_21;
 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++, VAR_22 += VAR_10->ta_buf_size) {
  VAR_18 = &VAR_6[VAR_14];
  VAR_16 = 0;

  if ((VAR_12 = FUNC_6(VAR_9, VAR_18)) == 0) {
   VAR_12 = VAR_10->add(VAR_9->astate, FUNC_4(VAR_4, VAR_11),
       VAR_18, VAR_22, &VAR_16);

   FUNC_16(VAR_18, VAR_1, VAR_12, VAR_16);
  }
  if (VAR_12 == 0) {

   VAR_9->count += VAR_16;
   VAR_17 += VAR_16;
   continue;
  }

  if (VAR_13 == 0)
   VAR_13 = VAR_12;






  if ((VAR_7 & VAR_0) == 0)
   continue;

  FUNC_15(VAR_4, VAR_9, FUNC_4(VAR_4, VAR_11),
      VAR_6, VAR_21, VAR_8, VAR_14);

  VAR_15 = 1;
  break;
 }

 FUNC_3(VAR_4);

 FUNC_11(VAR_4, VAR_9, VAR_6, VAR_8, VAR_15);


 if (VAR_17 != 0)
  FUNC_7(VAR_4, ((void*)0), VAR_9, FUNC_4(VAR_4, VAR_11), 0);


 VAR_12 = VAR_13;

cleanup:
 FUNC_1(VAR_4);

 FUNC_10(VAR_4, VAR_10, VAR_6, VAR_8, VAR_15, VAR_21, VAR_20);

 return (VAR_12);
}
