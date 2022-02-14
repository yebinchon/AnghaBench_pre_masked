
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {int key_len; int data; } ;


 struct index_entry VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int * VAR_1 ;
 size_t* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,char const*,int,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;

struct index_entry* FUNC_3 (const char *VAR_6, int VAR_7) {
  int VAR_8 = -1;
  int VAR_9 = VAR_3;
  int VAR_10 = 1;
  int VAR_11 = 1;
  while (VAR_9-VAR_8 > 1) {
    int VAR_12 = (VAR_9+VAR_8)>>1;
    struct index_entry *VAR_13 = (struct index_entry *)&VAR_1[VAR_2[VAR_12]];
    int VAR_14 = (FUNC_2 (VAR_13->data, VAR_13->key_len, VAR_6, VAR_7, FUNC_1 (VAR_10, VAR_11) - 1));
    if (VAR_14 < 0) {
      VAR_8 = VAR_12;
      VAR_10 = -VAR_14;
    } else if (VAR_14 > 0) {
      VAR_9 = VAR_12;
      VAR_11 = VAR_14;
    } else {
      VAR_8 = VAR_12;
      break;
    }
  }
  if (VAR_5>=4) {
    FUNC_0 (VAR_4, "(l,r) = (%d,%d)\n", VAR_8, VAR_9);
    FUNC_0 (VAR_4, "index_size = %d\n", VAR_3);
  }
  VAR_8++;
  if (VAR_8 < VAR_3) {
    struct index_entry *VAR_15 = (struct index_entry *)&VAR_1[VAR_2[VAR_8]];
    return VAR_15;
  }
  return &VAR_0;
}
