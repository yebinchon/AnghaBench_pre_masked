
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int real_name; } ;
typedef TYPE_1__ git_mailmap_entry ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;

void FUNC_3(void)
{
 const git_mailmap_entry *VAR_1 = FUNC_2(
  VAR_0, "Typoed the name once", "foo@baz.com");
 FUNC_0(VAR_1);
 FUNC_1(VAR_1->real_name, "Foo bar");
}
