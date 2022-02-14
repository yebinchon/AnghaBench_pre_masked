
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int raw_size; int total_copies; int schema_id; int extra_bytes; int split_mod; int split_min; int split_max; int schema_extra; int slice_creator; int creator; int modified; int created; int slice_created; int replica_created; int slice_name; int table_name; int table_id_hash; void* slice_id_hash; void* replica_id_hash; void* file_id_hash; int header_seq_num; int kfs_file_type; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 char* VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,char*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;
 int VAR_10 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_1__*,int) ;

void FUNC_12 (int VAR_11, char *VAR_12) {
  FUNC_0 (!VAR_2 && !VAR_0);

  if (VAR_9) {
    return;
  }

  VAR_2 = 2;
  FUNC_1 (VAR_4);

  VAR_0 = VAR_4;

  VAR_0->kfs_file_type = VAR_5;
  VAR_0->modified = FUNC_10 (0);
  VAR_0->header_seq_num++;

  VAR_0->file_id_hash = FUNC_3 ();
  VAR_0->replica_id_hash = VAR_0->slice_id_hash = FUNC_3 ();

  VAR_0->table_id_hash = FUNC_4 ("money");
  FUNC_8 (VAR_0->table_name, "money");
  if (VAR_8 > 1) {
    FUNC_7 (VAR_0->slice_name, "money%03d", VAR_7);
  } else {
    FUNC_8 (VAR_0->slice_name, "money");
  }

  VAR_0->raw_size = 8192;
  VAR_0->replica_created = VAR_0->slice_created = VAR_0->created = VAR_0->modified;

  VAR_0->total_copies = 1;

  FUNC_8 (VAR_0->creator, VAR_3);
  FUNC_8 (VAR_0->slice_creator, VAR_3);

  VAR_0->schema_id = VAR_11;
  if (VAR_12) {
    VAR_0->extra_bytes = FUNC_9 (VAR_12);
    if (VAR_0->extra_bytes > 512) {
      VAR_0->extra_bytes = 512;
    }
    FUNC_6 (VAR_0->schema_extra, VAR_12, VAR_0->extra_bytes);
  }

  VAR_0->split_mod = VAR_8;
  VAR_0->split_min = VAR_7;
  VAR_0->split_max = VAR_6;

  FUNC_2 (VAR_0);

  FUNC_0 (FUNC_5 (VAR_10, 0, VAR_1) == 0);
  FUNC_0 (FUNC_11 (VAR_10, VAR_4, 4096) == 4096);
  FUNC_0 (FUNC_11 (VAR_10, VAR_4, 4096) == 4096);
}
