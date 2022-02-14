
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tentry_info {int dummy; } ;
struct table_algo {size_t ta_buf_size; int (* prepare_add ) (struct ip_fw_chain*,struct tentry_info*,size_t) ;int (* prepare_del ) (struct ip_fw_chain*,struct tentry_info*,size_t) ;} ;
struct ip_fw_chain {int dummy; } ;
typedef size_t caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (size_t,int ,int) ;
 int FUNC_1 (size_t,int ,int ) ;
 int FUNC_2 (struct ip_fw_chain*,struct tentry_info*,size_t) ;
 int FUNC_3 (struct ip_fw_chain*,struct tentry_info*,size_t) ;

__attribute__((used)) static int
FUNC_4(struct ip_fw_chain *VAR_5, struct table_algo *VAR_6,
    struct tentry_info *VAR_7, uint32_t VAR_8, int VAR_9, caddr_t *VAR_10)
{
 caddr_t VAR_11, VAR_12;
 size_t VAR_13, VAR_14;
 struct tentry_info *VAR_15;
 int VAR_16, VAR_17;

 VAR_16 = 0;
 VAR_13 = VAR_6->ta_buf_size;
 if (VAR_8 == 1) {

  FUNC_1(*VAR_10, 0, VAR_4);
  VAR_11 = *VAR_10;
 } else {
  VAR_14 = VAR_8 * VAR_13;
  VAR_11 = FUNC_0((VAR_9 == VAR_3) ? VAR_14 * 2 : VAR_14, VAR_0,
      VAR_1 | VAR_2);
 }

 VAR_12 = VAR_11;
 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++, VAR_12 += VAR_13) {
  VAR_15 = &VAR_7[VAR_17];
  VAR_16 = (VAR_9 == VAR_3) ?
      VAR_6->prepare_add(VAR_5, VAR_15, VAR_12) : VAR_6->prepare_del(VAR_5, VAR_15, VAR_12);






  if (VAR_16 != 0)
   break;
 }

 *VAR_10 = VAR_11;
 return (VAR_16);
}
