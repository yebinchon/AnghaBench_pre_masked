
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_tag {scalar_t__ type; int tag; } ;
struct lev_start {int extra_bytes; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int) ;

int FUNC_1 (unsigned char *VAR_2, int VAR_3, unsigned char VAR_4[16]) {
  struct lev_start *VAR_5 = (struct lev_start *) VAR_2;
  if (VAR_3 < 24 || VAR_5->extra_bytes < 0 || VAR_5->extra_bytes > 4096) { return -2; }
  if (VAR_5->type != VAR_0) {
    return -1;
  }
  int VAR_6 = 24 + ((VAR_5->extra_bytes + 3) & -4);
  if (VAR_3 < VAR_6) { return -2; }
  VAR_2 += VAR_6;
  VAR_3 -= VAR_6;
  struct lev_tag *VAR_7 = (struct lev_tag *) VAR_2;
  if (VAR_7->type != VAR_1) {
    return -1;
  }
  if (VAR_3 < 20) {
    return -2;
  }
  FUNC_0 (VAR_4, VAR_7->tag, 16);
  return 0;
}
