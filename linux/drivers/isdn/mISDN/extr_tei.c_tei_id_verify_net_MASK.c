
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int (* printdebug ) (struct FsmInst*,char*,int,int) ;} ;
struct teimgr {TYPE_2__* l2; TYPE_1__ tei_m; } ;
struct FsmInst {struct teimgr* userdata; } ;
struct TYPE_4__ {int tei; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (struct FsmInst*,char*,int,int) ;
 int FUNC_1 (struct FsmInst*,int,void*) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct teimgr *VAR_5 = VAR_2->userdata;
 u_char *VAR_6 = VAR_4;
 int VAR_7;

 VAR_7 = VAR_6[3] >> 1;
 if (*VAR_1 & VAR_0)
  VAR_5->tei_m.printdebug(VAR_2, "identity verify req tei %d/%d",
         VAR_7, VAR_5->l2->tei);
 if (VAR_7 == VAR_5->l2->tei)
  FUNC_1(VAR_2, VAR_3, VAR_4);
}
