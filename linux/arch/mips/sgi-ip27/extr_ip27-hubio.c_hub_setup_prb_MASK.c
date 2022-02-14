
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int nasid_t ;
struct TYPE_2__ {int iprb_ovflow; int iprb_ff; int iprb_xtalkctr; int iprb_regval; scalar_t__ iprb_anakctr; scalar_t__ iprb_bnakctr; } ;
typedef TYPE_1__ iprb_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(nasid_t VAR_1, int VAR_2, int VAR_3)
{
 iprb_t VAR_4;
 int VAR_5;




 VAR_5 = FUNC_0(VAR_2);
 VAR_4.iprb_regval = FUNC_1(VAR_1, VAR_5);




 VAR_4.iprb_ovflow = 1;
 VAR_4.iprb_bnakctr = 0;
 VAR_4.iprb_anakctr = 0;




 VAR_4.iprb_ff = VAR_0 ? 1 : 0;




 VAR_4.iprb_xtalkctr = VAR_3;




 FUNC_2(VAR_1, VAR_5, VAR_4.iprb_regval);
}
