
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int user ;
struct TYPE_5__ {int field_i; TYPE_1__* fields; } ;
typedef TYPE_2__ type_desc ;
struct lev_photo_increm_data {int type; int cnt; int data_id; } ;
struct lev_generic {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ is_const; } ;


 size_t VAR_0 ;


 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int *,struct lev_generic*,int) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;

int FUNC_5 (user *VAR_6, struct lev_photo_increm_data *VAR_7, int VAR_8) {
  if (VAR_6 == ((void*)0)) {
    return 0;
  }

  if (VAR_5) {
    return 1;
  }

  int VAR_9 = VAR_7->type & 255;

  type_desc *VAR_10;
  switch (VAR_7->type - (VAR_2 << 16) - VAR_9) {
    case 128:
      VAR_10 = &VAR_4[VAR_1];
      break;
    case 129:
      VAR_10 = &VAR_4[VAR_0];
      break;
    default:
      FUNC_0 (0);
      return 0;
  }

  FUNC_0 (VAR_9 < VAR_10->field_i);
  if (VAR_10->fields[VAR_9].is_const) {
    return 0;
  }
  if (VAR_10->fields[VAR_9].type != VAR_3) {
    return 0;
  }

  if (!FUNC_4 (VAR_6)) {
    FUNC_1 (VAR_6, (struct lev_generic *)VAR_7, VAR_8);
    return 1;
  }

  switch (VAR_7->type - (VAR_2 << 16) - VAR_9) {
    case 128:
      return FUNC_3 (VAR_6, VAR_7->data_id, VAR_9, VAR_7->cnt);
    case 129:
      return FUNC_2 (VAR_6, VAR_7->data_id, VAR_9, VAR_7->cnt);
    default:
      FUNC_0 (0);
  }
}
