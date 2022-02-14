
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metafile {scalar_t__ data; TYPE_1__* header; scalar_t__ aio; } ;
struct index_entry {int key_len; int data; } ;
struct TYPE_2__ {int nrecords; int key_len; int key; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,...) ;
 struct index_entry VAR_0 ;
 int FUNC_3 (int) ;
 struct index_entry* FUNC_4 (int,int) ;
 int VAR_1 ;
 struct metafile* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (char const*,int,int ,int ,scalar_t__) ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int VAR_6 ;

struct index_entry* FUNC_8 (const char *VAR_7, int VAR_8) {
  int VAR_9 = -1;
  int VAR_10 = VAR_1;
  int VAR_11 = 1;
  int VAR_12 = 1;
  while (VAR_10 - VAR_9 > 1) {
    int VAR_13 = (VAR_10 + VAR_9) >> 1;
    int VAR_14 = FUNC_6 (VAR_7, VAR_8, VAR_2[VAR_13].header->key, VAR_2[VAR_13].header->key_len, FUNC_5 (VAR_11, VAR_12) - 1);
    if (VAR_14 < 0) {
      VAR_10 = VAR_13;
      VAR_12 = -VAR_14;
    } else if (VAR_14 > 0) {
      VAR_9 = VAR_13;
      VAR_11 = VAR_14;
    } else {
      VAR_9 = VAR_13;
      break;
    }
  }
  if (VAR_9 < 0) { VAR_9 = 0; }
  if (VAR_9 >= VAR_1) {
    if (VAR_6 >= 4) { FUNC_2 (VAR_5, "not found[1]\n"); }
    return &VAR_0;
  }
  if (VAR_6 >= 4) {
    FUNC_2 (VAR_5, "(l,r) = (%d,%d)\n", VAR_9, VAR_10);
  }
  int VAR_15 = VAR_9;
  int VAR_16 = VAR_15;
  while (1) {
    FUNC_0 (VAR_16 - VAR_15 < 2);
    if (VAR_15 == VAR_1) {
      return &VAR_0;
    }
    if (VAR_2[VAR_15].data == 0 || VAR_2[VAR_15].aio) {
      FUNC_3 (VAR_15);
     if (VAR_2[VAR_15].data == 0 || VAR_2[VAR_15].aio) {
        VAR_3 ++;
       return 0;
     }
    }
    VAR_4 ++;
    FUNC_7 (VAR_15);
    int VAR_17 = VAR_15;
    struct metafile* VAR_18 = &VAR_2[VAR_15];

    VAR_9 = -1;
    VAR_10 = VAR_18->header->nrecords;
    VAR_11 = 1;
    VAR_12 = 1;
    while (VAR_10-VAR_9 > 1) {
      int VAR_19 = (VAR_10+VAR_9)>>1;
      int VAR_20 = FUNC_6 (VAR_7, VAR_8, FUNC_4 (VAR_17, VAR_19)->data, FUNC_4 (VAR_17, VAR_19)->key_len, FUNC_5 (VAR_11, VAR_12) - 1);
      if (VAR_20 < 0) {
        VAR_10 = VAR_19;
        VAR_12 = -VAR_20;
      } else if (VAR_20 > 0) {
        VAR_9 = VAR_19;
        VAR_11 = VAR_20;
      } else {
        VAR_9 = VAR_19;
        break;
      }
    }
    if (VAR_6>=4) {
      FUNC_2 (VAR_5, "(l,r) = (%d,%d)\n", VAR_9, VAR_10);
    }
    VAR_9 ++;

    if (VAR_9 == VAR_18->header->nrecords) {
      VAR_15 ++;
      continue;
    }

    struct index_entry *VAR_21 = FUNC_4 (VAR_17, VAR_9);
    if (VAR_6 >= 4) {
      FUNC_2 (VAR_5, "metafile_get_entry (%d, %d)->key = ", VAR_17, VAR_9);
      FUNC_1 (VAR_21->data, VAR_21->key_len);
    }
    return FUNC_4 (VAR_17, VAR_9);
  }
}
