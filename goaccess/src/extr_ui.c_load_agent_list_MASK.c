
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_9__ {int list_agents; } ;
struct TYPE_8__ {int size; struct TYPE_8__* items; struct TYPE_8__* name; } ;
typedef TYPE_1__ GMenu ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 TYPE_7__ VAR_8 ;
 int FUNC_1 (int *,char*,char*,int,int,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_9 ;
 int FUNC_6 (int *,int,int,int ) ;
 TYPE_1__* FUNC_7 (int *,int,int,int,int) ;
 int * FUNC_8 (int,int,int,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*,int ,TYPE_1__*) ;
 int FUNC_11 (char*,int,char*,char*) ;
 int VAR_10 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char,char,char,char,char,char,char,char) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;

void
FUNC_16 (WINDOW * VAR_11, char *VAR_12)
{
  GMenu *VAR_13;
  WINDOW *VAR_14;

  char VAR_15[256];
  int VAR_16, VAR_17 = 1, VAR_18;
  int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

  if (!VAR_8.list_agents)
    return;

  FUNC_3 (VAR_10, VAR_19, VAR_20);
  VAR_21 = VAR_19 / 2;
  VAR_22 = VAR_20 - 4;
  VAR_24 = VAR_21 - VAR_3 - 1;
  VAR_23 = VAR_22 - VAR_2 - VAR_2;

  VAR_14 = FUNC_8 (VAR_21, VAR_22, (VAR_19 - VAR_21) / 2, (VAR_20 - VAR_22) / 2);
  FUNC_5 (VAR_14, VAR_6);
  FUNC_13 (VAR_14, '|', '|', '-', '-', '+', '+', '+', '+');


  VAR_13 = FUNC_7 (VAR_14, VAR_24, VAR_23, VAR_3, VAR_2);
  if (FUNC_10 (VAR_12, VAR_9, VAR_13) == 1)
    goto out;

  FUNC_9 (VAR_13);
  FUNC_11 (VAR_15, sizeof VAR_15, VAR_1, VAR_12);
  FUNC_1 (VAR_14, VAR_15, " %s", 1, 1, VAR_22 - 2, VAR_7);
  FUNC_6 (VAR_14, 2, 2, VAR_0);
  FUNC_15 (VAR_14);

  while (VAR_17) {
    VAR_16 = FUNC_14 (VAR_10);
    switch (VAR_16) {
    case 130:
      FUNC_4 (VAR_13, VAR_4);
      break;
    case 128:
      FUNC_4 (VAR_13, VAR_5);
      break;
    case 129:
    case 'q':
      VAR_17 = 0;
      break;
    }
    FUNC_15 (VAR_14);
  }

  FUNC_12 (VAR_11);
  FUNC_0 (VAR_14);
  FUNC_15 (VAR_11);

out:


  for (VAR_18 = 0; VAR_18 < VAR_13->size; ++VAR_18)
    FUNC_2 (VAR_13->items[VAR_18].name);
  if (VAR_13->items)
    FUNC_2 (VAR_13->items);
  FUNC_2 (VAR_13);
}
