
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int WINDOW ;
struct TYPE_13__ {int size; int selectable; int checked; int idx; struct TYPE_13__* items; struct TYPE_13__* name; } ;
struct TYPE_12__ {scalar_t__ field; scalar_t__ sort; } ;
struct TYPE_11__ {int append_method; int append_protocol; int bandwidth; int serve_usecs; } ;
typedef scalar_t__ GSortField ;
typedef TYPE_1__ GSort ;
typedef size_t GModule ;
typedef TYPE_2__ GMenu ;
typedef TYPE_2__ GItem ;






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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_35 ;
 TYPE_10__ VAR_36 ;
 int FUNC_2 (int *,int ,char*,int,int,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,int,char*,...) ;
 TYPE_2__* FUNC_8 (int *,int ,int ,int ,int ) ;
 int * FUNC_9 (int,int,int,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int** VAR_37 ;
 int VAR_38 ;
 int FUNC_11 (char*,TYPE_2__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char,char,char,char,char,char,char,char) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int,int) ;

void
FUNC_17 (WINDOW * VAR_39, GModule VAR_40, GSort * VAR_41)
{
  GMenu *VAR_42;
  WINDOW *VAR_43;
  GSortField VAR_44[VAR_27];

  int VAR_45, VAR_46 = 1;
  int VAR_47 = 0, VAR_48, VAR_49 = 0;
  int VAR_50, VAR_51, VAR_52 = VAR_32, VAR_53 = VAR_33;
  int VAR_54 = VAR_53 - 2;

  FUNC_4 (VAR_38, VAR_50, VAR_51);


  for (VAR_47 = 0, VAR_48 = 0; -1 != VAR_37[VAR_40][VAR_47]; VAR_47++) {
    GSortField VAR_55 = VAR_37[VAR_40][VAR_47];
    if (VAR_18 == VAR_55 && !VAR_36.serve_usecs)
      continue;
    else if (VAR_21 == VAR_55 && !VAR_36.serve_usecs)
      continue;
    else if (VAR_16 == VAR_55 && !VAR_36.serve_usecs)
      continue;
    else if (VAR_17 == VAR_55 && !VAR_36.bandwidth)
      continue;
    else if (VAR_23 == VAR_55 && !VAR_36.append_protocol)
      continue;
    else if (VAR_22 == VAR_55 && !VAR_36.append_method)
      continue;
    VAR_44[VAR_48++] = VAR_55;
    VAR_49++;
  }

  VAR_43 = FUNC_9 (VAR_52, VAR_53, (VAR_50 - VAR_52) / 2, (VAR_51 - VAR_53) / 2);
  FUNC_6 (VAR_43, VAR_34);
  FUNC_13 (VAR_43, '|', '|', '-', '-', '+', '+', '+', '+');


  VAR_42 = FUNC_8 (VAR_43, VAR_28, VAR_29, VAR_31, VAR_30);
  VAR_42->size = VAR_49;
  VAR_42->selectable = 1;


  VAR_42->items = (GItem *) FUNC_16 (VAR_49, sizeof (GItem));


  for (VAR_47 = 0; VAR_47 < VAR_49; ++VAR_47) {
    GSortField VAR_56 = VAR_37[VAR_40][VAR_44[VAR_47]];
    if (VAR_20 == VAR_56) {
      VAR_42->items[VAR_47].name = FUNC_0 (VAR_4);
      if (VAR_41->field == VAR_20) {
        VAR_42->items[VAR_47].checked = 1;
        VAR_42->idx = VAR_47;
      }
    } else if (VAR_24 == VAR_56) {
      VAR_42->items[VAR_47].name = FUNC_0 (VAR_8);
      if (VAR_41->field == VAR_24) {
        VAR_42->items[VAR_47].checked = 1;
        VAR_42->idx = VAR_47;
      }
    } else if (VAR_19 == VAR_56) {
      VAR_42->items[VAR_47].name = FUNC_0 (VAR_3);
      if (VAR_41->field == VAR_19) {
        VAR_42->items[VAR_47].checked = 1;
        VAR_42->idx = VAR_47;
      }
    } else if (VAR_17 == VAR_56) {
      VAR_42->items[VAR_47].name = FUNC_0 (VAR_1);
      if (VAR_41->field == VAR_17) {
        VAR_42->items[VAR_47].checked = 1;
        VAR_42->idx = VAR_47;
      }
    } else if (VAR_16 == VAR_56) {
      VAR_42->items[VAR_47].name = FUNC_0 (VAR_0);
      if (VAR_41->field == VAR_16) {
        VAR_42->items[VAR_47].checked = 1;
        VAR_42->idx = VAR_47;
      }
    } else if (VAR_18 == VAR_56) {
      VAR_42->items[VAR_47].name = FUNC_0 (VAR_2);
      if (VAR_41->field == VAR_18) {
        VAR_42->items[VAR_47].checked = 1;
        VAR_42->idx = VAR_47;
      }
    } else if (VAR_21 == VAR_56) {
      VAR_42->items[VAR_47].name = FUNC_0 (VAR_5);
      if (VAR_41->field == VAR_21) {
        VAR_42->items[VAR_47].checked = 1;
        VAR_42->idx = VAR_47;
      }
    } else if (VAR_23 == VAR_56) {
      VAR_42->items[VAR_47].name = FUNC_0 (VAR_7);
      if (VAR_41->field == VAR_23) {
        VAR_42->items[VAR_47].checked = 1;
        VAR_42->idx = VAR_47;
      }
    } else if (VAR_22 == VAR_56) {
      VAR_42->items[VAR_47].name = FUNC_0 (VAR_6);
      if (VAR_41->field == VAR_22) {
        VAR_42->items[VAR_47].checked = 1;
        VAR_42->idx = VAR_47;
      }
    }
  }
  FUNC_10 (VAR_42);

  FUNC_2 (VAR_43, VAR_13, " %s", 1, 1, VAR_54, VAR_35);
  FUNC_7 (VAR_43, 2, 2, VAR_12);

  if (VAR_41->sort == VAR_14)
    FUNC_7 (VAR_43, VAR_32 - 2, 1, " %s", VAR_15);
  else
    FUNC_7 (VAR_43, VAR_32 - 2, 1, " %s", VAR_26);

  FUNC_15 (VAR_43);
  while (VAR_46) {
    VAR_45 = FUNC_14 (VAR_38);
    switch (VAR_45) {
    case 131:
      FUNC_5 (VAR_42, VAR_9);
      break;
    case 128:
      FUNC_5 (VAR_42, VAR_11);
      break;
    case 9:
      if (VAR_41->sort == VAR_14) {

        VAR_41->sort = VAR_25;
        FUNC_7 (VAR_43, VAR_32 - 2, 1, " %s", VAR_26);
      } else {

        VAR_41->sort = VAR_14;
        FUNC_7 (VAR_43, VAR_32 - 2, 1, " %s", VAR_15);
      }
      break;
    case 32:
    case 0x0a:
    case 0x0d:
    case 130:
      FUNC_5 (VAR_42, VAR_10);
      for (VAR_47 = 0; VAR_47 < VAR_49; ++VAR_47) {
        if (VAR_42->items[VAR_47].checked != 1)
          continue;
        if (FUNC_11 ("Hits", VAR_42->items[VAR_47].name) == 0)
          VAR_41->field = VAR_20;
        else if (FUNC_11 ("Visitors", VAR_42->items[VAR_47].name) == 0)
          VAR_41->field = VAR_24;
        else if (FUNC_11 ("Data", VAR_42->items[VAR_47].name) == 0)
          VAR_41->field = VAR_19;
        else if (FUNC_11 ("Tx. Amount", VAR_42->items[VAR_47].name) == 0)
          VAR_41->field = VAR_17;
        else if (FUNC_11 ("Avg. T.S.", VAR_42->items[VAR_47].name) == 0)
          VAR_41->field = VAR_16;
        else if (FUNC_11 ("Cum. T.S.", VAR_42->items[VAR_47].name) == 0)
          VAR_41->field = VAR_18;
        else if (FUNC_11 ("Max. T.S.", VAR_42->items[VAR_47].name) == 0)
          VAR_41->field = VAR_21;
        else if (FUNC_11 ("Protocol", VAR_42->items[VAR_47].name) == 0)
          VAR_41->field = VAR_23;
        else if (FUNC_11 ("Method", VAR_42->items[VAR_47].name) == 0)
          VAR_41->field = VAR_22;
        VAR_46 = 0;
        break;
      }
      break;
    case 129:
    case 'q':
      VAR_46 = 0;
      break;
    }
    FUNC_15 (VAR_43);
  }


  for (VAR_47 = 0; VAR_47 < VAR_49; ++VAR_47)
    FUNC_3 (VAR_42->items[VAR_47].name);
  FUNC_3 (VAR_42->items);
  FUNC_3 (VAR_42);

  FUNC_12 (VAR_39);
  FUNC_1 (VAR_43);
  FUNC_15 (VAR_39);
}
