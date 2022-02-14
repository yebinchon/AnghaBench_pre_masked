
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int email; int name; } ;
typedef TYPE_1__ git_signature ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__**,char const*,char const*,int,int) ;

__attribute__((used)) static void FUNC_4(
 const char *VAR_0,
 const char *VAR_1,
 const char *VAR_2,
 const char *VAR_3)
{
 git_signature *VAR_4;

 FUNC_1(FUNC_3(&VAR_4, VAR_2, VAR_3, 1234567890, 60));
 FUNC_0(VAR_0, VAR_4->name);
 FUNC_0(VAR_1, VAR_4->email);

 FUNC_2(VAR_4);
}
