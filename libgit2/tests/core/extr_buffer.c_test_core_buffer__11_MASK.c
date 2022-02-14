
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char** strings; int count; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;

void FUNC_4(void)
{
 git_buf VAR_1 = VAR_0;
 git_strarray VAR_2;
 char *VAR_3[] = { "nothing", "in", "common" };
 char *VAR_4[] = { "something", "something else", "some other" };
 char *VAR_5[] = { "something", "some fun", "no fun" };
 char *VAR_6[] = { "happy", "happier", "happiest" };
 char *VAR_7[] = { "happiest", "happier", "happy" };
 char *VAR_8[] = { "no", "nope", "" };
 char *VAR_9[] = { "", "doesn't matter" };

 VAR_2.strings = VAR_3;
 VAR_2.count = 3;
 FUNC_1(FUNC_3(&VAR_1, &VAR_2));
 FUNC_0(VAR_1.ptr, "");

 VAR_2.strings = VAR_4;
 VAR_2.count = 3;
 FUNC_1(FUNC_3(&VAR_1, &VAR_2));
 FUNC_0(VAR_1.ptr, "some");

 VAR_2.strings = VAR_5;
 VAR_2.count = 3;
 FUNC_1(FUNC_3(&VAR_1, &VAR_2));
 FUNC_0(VAR_1.ptr, "");

 VAR_2.strings = VAR_6;
 VAR_2.count = 3;
 FUNC_1(FUNC_3(&VAR_1, &VAR_2));
 FUNC_0(VAR_1.ptr, "happ");

 VAR_2.strings = VAR_7;
 VAR_2.count = 3;
 FUNC_1(FUNC_3(&VAR_1, &VAR_2));
 FUNC_0(VAR_1.ptr, "happ");

 VAR_2.strings = VAR_8;
 VAR_2.count = 3;
 FUNC_1(FUNC_3(&VAR_1, &VAR_2));
 FUNC_0(VAR_1.ptr, "");

 VAR_2.strings = VAR_9;
 VAR_2.count = 3;
 FUNC_1(FUNC_3(&VAR_1, &VAR_2));
 FUNC_0(VAR_1.ptr, "");

 FUNC_2(&VAR_1);
}
