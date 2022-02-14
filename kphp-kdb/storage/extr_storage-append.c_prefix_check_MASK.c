
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct lev_crc32 {scalar_t__ type; int crc32; } ;
struct TYPE_7__ {int size; int filename; } ;
typedef TYPE_1__ file_t ;
typedef int C1 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lev_crc32*,int,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct lev_crc32*,struct lev_crc32*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct lev_crc32*,int,long long) ;
 int FUNC_5 (int,char*,int,int ,int ) ;

int FUNC_6 (file_t *VAR_4, file_t *VAR_5) {
  if (VAR_4->size < VAR_5->size) {
    FUNC_2 ("%s is smaller than %s\n", VAR_4->filename, VAR_5->filename);
    return -2;
  }
  if (VAR_4->size < 20 || VAR_5->size < 20) {
    return -1;
  }

  int VAR_6 = FUNC_1 (VAR_4, VAR_5);
  if (VAR_6 < 0) {
    return VAR_6;
  }

  if (VAR_5->size == VAR_1) {
    VAR_3 = 0;
    return 0;
  }

  struct lev_crc32 VAR_7, VAR_8;
  int VAR_9 = sizeof (VAR_7);
  long long VAR_10 = VAR_5->size - VAR_9;
  if (FUNC_4 (VAR_4, &VAR_7, VAR_9, VAR_10) < 0) {
    return -3;
  }
  if (FUNC_4 (VAR_5, &VAR_8, VAR_9, VAR_10) < 0) {
    return -4;
  }
  VAR_2 = ~VAR_7;
  if (VAR_7 != VAR_0) {
    FUNC_2 ("didn't find LEV_CRC32 record in %s at offset %lld\n", VAR_4->filename, VAR_10);
    return -5;
  }

  if (FUNC_3 (&VAR_7, &VAR_8, VAR_9)) {
    FUNC_2 ("last lev_crc32 record don't matched.\n");
    return -6;
  }
  FUNC_5 (3, "Last %d bytes are equal (%s, %s).\n", VAR_9, VAR_4->filename, VAR_5->filename);
  VAR_2 = FUNC_0 (&VAR_7, VAR_9, VAR_2);
  return 0;
}
