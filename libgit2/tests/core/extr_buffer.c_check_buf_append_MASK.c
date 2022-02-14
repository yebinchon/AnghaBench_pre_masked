
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int asize; int size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 int FUNC_7 (TYPE_1__*,char const*) ;

__attribute__((used)) static void
FUNC_8(
 const char* VAR_1,
 const char* VAR_2,
 const char* VAR_3,
 size_t VAR_4,
 size_t VAR_5)
{
 git_buf VAR_6 = VAR_0;

 FUNC_7(&VAR_6, VAR_1);
 FUNC_0(FUNC_5(&VAR_6) == 0);
 FUNC_6(&VAR_6, VAR_2);
 FUNC_0(FUNC_5(&VAR_6) == 0);
 FUNC_2(VAR_3, FUNC_3(&VAR_6));
 FUNC_1(VAR_6.size, VAR_4);
 if (VAR_5 > 0)
  FUNC_1(VAR_6.asize, VAR_5);

 FUNC_4(&VAR_6);
}
