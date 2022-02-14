
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hubp {int mpcc_id; int opp_id; } ;
struct dcn20_hubp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int,int,int) ;
 struct dcn20_hubp* FUNC_3 (struct hubp*) ;

void FUNC_4(struct hubp *VAR_5, bool VAR_6)
{
 struct dcn20_hubp *VAR_7 = FUNC_3(VAR_5);
 uint32_t VAR_8 = VAR_6 ? 1 : 0;

 FUNC_1(VAR_0,
   VAR_1, VAR_8,
   VAR_3, VAR_8);

 if (VAR_6) {
  uint32_t VAR_9 = FUNC_0(VAR_0);

  if (VAR_9) {






   FUNC_2(VAR_0,
     VAR_2, 1,
     1, 200);
  }

  VAR_5->mpcc_id = 0xf;
  VAR_5->opp_id = VAR_4;
 }
}
