
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__ const*,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int **,int) ;
 char* FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_3(ucl_object_t *VAR_2)
{
 ucl_object_iter_t VAR_3 = ((void*)0);
 const ucl_object_t *VAR_4;
 const char *VAR_5;

 while ((VAR_4 = FUNC_1(VAR_2, &VAR_3, 1))) {
  VAR_5 = FUNC_2(VAR_4);

  if (VAR_5 == ((void*)0))
   continue;

  if (VAR_4->type != VAR_1)
   continue;

  FUNC_0(VAR_4, VAR_0);
 }
}
