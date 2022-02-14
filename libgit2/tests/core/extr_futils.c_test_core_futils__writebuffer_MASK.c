
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*,int,int) ;

void FUNC_7(void)
{
 git_buf VAR_4 = VAR_0,
  VAR_5 = VAR_0;


 FUNC_5(&VAR_4, "hello!\n");
 FUNC_3(&VAR_4, "this is a %s\n", "test");

 FUNC_1(FUNC_6(&VAR_4, "futils/test-file", VAR_3|VAR_2, 0666));

 FUNC_0(VAR_4.ptr, VAR_4.size, "futils/test-file");


 FUNC_5(&VAR_5, "And some more!\n");
 FUNC_4(&VAR_4, VAR_5.ptr, VAR_5.size);

 FUNC_1(FUNC_6(&VAR_5, "futils/test-file", VAR_3|VAR_1, 0666));

 FUNC_0(VAR_4.ptr, VAR_4.size, "futils/test-file");

 FUNC_2(&VAR_4);
 FUNC_2(&VAR_5);
}
