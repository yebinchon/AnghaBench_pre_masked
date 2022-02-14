
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int offset; int time; } ;
struct TYPE_6__ {TYPE_1__ when; int email; int name; } ;
typedef TYPE_2__ git_signature ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**,char*) ;

void FUNC_5(void)
{
 git_signature *VAR_0;

 FUNC_2(FUNC_4(&VAR_0, "Test User <test@test.tt> 1461698487 +0200"));
 FUNC_1("Test User", VAR_0->name);
 FUNC_1("test@test.tt", VAR_0->email);
 FUNC_0(1461698487, VAR_0->when.time);
 FUNC_0(120, VAR_0->when.offset);
 FUNC_3(VAR_0);
}
