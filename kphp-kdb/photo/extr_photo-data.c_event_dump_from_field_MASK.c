
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int field_desc ;
struct TYPE_6__ {size_t v_fid; int type; int v_int; long long v_long; double v_double; int v_raw_len; int v_raw; int v_string_len; int v_string; } ;
typedef TYPE_1__ field ;
struct TYPE_7__ {int type_id; char** tval; size_t tn; int* tp; size_t* id; int size; } ;
typedef TYPE_2__ event_dump ;
typedef int event ;
struct TYPE_8__ {int * fields; } ;


 char* FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 char* FUNC_3 (int ,int ) ;





 char* FUNC_4 (int ,int ) ;
 TYPE_3__* VAR_0 ;

int FUNC_5 (event_dump *VAR_1, field *VAR_2, int VAR_3, event *VAR_4) {
  FUNC_1 (VAR_1->type_id == VAR_3);

  field_desc *VAR_5 = VAR_0[VAR_3].fields;
  char *VAR_6;
  int VAR_7 = 0;
  if (VAR_4 != ((void*)0) && FUNC_2 (VAR_4, VAR_2->v_fid) && VAR_2->type != 128 && VAR_2->type != 129) {
    VAR_6 = FUNC_0 (VAR_4, &VAR_5[VAR_2->v_fid]);
  } else {
    VAR_6 = VAR_1->tval[VAR_1->tn];
    VAR_7 = 1;
  }

  int VAR_8 = 0;
  switch (VAR_2->type) {
  case 131:
    *(int *)VAR_6 = VAR_2->v_int;
    VAR_8 = 4;
    break;
  case 130:
    *(long long *)VAR_6 = VAR_2->v_long;
    VAR_8 = 8;
    break;
  case 132:
    *(double *)VAR_6 = VAR_2->v_double;
    VAR_8 = 8;
    break;
  case 128:
    *(char **)VAR_6 = FUNC_4 (VAR_2->v_string, VAR_2->v_string_len);
    VAR_8 = VAR_2->v_string_len + 1;
    break;
  case 129:
    VAR_8 = VAR_2->v_raw_len + sizeof (short);
    *(char **)VAR_6 = FUNC_3 (VAR_2->v_raw, VAR_2->v_raw_len);
    break;
  default:
    FUNC_1 (0);
  }

  if (VAR_7) {
    VAR_1->tp[VAR_1->tn] = VAR_2->type;
    VAR_1->id[VAR_1->tn] = VAR_2->v_fid;
    VAR_1->size += VAR_8;
    VAR_1->tn++;
  }



  return 0;
}
