
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g762_data {int valid; int fan_cmd1; int client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct g762_data*) ;
 int FUNC_1 (struct g762_data*) ;
 struct g762_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_4(struct device *VAR_3)
{
 struct g762_data *VAR_4 = FUNC_2(VAR_3);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_4->fan_cmd1 |= VAR_1;
 VAR_4->fan_cmd1 |= VAR_2;
 VAR_4->valid = 0;

 return FUNC_3(VAR_4->client, VAR_0,
      VAR_4->fan_cmd1);
}
