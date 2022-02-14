
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int asize; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,char const*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (char const*) ;

void FUNC_6(void)
{
 const char *VAR_2 = "blah blah";
 git_buf VAR_3 = VAR_0;

 FUNC_3(&VAR_3, VAR_2, FUNC_5(VAR_2) + 1);
 FUNC_1(VAR_2, VAR_3.ptr);
 FUNC_0(0, VAR_3.asize);
 FUNC_0(FUNC_5(VAR_2) + 1, VAR_3.size);

 FUNC_2(VAR_1, FUNC_4(&VAR_3, 1024));
}
