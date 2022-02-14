
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int user ;
struct TYPE_6__ {int objs_limit; scalar_t__ file_type; int total_scores; int has_names; int fid_names_cnt; int fid_id; int fid_id_str; TYPE_2__* fid_names_begins; TYPE_2__* fid_names; TYPE_2__* C; TYPE_2__* C_index; TYPE_2__* CC; TYPE_2__* f_mul; int fids; } ;
typedef TYPE_1__ similarity_index_header ;
typedef int score ;
struct TYPE_7__ {int new_exceptions; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_2__) ;
 scalar_t__* VAR_0 ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_10 () ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_9 ;

void FUNC_12 (void) {
  if (VAR_9 > 0) {
    while (FUNC_10() != -1) {
    }

    int VAR_10, VAR_11;
    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
      FUNC_6 (&VAR_8[VAR_10].new_exceptions);
    }

    for (VAR_10 = 1; VAR_10 < 256; VAR_10++) {
      if (VAR_6[VAR_10]) {
        similarity_index_header *VAR_12 = &VAR_4[VAR_10];
        int VAR_13 = VAR_12->objs_limit;

        FUNC_11 (&VAR_12->fids);

        FUNC_1 (VAR_12->f_mul, sizeof (float) * VAR_13);

        if (VAR_12->file_type == 0) {
          FUNC_1 (VAR_12->CC, sizeof (float) * VAR_12->total_scores);
        } else {
          FUNC_1 (VAR_12->C_index, sizeof (int) * (VAR_13 + 1));
          FUNC_1 (VAR_12->C, sizeof (score) * VAR_12->total_scores);
        }

        if (VAR_12->has_names) {
          FUNC_1 (VAR_12->fid_names, VAR_12->has_names);

          for (VAR_11 = VAR_13; VAR_11 < VAR_12->fid_names_cnt; VAR_11++) {
            FUNC_3 (VAR_12->fid_names_begins[VAR_11]);
          }
          FUNC_1 (VAR_12->fid_names_begins, sizeof (char *) * (VAR_13 * (VAR_3 + 1) + 1024000 * VAR_3 + 1));
          FUNC_9 (&VAR_12->fid_id_str);
        } else {
          FUNC_8 (&VAR_12->fid_id);
        }
      }
      if (VAR_0[VAR_10]) {

      }
    }

    FUNC_1 (VAR_8, sizeof (user) * VAR_7);

    FUNC_7 (&VAR_1);
    FUNC_5 (&VAR_2);

    FUNC_4 (VAR_5, "Memory left: %ld\n", FUNC_2());
    FUNC_0 (FUNC_2() == 0);
  }
}
