
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_clock_data {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hisi_clock_data* FUNC_1 (struct device_node*,int) ;
 int FUNC_2 (int ,int,struct hisi_clock_data*) ;
 int FUNC_3 (int ,int,struct hisi_clock_data*) ;
 int FUNC_4 (int ,int,struct hisi_clock_data*) ;
 int FUNC_5 (int ,int,struct hisi_clock_data*) ;

__attribute__((used)) static void FUNC_6(struct device_node *VAR_4)
{
 struct hisi_clock_data *VAR_5;
 int VAR_6 = FUNC_0(VAR_2) +
   FUNC_0(VAR_1) +
   FUNC_0(VAR_3) +
   FUNC_0(VAR_0);

 VAR_5 = FUNC_1(VAR_4, VAR_6);
 if (!VAR_5)
  return;

 FUNC_4(VAR_2,
       FUNC_0(VAR_2),
       VAR_5);
 FUNC_3(VAR_1,
          FUNC_0(VAR_1),
          VAR_5);
 FUNC_5(VAR_3,
         FUNC_0(VAR_3),
         VAR_5);
 FUNC_2(VAR_0,
      FUNC_0(VAR_0),
      VAR_5);
}
