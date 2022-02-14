
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int WINDOW ;
struct TYPE_15__ {size_t module; int dash_size; } ;
struct TYPE_14__ {TYPE_1__* module; int current; } ;
struct TYPE_13__ {int offset; } ;
struct TYPE_12__ {scalar_t__ no_column_names; } ;
typedef TYPE_2__ GScroll ;
typedef size_t GModule ;
typedef TYPE_3__ GDashModule ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_11__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,TYPE_3__*,int*) ;
 int FUNC_3 (int *,TYPE_3__*,int*,int,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_3__*,int*) ;
 int FUNC_5 (int *,TYPE_3__*,int ,int*) ;

__attribute__((used)) static void
FUNC_6 (WINDOW * VAR_5, GDashModule * VAR_6, int *VAR_7, int *VAR_8,
                int *VAR_9, GScroll * VAR_10)
{
  GModule VAR_11 = VAR_6->module;
  int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17 = FUNC_0 ();

  FUNC_1 (VAR_5, VAR_15, VAR_16);
  (void) VAR_16;

  VAR_14 = VAR_6->dash_size;
  for (VAR_12 = *VAR_8, VAR_13 = 0; VAR_12 < VAR_14; VAR_12++) {

    if ((VAR_12 % VAR_14) == VAR_3) {
      FUNC_5 (VAR_5, VAR_6, VAR_10->current, VAR_7);
    } else if ((VAR_12 % VAR_14) == VAR_2 && VAR_4.no_column_names) {

      FUNC_4 (VAR_5, VAR_6, VAR_7);
    } else if ((VAR_12 % VAR_14) == VAR_2 || (VAR_12 % VAR_14) == VAR_14 - 1) {

      (*VAR_7)++;
    } else if ((VAR_12 % VAR_14) == VAR_1 && !VAR_4.no_column_names) {

      (*VAR_7)++;
    } else if ((VAR_12 % VAR_14) == VAR_0 && !VAR_4.no_column_names) {

      FUNC_2 (VAR_5, VAR_6, VAR_7);
      (*VAR_7)++;
    } else if ((VAR_12 % VAR_14) >= VAR_17 || (VAR_12 % VAR_14) <= VAR_14 - 2) {

      VAR_13 = ((VAR_12 % VAR_14) - VAR_17) + VAR_10->module[VAR_11].offset;

      FUNC_3 (VAR_5, VAR_6, VAR_7, VAR_13, VAR_10);
    } else {

      (*VAR_7)++;
    }
    (*VAR_9)++;
    if (*VAR_7 >= VAR_15)
      break;
  }
}
