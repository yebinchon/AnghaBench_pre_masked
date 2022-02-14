
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int offset; int time; } ;
struct TYPE_8__ {TYPE_1__ when; int email; int name; } ;
typedef TYPE_2__ git_signature ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_2__*,char const**,char const*,int *,char) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char const*) ;

void FUNC_8(void)
{
 const char *VAR_0 = "A <a@example.com> 1461698487 +1234", *VAR_1;
 git_signature *VAR_2;


 VAR_1 = VAR_0 + FUNC_7(VAR_0) - 2;

 VAR_2 = FUNC_4(1, sizeof(git_signature));
 FUNC_0(VAR_2);

 FUNC_3(FUNC_5(VAR_2, &VAR_0, VAR_1, ((void*)0), '\0'));
 FUNC_2(VAR_2->name, "A");
 FUNC_2(VAR_2->email, "a@example.com");
 FUNC_1(VAR_2->when.time, 1461698487);
 FUNC_1(VAR_2->when.offset, 12);

 FUNC_6(VAR_2);
}
