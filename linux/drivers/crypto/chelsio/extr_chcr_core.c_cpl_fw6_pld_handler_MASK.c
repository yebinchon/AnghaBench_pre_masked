
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct crypto_async_request {int dummy; } ;
struct cpl_fw6_pld {int * data; } ;
struct chcr_dev {int dummy; } ;
struct TYPE_2__ {int error; } ;
struct adapter {TYPE_1__ chcr_stats; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct crypto_async_request*,unsigned char*,int) ;
 int FUNC_5 (int ) ;
 struct adapter* FUNC_6 (struct chcr_dev*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct chcr_dev *VAR_2,
          unsigned char *VAR_3)
{
 struct crypto_async_request *VAR_4;
 struct cpl_fw6_pld *VAR_5;
 u32 VAR_6 = 0;
 int VAR_7 = 0;
 struct adapter *VAR_8 = FUNC_6(VAR_2);

 VAR_5 = (struct cpl_fw6_pld *)VAR_3;
 VAR_4 = (struct crypto_async_request *)(uintptr_t)FUNC_3(
          VAR_5->data[1]);

 VAR_6 =
  FUNC_5(*(__be32 *)((unsigned char *)&VAR_5->data[0] + 4));
 if (FUNC_0(VAR_6) || FUNC_1(VAR_6))
  VAR_7 = -VAR_0;

 if (VAR_4) {
  VAR_7 = FUNC_4(VAR_4, VAR_3, VAR_7);
 } else {
  FUNC_7("Incorrect request address from the firmware\n");
  return -VAR_1;
 }
 if (VAR_7)
  FUNC_2(&VAR_8->chcr_stats.error);

 return 0;
}
