
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(void)
{
 git_buf VAR_1 = VAR_0;
 bool VAR_2;

 FUNC_2(&VAR_1, FUNC_0(), "nsec_test");

 VAR_2 = FUNC_4(VAR_1.ptr);

 FUNC_3(VAR_1.ptr);

 FUNC_1(&VAR_1);

 return VAR_2;
}
