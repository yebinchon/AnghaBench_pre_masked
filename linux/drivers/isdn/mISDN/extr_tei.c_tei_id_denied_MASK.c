
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int (* printdebug ) (struct FsmInst*,char*,int,int) ;} ;
struct teimgr {TYPE_1__ tei_m; } ;
struct FsmInst {struct teimgr* userdata; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (struct FsmInst*,char*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct teimgr *VAR_5 = VAR_2->userdata;
 u_char *VAR_6 = VAR_4;
 int VAR_7, VAR_8;

 VAR_7 = ((unsigned int) *VAR_6++ << 8);
 VAR_7 += *VAR_6++;
 VAR_6++;
 VAR_8 = *VAR_6 >> 1;
 if (*VAR_1 & VAR_0)
  VAR_5->tei_m.printdebug(VAR_2, "identity denied ri %d tei %d",
         VAR_7, VAR_8);
}
