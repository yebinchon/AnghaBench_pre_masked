
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

void FUNC_8(void)
{
 git_buf VAR_2 = VAR_1;
 size_t VAR_3, VAR_4;

 for (VAR_4 = 1024; VAR_4 <= 1024 * 1024 * 4; VAR_4 *= 8) {


  FUNC_2(&VAR_2);
  while (VAR_2.size < VAR_4)
   FUNC_0(
    FUNC_4(&VAR_2, VAR_0, FUNC_7(VAR_0)));

  FUNC_1(&VAR_2);


  FUNC_6(0xabad1dea);
  for (VAR_3 = 0; VAR_3 < VAR_2.size; ++VAR_3)
   VAR_2.ptr[VAR_3] = (char)FUNC_5();

  FUNC_1(&VAR_2);
 }

 FUNC_3(&VAR_2);
}
