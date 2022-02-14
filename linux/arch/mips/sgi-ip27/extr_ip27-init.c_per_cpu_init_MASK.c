
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hub_data {int slice_map; } ;
typedef int cnodeid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 struct hub_data* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int,int *) ;

void FUNC_12(void)
{
 int VAR_5 = FUNC_10();
 int VAR_6 = FUNC_0(VAR_3);
 cnodeid_t VAR_7 = FUNC_5();
 struct hub_data *VAR_8 = FUNC_6(VAR_7);

 if (FUNC_11(VAR_6, &VAR_8->slice_map))
  return;

 FUNC_1(VAR_4);

 FUNC_9(VAR_7);

 FUNC_2();
 FUNC_8();


 FUNC_7(FUNC_3(VAR_5));

 FUNC_4(VAR_0, VAR_2);
 FUNC_4(VAR_1, VAR_2);
}
