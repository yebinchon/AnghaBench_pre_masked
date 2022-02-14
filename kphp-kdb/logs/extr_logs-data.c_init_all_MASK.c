
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int kfs_file_handle_t ;
typedef int field_desc ;
typedef int event ;
struct TYPE_18__ {int type; char* name; } ;
struct TYPE_17__ {TYPE_3__* root; } ;
struct TYPE_16__ {scalar_t__ index_type; scalar_t__ log_pos1_crc32; scalar_t__ log_pos1; scalar_t__ log_timestamp; scalar_t__ log_pos0_crc32; scalar_t__ log_pos0; scalar_t__ log_timestamp0; } ;
struct TYPE_15__ {int type; int name; } ;
struct TYPE_12__ {int dtype; } ;
struct TYPE_14__ {TYPE_1__ tok; } ;
struct TYPE_13__ {int * name; TYPE_5__* fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 void* VAR_5 ;
 int FUNC_2 (int) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 void* FUNC_3 (int) ;
 int * FUNC_4 (char*) ;
 TYPE_7__ VAR_9 ;
 scalar_t__ VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 TYPE_9__* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int) ;
 char* FUNC_6 (TYPE_7__*,char*,TYPE_2__*) ;
 int * VAR_17 ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ VAR_18 ;
 TYPE_6__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 scalar_t__* VAR_24 ;
 scalar_t__* VAR_25 ;
 scalar_t__* VAR_26 ;
 int VAR_27 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int * VAR_31 ;
 int * VAR_32 ;
 int VAR_33 ;
 int FUNC_12 (char*,char**,int*,int) ;
 int FUNC_13 (char*,char*,int*,int*) ;
 TYPE_5__* VAR_34 ;
 scalar_t__* VAR_35 ;
 int VAR_36 ;
 scalar_t__ FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*) ;
 scalar_t__* VAR_37 ;
 scalar_t__* VAR_38 ;
 scalar_t__* VAR_39 ;
 int VAR_40 ;
 TYPE_3__* FUNC_16 (TYPE_3__*,int ) ;
 int FUNC_17 () ;
 TYPE_2__* VAR_41 ;
 int VAR_42 ;
 int FUNC_18 (scalar_t__*) ;
 scalar_t__ VAR_43 ;

