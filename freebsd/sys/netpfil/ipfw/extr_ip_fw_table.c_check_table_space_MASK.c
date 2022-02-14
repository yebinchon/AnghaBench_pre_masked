
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int ta_buf ;
struct tableop_state {scalar_t__ modified; } ;
struct table_info {int dummy; } ;
struct TYPE_2__ {int refcnt; int kidx; } ;
struct table_config {TYPE_1__ no; int astate; struct table_algo* ta; } ;
struct table_algo {scalar_t__ (* need_modify ) (int ,struct table_info*,int ,scalar_t__*) ;int (* prepare_mod ) (char*,scalar_t__*) ;int (* fill_mod ) (int ,struct table_info*,char*,scalar_t__*) ;int (* flush_mod ) (char*) ;int (* modify ) (int ,struct table_info*,char*,scalar_t__) ;} ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*) ;
 struct table_info* FUNC_5 (struct ip_fw_chain*,int ) ;
 int VAR_0 ;
 int FUNC_6 (struct ip_fw_chain*,struct tableop_state*) ;
 int FUNC_7 (struct ip_fw_chain*,struct tableop_state*) ;
 int FUNC_8 (char**,int ,int) ;
 scalar_t__ FUNC_9 (int ,struct table_info*,int ,scalar_t__*) ;
 int FUNC_10 (char*,scalar_t__*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ,struct table_info*,int ,scalar_t__*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,struct table_info*,char*,scalar_t__*) ;
 int FUNC_15 (int ,struct table_info*,char*,scalar_t__) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static int
FUNC_17(struct ip_fw_chain *VAR_1, struct tableop_state *VAR_2,
    struct table_config *VAR_3, struct table_info *VAR_4, uint32_t VAR_5)
{
 struct table_algo *VAR_6;
 uint64_t VAR_7;
 char VAR_8[VAR_0];
 int VAR_9;

 FUNC_1(VAR_1);

 VAR_9 = 0;
 VAR_6 = VAR_3->ta;
 if (VAR_6->need_modify == ((void*)0))
  return (0);


 VAR_3->no.refcnt++;






 while (1) {
  VAR_7 = 0;
  if (VAR_6->need_modify(VAR_3->astate, VAR_4, VAR_5, &VAR_7) == 0) {
   VAR_9 = 0;
   break;
  }


  if (VAR_2 != ((void*)0))
   FUNC_6(VAR_1, VAR_2);
  FUNC_2(VAR_1);

  FUNC_8(&VAR_8, 0, sizeof(VAR_8));
  VAR_9 = VAR_6->prepare_mod(VAR_8, &VAR_7);

  FUNC_0(VAR_1);
  if (VAR_2 != ((void*)0))
   FUNC_7(VAR_1, VAR_2);

  if (VAR_9 != 0)
   break;

  if (VAR_2 != ((void*)0) && VAR_2->modified != 0) {






   VAR_6->flush_mod(VAR_8);
   break;
  }


  VAR_4 = FUNC_5(VAR_1, VAR_3->no.kidx);
  if (VAR_6->need_modify(VAR_3->astate, VAR_4, VAR_5, &VAR_7) == 0) {
   FUNC_2(VAR_1);





   VAR_6->flush_mod(VAR_8);
   break;
  }

  VAR_9 = VAR_6->fill_mod(VAR_3->astate, VAR_4, VAR_8, &VAR_7);
  if (VAR_9 == 0) {

   FUNC_3(VAR_1);
   VAR_6->modify(VAR_3->astate, VAR_4, VAR_8, VAR_7);
   FUNC_4(VAR_1);
  }


  VAR_6->flush_mod(VAR_8);
 }

 VAR_3->no.refcnt--;
 return (VAR_9);
}
