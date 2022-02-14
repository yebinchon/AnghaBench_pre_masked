
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int q_info ;
typedef int kfs_file_handle_t ;
struct TYPE_4__ {int log_pos1_crc32; int log_pos1; int log_timestamp; int use_stemmer; int created_at; } ;
struct TYPE_3__ {int prev_bucket; int next_bucket; scalar_t__ prev_used; scalar_t__ next_used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_1 (int *) ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 double** VAR_15 ;
 int FUNC_3 (int ,double) ;
 TYPE_1__* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_21 ;

int FUNC_6 (kfs_file_handle_t VAR_22) {
  VAR_14 = 1;

  FUNC_1 (&VAR_7);
  FUNC_1 (&VAR_6);




  int VAR_23 = FUNC_2 (VAR_22);
  VAR_19 = VAR_9.created_at;
  VAR_21 = VAR_9.use_stemmer;

  VAR_13 = VAR_9.log_timestamp;
  VAR_12 = VAR_9.log_pos1;
  VAR_11 = VAR_9.log_pos1_crc32;

  int VAR_24;
  VAR_18 = VAR_2;
  VAR_16 = FUNC_0 (sizeof (q_info) * (VAR_2 + VAR_18));
  VAR_17 = FUNC_0 (sizeof (int) * VAR_18);
  for (VAR_24 = 1; VAR_24 < VAR_2; VAR_24++) {
    VAR_16[VAR_24].prev_bucket = VAR_24;
    VAR_16[VAR_24].next_bucket = VAR_24;
  }
  VAR_16[0].next_used = 0;
  VAR_16[0].prev_used = 0;

  VAR_10[0] = 1;
  for (VAR_24 = 1; VAR_24 < VAR_1; VAR_24++) {
    VAR_10[VAR_24] = VAR_10[VAR_24 - 1] * VAR_0;
  }
  VAR_3[VAR_4++] = '?';


  FUNC_3 (VAR_20, 0.5);
  FUNC_3 (VAR_5, 1.0);

  int VAR_25;
  for (VAR_24 = 0; VAR_24 < 128; VAR_24++) {
    for (VAR_25 = 0; VAR_25 < 128; VAR_25++) {
      VAR_15[VAR_24][VAR_25] = (1.0 + VAR_15[VAR_24][VAR_25]) * 0.5;
    }
  }

  FUNC_4();

  if (VAR_23) {
    FUNC_5();
  }
  return 1;
}
