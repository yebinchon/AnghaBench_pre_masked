
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, const char *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 git_buf VAR_4 = VAR_0;
 int VAR_5;

 if (FUNC_2(&VAR_3, VAR_1) < 0)
  FUNC_0(0);

 if (FUNC_2(&VAR_4, VAR_2) < 0) {
  FUNC_1(&VAR_3);
  FUNC_0(0);
 }

 VAR_5 = (VAR_3.size == VAR_4.size && !FUNC_3(VAR_3.ptr, VAR_4.ptr, VAR_3.size));

 FUNC_1(&VAR_3);
 FUNC_1(&VAR_4);

 FUNC_0(VAR_5);
}
