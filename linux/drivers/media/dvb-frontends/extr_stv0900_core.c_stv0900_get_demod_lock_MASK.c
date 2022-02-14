
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_internal {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum fe_stv0900_search_state { ____Placeholder_fe_stv0900_search_state } fe_stv0900_search_state ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (struct stv0900_internal*,int ) ;

int FUNC_3(struct stv0900_internal *VAR_2,
   enum fe_stv0900_demod_num VAR_3, s32 VAR_4)
{
 s32 VAR_5 = 0,
  VAR_6 = 0;

 enum fe_stv0900_search_state VAR_7;

 while ((VAR_5 < VAR_4) && (VAR_6 == 0)) {
  VAR_7 = FUNC_2(VAR_2, VAR_0);
  FUNC_0("Demod State = %d\n", VAR_7);
  switch (VAR_7) {
  case 128:
  case 129:
  default:
   VAR_6 = 0;
   break;
  case 131:
  case 130:
   VAR_6 = FUNC_2(VAR_2, VAR_1);
   break;
  }

  if (VAR_6 == 0)
   FUNC_1(10);

  VAR_5 += 10;
 }

 if (VAR_6)
  FUNC_0("DEMOD LOCK OK\n");
 else
  FUNC_0("DEMOD LOCK FAIL\n");

 return VAR_6;
}
