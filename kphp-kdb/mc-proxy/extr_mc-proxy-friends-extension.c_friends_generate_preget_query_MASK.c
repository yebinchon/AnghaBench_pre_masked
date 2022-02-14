
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct friends_gather_extra {int query_type; int list_id; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2 (char *VAR_2, const char *VAR_3, int VAR_4, void *VAR_5, int VAR_6) {
  if (!VAR_0) return 0;
  struct friends_gather_extra* VAR_7 = VAR_5;
  if (VAR_7->query_type != 1) {
   return 0;
  }

  int VAR_8 = FUNC_1 (VAR_2, "set userlist%d 0 0 %d\r\n0000", VAR_7->list_id, VAR_0 * 4 + 4);
  FUNC_0 (VAR_2 + VAR_8, VAR_1, VAR_0 * 4);
  VAR_8 += VAR_0 * 4;
  return VAR_8;
}