int FUNC_19 (kfs_file_handle_t VAR_44) {
  FUNC_2 (sizeof (long long) == sizeof (double));

  VAR_27 = 1;

  VAR_3 = VAR_29 - VAR_33;
  VAR_2 = VAR_3 / VAR_30;
  VAR_16 = VAR_3 - 5;
  FUNC_2 (VAR_3 >= (1 << 26));

  FUNC_18 (VAR_25);
  FUNC_18 (VAR_26);
  FUNC_18 (VAR_24);

  FUNC_18 (VAR_38);
  FUNC_18 (VAR_39);
  FUNC_18 (VAR_37);

  FUNC_11 (&VAR_28);

  if (!VAR_43) {
    VAR_15 = FUNC_3 (VAR_3);
    VAR_14 = FUNC_3 (sizeof (event *) * VAR_2);
    VAR_5 = FUNC_3 (sizeof (int) * VAR_2);
  }

  int VAR_45;
  for (VAR_45 = 0; VAR_45 < VAR_0; VAR_45 += 1 + VAR_35[VAR_45]) {
    VAR_34[VAR_45].type = VAR_45 - VAR_0;
    VAR_34[VAR_45].name = VAR_17[VAR_45];

    VAR_13[VAR_45].type = VAR_45 - VAR_0;
    VAR_13[VAR_45].name = "";
  }


  VAR_41[0].name = FUNC_4 ("virtual_event");
  VAR_41[0].fields = FUNC_3 (sizeof (field_desc) * VAR_0);
  for (VAR_45 = 0; VAR_45 < VAR_0; VAR_45 += 1 + VAR_35[VAR_45]) {
    VAR_41[0].fields[VAR_45] = VAR_34[VAR_45];
  }
  VAR_41[0].fields += VAR_0;
  for (VAR_45 = 0; VAR_45 < VAR_8; VAR_45++) {
    FUNC_1 (VAR_41, VAR_6[VAR_45], VAR_7[VAR_45]);
  }

  for (VAR_45 = 0; VAR_45 < VAR_0; VAR_45 += 1 + VAR_35[VAR_45]) {
    if (VAR_35[VAR_45]) {
      FUNC_11 (&VAR_32[VAR_45]);
    } else {
      FUNC_10 (&VAR_31[VAR_45]);
    }
  }

  int VAR_46 = FUNC_8 (VAR_44);

  if (VAR_10) {
    FUNC_9();

    FUNC_2 (VAR_1);
    if (VAR_19.index_type == 0) {
      FUNC_7 (VAR_36, "You need to generate new index first.\n");
      FUNC_5 (1);
    }
    int VAR_47;
    for (VAR_47 = 0; VAR_47 + 1 < VAR_40 && VAR_39[VAR_47 + 1] < VAR_18; VAR_47++) {
    }

    if (FUNC_15 (VAR_11) == 0) {
      FUNC_7 (VAR_36, "Dump query can't be empty.\n");
      FUNC_5 (1);
    }

    char *VAR_48[3];
    int VAR_49;
    FUNC_12 (VAR_11, VAR_48, &VAR_49, 2);
    if (VAR_49 == 0) {
      FUNC_7 (VAR_36, "Too much commas in dump query.\n");
      FUNC_5 (1);
    }

    if (VAR_49 == 2 && FUNC_14 (VAR_48[1], "1")) {
      VAR_11 = VAR_48[1];
    } else {
      VAR_11 = ((void*)0);
    }

    int VAR_50;
    if (FUNC_13 (VAR_48[0], "%d%n", &VAR_12, &VAR_50) != 1 || VAR_48[0][VAR_50]) {
      FUNC_7 (VAR_36, "Can't parse [%s] as integer.\n", VAR_48[0]);
      FUNC_5 (1);
    }

    if (!(0 <= VAR_12 && VAR_12 < VAR_4)) {
      FUNC_7 (VAR_36, "Dump_type [%d] not in range [0;%d].\n", VAR_12, VAR_4 - 1);
      FUNC_5 (1);
    }

    if (VAR_12 != 0 && VAR_41[VAR_12].name == ((void*)0)) {
      FUNC_7 (VAR_36, "Dump_type [%d] is unknown.\n", VAR_12);
      FUNC_5 (1);
    }

    if (VAR_11 != ((void*)0)) {
      char *VAR_51 = FUNC_6 (&VAR_9, VAR_11, &VAR_41[VAR_12]);
      if (VAR_51 != ((void*)0)) {
        FUNC_7 (VAR_36, "Cannot compile expression [%s] : error [%s]\n", VAR_11, VAR_51);
        FUNC_5 (1);
      }

      if (FUNC_0(VAR_9.root->tok.dtype)) {
        FUNC_7 (VAR_36, "Cannot convert result of dump_query[%s] (string) to int\n", VAR_11);
        FUNC_5 (1);
      }
      VAR_9.root = FUNC_16 (VAR_9.root, VAR_42);
    }

    VAR_23 = VAR_39[VAR_47];
    VAR_22 = VAR_38[VAR_47];
    VAR_21 = VAR_37[VAR_47];

  } else if (VAR_20 && VAR_1 >= 1 && VAR_19.index_type == 0) {
    VAR_23 = 0;
    VAR_22 = 0;
    VAR_21 = 0;
  } else if (VAR_43 && !VAR_20) {
    VAR_23 = VAR_19.log_timestamp0;
    VAR_22 = VAR_19.log_pos0;
    VAR_21 = VAR_19.log_pos0_crc32;
  } else {
    VAR_23 = VAR_19.log_timestamp;
    VAR_22 = VAR_19.log_pos1;
    VAR_21 = VAR_19.log_pos1_crc32;
  }


  if (VAR_46) {
    FUNC_17();
  }
  return VAR_46;
}
