
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int num_tests; } ;
struct TYPE_7__ {int processed; } ;
typedef TYPE_1__ GLog ;


 int FUNC_0 (int,int ) ;
 TYPE_6__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4 (GLog * VAR_1, char *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
  int VAR_6 = 0;
  int VAR_7 = VAR_0.num_tests;


  if ((VAR_6 = FUNC_1 (VAR_1, VAR_2, VAR_5)) == 0 && *VAR_3)
    *VAR_3 = 0;


  if (VAR_6 == -1)
    return 0;



  VAR_7 = FUNC_0 (VAR_0.num_tests, VAR_1->processed);



  if (VAR_0.num_tests && ++(*VAR_4) == VAR_7 && *VAR_3) {
    FUNC_3 (VAR_1);
    FUNC_2 (VAR_1);
    return 1;
  }

  return 0;
}
