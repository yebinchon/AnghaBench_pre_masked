
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; size_t size; size_t asize; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(void)
{
 char *VAR_0 = "Simple text\n";
 size_t VAR_1 = 12;
 char *VAR_2 = "Is that UTF-8 data I see…\nYep!\n";
 size_t VAR_3 = 31;
 char *VAR_4 = "Internal NUL!!!\000\n\nI see you!\n";
 size_t VAR_5 = 29;
 char *VAR_6 = "\xef\xbb\xbfThis is UTF-8 with a BOM.\n";
 size_t VAR_7 = 20;
 git_buf VAR_8;

 VAR_8.ptr = VAR_0; VAR_8.size = VAR_8.asize = VAR_1;
 FUNC_0(!FUNC_2(&VAR_8));
 FUNC_0(!FUNC_1(&VAR_8));

 VAR_8.ptr = VAR_2; VAR_8.size = VAR_8.asize = VAR_3;
 FUNC_0(!FUNC_2(&VAR_8));
 FUNC_0(!FUNC_1(&VAR_8));

 VAR_8.ptr = VAR_4; VAR_8.size = VAR_8.asize = VAR_5;
 FUNC_0(FUNC_2(&VAR_8));
 FUNC_0(FUNC_1(&VAR_8));

 VAR_8.ptr = VAR_6; VAR_8.size = VAR_8.asize = VAR_7;
 FUNC_0(!FUNC_2(&VAR_8));
 FUNC_0(!FUNC_1(&VAR_8));
}
