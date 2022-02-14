
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tname ;
struct mt_vmm_info {int mt_vcpu; int mt_ctx; int mt_thr; } ;
struct TYPE_2__ {int rip; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int ,int,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void *
FUNC_5(void *VAR_2)
{
 char VAR_3[VAR_0 + 1];
 struct mt_vmm_info *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2;
 VAR_5 = VAR_4->mt_vcpu;

 FUNC_3(VAR_3, sizeof(VAR_3), "vcpu %d", VAR_5);
 FUNC_2(VAR_4->mt_thr, VAR_3);

 FUNC_1(VAR_5);

 FUNC_4(VAR_4->mt_ctx, VAR_5, VAR_1[VAR_5].rip);


 FUNC_0(1);
 return (((void*)0));
}
