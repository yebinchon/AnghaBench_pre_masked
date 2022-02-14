
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ipfw_flow_id {int proto; } ;
struct dyn_data {scalar_t__ expire; } ;


 int FUNC_0 (struct dyn_data*,int ,int) ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct dyn_data*,struct ipfw_flow_id const*,void const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct dyn_data *VAR_6, const struct ipfw_flow_id *VAR_7,
    const void *VAR_8, int VAR_9, int VAR_10)
{
 uint32_t VAR_11;


 switch (VAR_7->proto) {
 case 129:
 case 128:
  VAR_11 = VAR_5 + VAR_2;
  break;
 case 130:
  VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_10);
  break;
 default:
  VAR_11 = VAR_5 + VAR_1;
 }




 if (VAR_6->expire != VAR_11)
  FUNC_1(&VAR_6->expire, VAR_11);

 if (VAR_10 == VAR_0)
  FUNC_0(VAR_6, VAR_3, VAR_9);
 else
  FUNC_0(VAR_6, VAR_4, VAR_9);
}
