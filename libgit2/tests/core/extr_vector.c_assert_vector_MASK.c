
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** contents; int length; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,int ) ;

__attribute__((used)) static void FUNC_2(git_vector *VAR_0, void *VAR_1[], size_t VAR_2)
{
 size_t VAR_3;

 FUNC_1(VAR_2, VAR_0->length);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_1[VAR_3] == VAR_0->contents[VAR_3]);
}
