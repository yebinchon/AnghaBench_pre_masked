
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_clock_data {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hisi_clock_data* FUNC_1 (struct device_node*,int) ;
 int FUNC_2 (int ,int,struct hisi_clock_data*) ;
 int FUNC_3 (int ,int,struct hisi_clock_data*) ;

__attribute__((used)) static void FUNC_4(struct device_node *VAR_2)
{
 struct hisi_clock_data *VAR_3;
 int VAR_4 = FUNC_0(VAR_1) +
   FUNC_0(VAR_0);

 VAR_3 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_3)
  return;

 FUNC_3(VAR_1,
          FUNC_0(VAR_1), VAR_3);

 FUNC_2(VAR_0,
           FUNC_0(VAR_0),
           VAR_3);
}
