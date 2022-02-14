
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hubp {int dummy; } ;
struct dcn20_hubp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 struct dcn20_hubp* FUNC_2 (struct hubp*) ;

void FUNC_3(
 struct hubp *VAR_4,
 bool VAR_5)
{
 struct dcn20_hubp *VAR_6 = FUNC_2(VAR_4);
 uint32_t VAR_7 = 0;
 bool VAR_8;

 FUNC_0(VAR_0, VAR_3, &VAR_7);
 VAR_8 = (VAR_7 == 1);
 if (VAR_8 != VAR_5) {
  FUNC_1(VAR_0,
   VAR_3, VAR_5 ? VAR_2 : VAR_1);
 }
}
