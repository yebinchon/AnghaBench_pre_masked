
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct opa_mad {int dummy; } ;
struct ib_wc {int pkey_index; } ;
struct hfi1_ibport {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct hfi1_ibport*,int ) ;
 scalar_t__ FUNC_1 (struct hfi1_ibport*) ;
 int FUNC_2 (struct hfi1_ibport*,struct opa_mad const*,struct ib_wc const*) ;

__attribute__((used)) static int FUNC_3(struct hfi1_ibport *VAR_3,
        const struct opa_mad *VAR_4,
        const struct ib_wc *VAR_5)
{
 u16 VAR_6 = FUNC_0(VAR_3, VAR_5->pkey_index);


 if (!FUNC_2(VAR_3, VAR_4, VAR_5) &&
     VAR_6 != VAR_2 &&
     VAR_6 != VAR_1)
  return -VAR_0;


 if (VAR_6 == VAR_2 &&
     FUNC_1(VAR_3))
  return -VAR_0;

 return 0;
}
