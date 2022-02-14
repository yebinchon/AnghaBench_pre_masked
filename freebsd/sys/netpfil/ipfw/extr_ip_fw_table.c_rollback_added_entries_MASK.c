
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct tentry_info {int flags; } ;
struct table_info {int dummy; } ;
struct table_config {int count; int astate; struct table_algo* ta; } ;
struct table_algo {size_t ta_buf_size; int (* add ) (int ,struct table_info*,struct tentry_info*,scalar_t__,size_t*) ;int (* prepare_del ) (struct ip_fw_chain*,struct tentry_info*,scalar_t__) ;int (* del ) (int ,struct table_info*,struct tentry_info*,scalar_t__,size_t*) ;} ;
struct ip_fw_chain {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct table_info*,struct tentry_info*,scalar_t__,size_t*) ;
 int FUNC_3 (struct ip_fw_chain*,struct tentry_info*,scalar_t__) ;
 int FUNC_4 (int ,struct table_info*,struct tentry_info*,scalar_t__,size_t*) ;

__attribute__((used)) static void
FUNC_5(struct ip_fw_chain *VAR_1, struct table_config *VAR_2,
    struct table_info *VAR_3, struct tentry_info *VAR_4, caddr_t VAR_5,
    uint32_t VAR_6, uint32_t VAR_7)
{
 struct table_algo *VAR_8;
 struct tentry_info *VAR_9;
 caddr_t VAR_10, VAR_11;
 size_t VAR_12;
 int VAR_13, VAR_14;
 uint32_t VAR_15;

 FUNC_0(VAR_1);

 VAR_8 = VAR_2->ta;
 VAR_12 = VAR_8->ta_buf_size;
 VAR_10 = VAR_5;
 VAR_11 = VAR_10 + VAR_6 * VAR_12;
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++, VAR_10 += VAR_12, VAR_11 += VAR_12) {
  VAR_9 = &VAR_4[VAR_14];
  if ((VAR_9->flags & VAR_0) != 0) {






   VAR_13 = VAR_8->add(VAR_2->astate, VAR_3, VAR_9, VAR_10, &VAR_15);
   FUNC_1(VAR_13 == 0, ("rollback UPDATE fail"));
   FUNC_1(VAR_15 == 0, ("rollback UPDATE fail2"));
   continue;
  }

  VAR_13 = VAR_8->prepare_del(VAR_1, VAR_9, VAR_11);
  FUNC_1(VAR_13 == 0, ("pre-rollback INSERT failed"));
  VAR_13 = VAR_8->del(VAR_2->astate, VAR_3, VAR_9, VAR_11, &VAR_15);
  FUNC_1(VAR_13 == 0, ("rollback INSERT failed"));
  VAR_2->count -= VAR_15;
 }
}
