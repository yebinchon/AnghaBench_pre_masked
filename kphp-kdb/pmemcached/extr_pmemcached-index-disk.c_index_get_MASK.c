
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metafile {scalar_t__ data; TYPE_1__* header; scalar_t__ aio; } ;
struct index_entry {int key_len; int data; } ;
struct TYPE_2__ {int nrecords; int key_len; int key; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 struct index_entry VAR_0 ;
 int FUNC_2 (int) ;
 struct index_entry* FUNC_3 (int,int) ;
 int VAR_1 ;
 struct metafile* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char const*,int,int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;

struct index_entry* FUNC_6 (const char *VAR_7, int VAR_8) {
  int VAR_9 = -1;
  int VAR_10 = VAR_1;
  while (VAR_10-VAR_9 > 1) {
    int VAR_11 = (VAR_10+VAR_9)>>1;
    if (FUNC_4(VAR_7, VAR_8, VAR_2[VAR_11].header->key, VAR_2[VAR_11].header->key_len) < 0) {
      VAR_10 = VAR_11;
    } else {
      VAR_9 = VAR_11;
    }
  }
  if (VAR_9 < 0) {
    if (VAR_6>=4) { FUNC_1 (VAR_5, "not found[1]\n"); }
    return &VAR_0;
  }
  if (VAR_6>=4) {
    FUNC_1 (VAR_5, "(l,r) = (%d,%d)\n", VAR_9, VAR_10);
  }
  if (VAR_2[VAR_9].data == 0 || VAR_2[VAR_9].aio) {
    FUNC_2 (VAR_9);
   if (VAR_2[VAR_9].data == 0 || VAR_2[VAR_9].aio) {
      VAR_3 ++;
     return 0;
   }
  }
  VAR_4 ++;
  FUNC_5 (VAR_9);
  int VAR_12 = VAR_9;
  struct metafile* VAR_13 = &VAR_2[VAR_9];

  VAR_9 = -1;
  VAR_10 = VAR_13->header->nrecords;
  while (VAR_10-VAR_9 > 1) {
    int VAR_14 = (VAR_10+VAR_9)>>1;
    if (FUNC_4(VAR_7, VAR_8, FUNC_3 (VAR_12, VAR_14)->data, FUNC_3 (VAR_12, VAR_14)->key_len) < 0) {
      VAR_10 = VAR_14;
    } else {
      VAR_9 = VAR_14;
    }
  }
  if (VAR_6>=4) {
    FUNC_1 (VAR_5, "(l,r) = (%d,%d)\n", VAR_9, VAR_10);
  }

  if (VAR_9 < 0) {
    if (VAR_6>=4) { FUNC_1 (VAR_5, "not found[2]\n"); }
    return &VAR_0;
  }
  struct index_entry *VAR_15 = FUNC_3 (VAR_12, VAR_9);
  if (VAR_6 >= 4) {
    FUNC_1 (VAR_5, "metafile_get_entry (%d, %d)->key = ", VAR_12, VAR_9);
    FUNC_0 (VAR_15->data, VAR_15->key_len);
  }
  if (FUNC_4(VAR_7, VAR_8, VAR_15->data, VAR_15->key_len) == 0) {
    if (VAR_6>=4) {
      FUNC_1 (VAR_5, "Found. l=%d\n", VAR_9);
    }
    return FUNC_3 (VAR_12, VAR_9);
  }

  if (VAR_6>=4) { FUNC_1 (VAR_5, "not found[3]\n"); }
  return &VAR_0;
}
