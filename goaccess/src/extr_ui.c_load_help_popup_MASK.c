
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_8__ {size_t size; struct TYPE_8__* items; struct TYPE_8__* name; scalar_t__ checked; } ;
typedef TYPE_1__ GMenu ;
typedef TYPE_1__ GItem ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_11 ;
 int FUNC_3 (int *,int ,char*,int,int,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int * VAR_12 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int,int,int ) ;
 TYPE_1__* FUNC_9 (int *,int ,int ,int ,int ) ;
 int * FUNC_10 (int,int,int,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char,char,char,char,char,char,char,char) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (size_t,int) ;

void
FUNC_17 (WINDOW * VAR_14)
{
  int VAR_15, VAR_16 = 1;
  size_t VAR_17, VAR_18;
  int VAR_19, VAR_20, VAR_21 = VAR_6, VAR_22 = VAR_7;
  int VAR_23 = VAR_22 - 2;
  WINDOW *VAR_24;
  GMenu *VAR_25;

  VAR_18 = FUNC_0 (VAR_12);
  FUNC_5 (VAR_13, VAR_19, VAR_20);

  VAR_24 = FUNC_10 (VAR_21, VAR_22, (VAR_19 - VAR_21) / 2, (VAR_20 - VAR_22) / 2);
  FUNC_7 (VAR_24, VAR_10);
  FUNC_13 (VAR_24, '|', '|', '-', '-', '+', '+', '+', '+');


  VAR_25 =
    FUNC_9 (VAR_24, VAR_2, VAR_3, VAR_5,
               VAR_4);
  VAR_25->size = VAR_18;


  VAR_25->items = (GItem *) FUNC_16 (VAR_18, sizeof (GItem));
  for (VAR_17 = 0; VAR_17 < VAR_18; ++VAR_17) {
    VAR_25->items[VAR_17].name = FUNC_1 (VAR_12[VAR_17]);
    VAR_25->items[VAR_17].checked = 0;
  }
  FUNC_11 (VAR_25);

  FUNC_3 (VAR_24, VAR_1, " %s", 1, 1, VAR_23, VAR_11);
  FUNC_8 (VAR_24, 2, 2, VAR_0);

  FUNC_15 (VAR_24);
  while (VAR_16) {
    VAR_15 = FUNC_14 (VAR_13);
    switch (VAR_15) {
    case 130:
      FUNC_6 (VAR_25, VAR_8);
      break;
    case 128:
      FUNC_6 (VAR_25, VAR_9);
      break;
    case 129:
    case 'q':
      VAR_16 = 0;
      break;
    }
    FUNC_15 (VAR_24);
  }

  for (VAR_17 = 0; VAR_17 < VAR_18; ++VAR_17)
    FUNC_4 (VAR_25->items[VAR_17].name);
  FUNC_4 (VAR_25->items);
  FUNC_4 (VAR_25);

  FUNC_12 (VAR_14);
  FUNC_2 (VAR_24);
  FUNC_15 (VAR_14);
}
