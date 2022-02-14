
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int value_t ;
struct TYPE_12__ {int tot_entries; int flags; int* data; } ;
typedef TYPE_1__ metafile_t ;
struct TYPE_13__ {int metafile_index; int o_tree; } ;
typedef TYPE_2__ list_t ;
typedef int global_id_t ;
typedef int array_object_id_t ;
struct TYPE_14__ {int N; int * A; int * root; } ;
struct TYPE_11__ {int list_file_offset; } ;


 scalar_t__ VAR_0 ;
 TYPE_10__* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_2__* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 unsigned char* VAR_9 ;
 int * VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 char* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int* VAR_20 ;
 char* VAR_21 ;
 int VAR_22 ;
 int * VAR_23 ;
 int VAR_24 ;
 TYPE_5__ VAR_25 ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int,char*,int,int) ;

__attribute__((used)) static void FUNC_6 (list_t *VAR_26) {
  metafile_t *VAR_27 = VAR_26->metafile_index != -1 ? FUNC_4 (VAR_26->metafile_index) : 0;
  VAR_6 = VAR_26;
  VAR_25.root = &VAR_26->o_tree;



  if (!VAR_27) {
    VAR_11 = 0;
    VAR_12 = 0;
    VAR_22 = 0;
    VAR_13 = 0;
    VAR_10 = 0;
    VAR_14 = 0;
    VAR_16 = 0;
    VAR_15 = 0;
    VAR_23 = 0;
    VAR_7 = 0;
    VAR_20 = 0;
    VAR_9 = 0;
    VAR_8 = 0;
    VAR_19 = 0;
    VAR_18 = 0;
    VAR_21 = 0;
    VAR_17 = 0;
    VAR_25.N = 0;
    VAR_25.A = 0;
    return;
  }
  FUNC_3 (FUNC_1(VAR_27) == VAR_0);
  VAR_11 = VAR_27;
  int VAR_28 = VAR_26->metafile_index;
  VAR_12 = FUNC_0(VAR_28+1)->list_file_offset - FUNC_0(VAR_28)->list_file_offset;
  int VAR_29 = VAR_27->tot_entries, VAR_30 = VAR_27->flags, *VAR_31;
  FUNC_5 (3, "Metafile flags: %d, tot_entries = %d\n", VAR_30, VAR_29);
  FUNC_3 ((unsigned) VAR_29 <= VAR_5);
  VAR_25.N = VAR_22 = VAR_29;
  VAR_25.A = VAR_13 = (array_object_id_t *)(VAR_31 = VAR_27->data);
  VAR_31 += VAR_29 * VAR_24;
  VAR_10 = (global_id_t *)VAR_31;
  VAR_31 += VAR_29 * (sizeof (global_id_t) / sizeof (int));
  VAR_14 = VAR_31;
  VAR_31 += VAR_29;
  VAR_16 = VAR_31;
  VAR_31 += VAR_29;
  VAR_15 = VAR_31;
  VAR_31 += VAR_29;
  if (VAR_30 & VAR_4) {
    VAR_23 = (value_t *) VAR_31;



    VAR_31 += VAR_29;

  } else {
    VAR_23 = 0;
  }
  if (VAR_30 & VAR_2) {
    VAR_7 = VAR_31;
    VAR_31 += VAR_29;
  } else {
    VAR_7 = 0;
  }
  if (VAR_30 & VAR_3) {
    VAR_20 = VAR_31;
    VAR_31 += VAR_29 + 1;
  } else {
    VAR_20 = 0;
  }
  if (VAR_30 & VAR_1) {
    VAR_8 = VAR_31;
    VAR_9 = 0;
    VAR_21 = (char *) (VAR_31 + VAR_29);
  } else {
    VAR_9 = (unsigned char *) VAR_31;
    VAR_8 = 0;
    VAR_21 = (char *) VAR_31 + VAR_29;
  }
  VAR_17 = (char *) FUNC_2 (VAR_11) + VAR_12;
  FUNC_3 (VAR_21 <= VAR_17);
  VAR_19 = VAR_21 - (char *) FUNC_2 (VAR_11);
  VAR_18 = VAR_12;
}
