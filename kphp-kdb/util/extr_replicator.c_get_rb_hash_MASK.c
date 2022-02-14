
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_binlog {int binlog_tag_len; char* binlog_tag; scalar_t__ flags; scalar_t__ first; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 struct remote_binlog** VAR_1 ;
 void* FUNC_2 (int) ;

struct remote_binlog *FUNC_3 (char *VAR_2, int VAR_3, int VAR_4) {
  int VAR_5 = VAR_3, VAR_6 = VAR_3, VAR_7;
  char *VAR_8;
  for (VAR_8 = VAR_2, VAR_7 = VAR_3; VAR_7--; VAR_8++) {
    if (*VAR_8 >= 'A' && *VAR_8 <= 'Z') {
      *VAR_8 += 32;
    }
    VAR_5 = (VAR_5 * 239 + *VAR_8) % VAR_0;
    VAR_6 = (VAR_6 * 17 + *VAR_8) % (VAR_0 - 1);
  }
  ++VAR_6;
  while (VAR_1[VAR_5]) {
    if (VAR_3 == VAR_1[VAR_5]->binlog_tag_len &&
        !FUNC_0 (VAR_1[VAR_5]->binlog_tag, VAR_2, VAR_3)) {
      return VAR_1[VAR_5];
    }
    VAR_5 += VAR_6;
    if (VAR_5 >= VAR_0) {
      VAR_5 -= VAR_0;
    }
  }
  if (VAR_4) {
    char *VAR_9 = FUNC_2 (VAR_3 + 1);
    FUNC_1 (VAR_9, VAR_2, VAR_3);
    VAR_9[VAR_3] = 0;
    VAR_1[VAR_5] = FUNC_2 (sizeof (struct remote_binlog));
    VAR_1[VAR_5]->binlog_tag = VAR_9;
    VAR_1[VAR_5]->binlog_tag_len = VAR_3;
    VAR_1[VAR_5]->first = 0;
    VAR_1[VAR_5]->flags = 0;
    return VAR_1[VAR_5];
  }
  return 0;
}
