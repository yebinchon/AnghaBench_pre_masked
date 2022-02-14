
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mox_rwtm {TYPE_1__* kobj; } ;
struct TYPE_2__ {struct mox_rwtm* rwtm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct mox_rwtm*) ;

__attribute__((used)) static int FUNC_5(struct mox_rwtm *VAR_5)
{
 VAR_5->kobj = FUNC_3(sizeof(*VAR_5->kobj), VAR_2);
 if (!VAR_5->kobj)
  return -VAR_0;

 FUNC_1(FUNC_4(VAR_5), &VAR_4);
 if (FUNC_0(FUNC_4(VAR_5), VAR_3, "turris-mox-rwtm")) {
  FUNC_2(FUNC_4(VAR_5));
  return -VAR_1;
 }

 VAR_5->kobj->rwtm = VAR_5;

 return 0;
}
