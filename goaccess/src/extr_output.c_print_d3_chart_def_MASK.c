
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ json_pretty_print; } ;
struct TYPE_6__ {int key; } ;
typedef TYPE_1__ GChart ;
typedef int FILE ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int ,int) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,size_t,int) ;

__attribute__((used)) static void
FUNC_4 (FILE * VAR_1, GChart * VAR_2, size_t VAR_3, int VAR_4)
{
  size_t VAR_5 = 0, VAR_6 = 0;
  int VAR_7 = 0;


  if (VAR_0.json_pretty_print)
    VAR_7 = VAR_4 + 1;

  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
    VAR_6 = FUNC_2 (VAR_2 + VAR_5);

    FUNC_1 (VAR_1, VAR_2[VAR_5].key, VAR_4);
    FUNC_3 (VAR_1, VAR_2 + VAR_5, VAR_6, VAR_7);
    FUNC_0 (VAR_1, VAR_4, (VAR_5 == VAR_3 - 1));
  }
}
