
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct metafile_header {int dummy; } ;
struct TYPE_7__ {int global_offset; int local_offset; int key_len; int nrecords; int metafile_size; int crc32; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 unsigned int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (unsigned int,unsigned int,int) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5 () {
  VAR_7.global_offset = VAR_6;
  VAR_7.local_offset = sizeof (struct metafile_header) + VAR_2;
  VAR_7.key_len = VAR_2;
  VAR_7.nrecords = VAR_3;
  VAR_7.metafile_size = VAR_4 + VAR_3 * sizeof (long long);
  unsigned VAR_11 = FUNC_1 (VAR_5, VAR_3 * sizeof (long long));
  unsigned VAR_12 = FUNC_1 (VAR_0, VAR_4);
  VAR_7.crc32 = FUNC_2 (VAR_11, VAR_12, VAR_4);
  FUNC_4 (&VAR_7, sizeof (struct metafile_header));
  FUNC_4 (VAR_1, VAR_2);
  FUNC_4 (VAR_5, VAR_3 * sizeof (long long));
  FUNC_4 (VAR_0, VAR_4);
  if (VAR_9 >= 3) {
    FUNC_3 (VAR_8, "writing metafile %d\n", VAR_10);
    FUNC_3 (VAR_8, "offset = %d\n", VAR_6);
    FUNC_3 (VAR_8, "number of records = %d\n", VAR_3);
  }
  VAR_6+=sizeof (struct metafile_header) + VAR_2 + VAR_3 * sizeof (long long) + VAR_4;
  FUNC_0();
}
