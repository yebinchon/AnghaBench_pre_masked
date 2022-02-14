
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metafile {scalar_t__ data; TYPE_1__* header; scalar_t__ local_offsets; scalar_t__ aio; } ;
struct TYPE_2__ {scalar_t__ metafile_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 struct metafile* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

int FUNC_4 (int VAR_6) {
  FUNC_0 (0 <= VAR_6 && VAR_6 < VAR_0);
  if (VAR_5 >= 3) {
    FUNC_2 (VAR_4, "unloading metafile %d\n", VAR_6);
  }
  struct metafile *VAR_7 = &VAR_2[VAR_6];
  if (VAR_7->data == 0) {
    return -1;
  }
  if (VAR_7->aio) {
    return -1;
  }
  FUNC_3 (VAR_7->local_offsets, VAR_7->header->metafile_size);
  VAR_7->data = 0;
  VAR_7->local_offsets = 0;
  VAR_3--;
  VAR_1 -= VAR_7->header->metafile_size;
  FUNC_1 (VAR_6);
  return 0;
}
