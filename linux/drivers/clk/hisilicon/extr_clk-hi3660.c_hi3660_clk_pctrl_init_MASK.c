
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_clock_data {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct hisi_clock_data* FUNC_1 (struct device_node*,int) ;
 int FUNC_2 (int ,int,struct hisi_clock_data*) ;

__attribute__((used)) static void FUNC_3(struct device_node *VAR_1)
{
 struct hisi_clock_data *VAR_2;
 int VAR_3 = FUNC_0(VAR_0);

 VAR_2 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_2)
  return;
 FUNC_2(VAR_0,
          FUNC_0(VAR_0), VAR_2);
}
