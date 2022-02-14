
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct tid_info {int dummy; } ;
struct tentry_info {int dummy; } ;
struct TYPE_2__ {int kidx; int refcnt; } ;
struct table_config {int count; int astate; TYPE_1__ no; struct table_algo* ta; } ;
struct table_algo {int (* del ) (int ,int ,struct tentry_info*,char*,int*) ;int ta_buf_size; } ;
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
 int FUNC_5 (struct ip_fw_chain*,int *,struct table_config*,int ,int ) ;
 int FUNC_6 (struct ip_fw_chain*,struct tid_info*,struct tentry_info*,int,int ,struct table_config**) ;
 int FUNC_7 (struct ip_fw_chain*,struct table_algo*,struct tentry_info*,int,int ,char*,char*) ;
 int FUNC_8 (struct ip_fw_chain*,struct table_config*,struct tentry_info*,int,int ) ;
 int FUNC_9 (struct ip_fw_chain*,struct table_algo*,struct tentry_info*,int,int ,char**) ;
 int FUNC_10 (struct tentry_info*,int ,int,int) ;
 int FUNC_11 (int ,int ,struct tentry_info*,char*,int*) ;

int
FUNC_12(struct ip_fw_chain *VAR_3, struct tid_info *VAR_4,
    struct tentry_info *VAR_5, uint8_t VAR_6, uint32_t VAR_7)
{
 struct table_config *VAR_8;
 struct table_algo *VAR_9;
 struct tentry_info *VAR_10;
 uint16_t VAR_11;
 int VAR_12, VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16;
 char VAR_17[VAR_2];
 caddr_t VAR_18, VAR_19;




 FUNC_0(VAR_3);
 VAR_12 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_7, VAR_1, &VAR_8);
 if (VAR_12 != 0) {
  FUNC_1(VAR_3);
  return (VAR_12);
 }
 VAR_9 = VAR_8->ta;
 FUNC_1(VAR_3);



 VAR_18 = VAR_17;
 VAR_12 = FUNC_9(VAR_3, VAR_9, VAR_5, VAR_7, VAR_1, &VAR_18);
 if (VAR_12 != 0)
  goto cleanup;

 FUNC_0(VAR_3);


 VAR_8->no.refcnt--;





 if (VAR_9 != VAR_8->ta) {
  FUNC_1(VAR_3);
  VAR_12 = VAR_0;
  goto cleanup;
 }

 VAR_11 = VAR_8->no.kidx;
 VAR_16 = 0;
 VAR_13 = 0;

 FUNC_2(VAR_3);
 VAR_19 = VAR_18;
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++, VAR_19 += VAR_9->ta_buf_size) {
  VAR_10 = &VAR_5[VAR_14];
  VAR_15 = 0;
  VAR_12 = VAR_9->del(VAR_8->astate, FUNC_4(VAR_3, VAR_11), VAR_10, VAR_19,
      &VAR_15);

  FUNC_10(VAR_10, VAR_1, VAR_12, VAR_15);
  if (VAR_12 != 0 && VAR_13 == 0)
   VAR_13 = VAR_12;
  VAR_8->count -= VAR_15;
  VAR_16 += VAR_15;
 }
 FUNC_3(VAR_3);


 FUNC_8(VAR_3, VAR_8, VAR_5, VAR_7, 0);

 if (VAR_16 != 0) {

  FUNC_5(VAR_3, ((void*)0), VAR_8, FUNC_4(VAR_3, VAR_11), 0);
 }

 FUNC_1(VAR_3);


 VAR_12 = VAR_13;

cleanup:
 FUNC_7(VAR_3, VAR_9, VAR_5, VAR_7, 0, VAR_18, VAR_17);

 return (VAR_12);
}
