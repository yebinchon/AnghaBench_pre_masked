
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char const*,int,char const*) ;
 int FUNC_7 (char const*,int *) ;

__attribute__((used)) static void FUNC_8(const char *VAR_1,
           const char *VAR_2,
           const char *VAR_3)
{
 git_buf VAR_4 = VAR_0, VAR_5 = VAR_0;

 FUNC_3(&VAR_5, FUNC_7(VAR_3, ((void*)0)), 0);
 FUNC_0(VAR_5.size > 0);
 FUNC_2(FUNC_5(&VAR_5));
 FUNC_2(FUNC_6(&VAR_4, VAR_1, 1, VAR_2));

 FUNC_1(VAR_4.ptr, VAR_5.ptr);

 FUNC_4(&VAR_5);
 FUNC_4(&VAR_4);
}
