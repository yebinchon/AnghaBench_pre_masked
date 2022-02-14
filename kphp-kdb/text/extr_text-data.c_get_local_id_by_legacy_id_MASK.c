
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct file_user_list_entry* dir_entry; int legacy_tree; } ;
typedef TYPE_1__ user_t ;
struct file_user_list_entry {int dummy; } ;
struct TYPE_10__ {int z; } ;
typedef TYPE_2__ ltree_t ;
struct TYPE_11__ {char* data; } ;
typedef TYPE_3__ core_mf_t ;
struct TYPE_12__ {int legacy_list_offset; int directory_offset; } ;


 TYPE_8__* VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 char* FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (int) ;
 struct file_user_list_entry* FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (int ,long long) ;

int FUNC_5 (int VAR_2, long long VAR_3) {
  user_t *VAR_4 = FUNC_0 (VAR_2);
  ltree_t *VAR_5;
  struct file_user_list_entry *VAR_6;
  char *VAR_7;

  if (!VAR_3) {
    return 0;
  }

  if (VAR_4) {
    VAR_5 = FUNC_4 (VAR_4->legacy_tree, VAR_3);
    if (VAR_5) {
      return VAR_5->z;
    }
    VAR_6 = VAR_4->dir_entry;
    VAR_7 = FUNC_1 (VAR_4);
  } else {
    VAR_6 = FUNC_3 (VAR_2);
    VAR_7 = 0;
  }

  if (!VAR_6) {
    return 0;
  }

  if (!VAR_7) {
    core_mf_t *VAR_8 = FUNC_2 (VAR_2);
    if (!VAR_8) {
      return -2;
    }
    VAR_7 = VAR_8->data;
  }

  if (!VAR_1) {
    int VAR_9 = -1, VAR_10, VAR_11, *VAR_12;
    VAR_12 = (int *) (VAR_7 + VAR_0->legacy_list_offset);
    VAR_10 = ((VAR_0->directory_offset - VAR_0->legacy_list_offset) >> 3);
    while (VAR_10 - VAR_9 > 1) {
      VAR_11 = ((VAR_9 + VAR_10) >> 1);
      if (VAR_12[2*VAR_11] <= VAR_3) {
 VAR_9 = VAR_11;
      } else {
 VAR_10 = VAR_11;
      }
    }

    if (VAR_9 >= 0 && VAR_12[2*VAR_9] == VAR_3) {
      return VAR_12[2*VAR_9+1];
    }
  } else {
    int VAR_13 = -1, VAR_14, VAR_15;
    int *VAR_16;
    VAR_16 = (int *) (VAR_7 + VAR_0->legacy_list_offset);
    VAR_14 = ((VAR_0->directory_offset - VAR_0->legacy_list_offset) / 12);
    while (VAR_14 - VAR_13 > 1) {
      VAR_15 = ((VAR_13 + VAR_14) >> 1);
      if (*(long long *)(VAR_16 + 3*VAR_15) <= VAR_3) {
 VAR_13 = VAR_15;
      } else {
 VAR_14 = VAR_15;
      }
    }

    if (VAR_13 >= 0 && *(long long *)(VAR_16 + 3*VAR_13) == VAR_3) {
      return VAR_16[3*VAR_13+2];
    }
  }

  return 0;
}
