
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct newsr_gather_extra {int mask; int st_time; int end_time; int id; int t; int timestamp; int request_tag; } ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int,int) ;

int FUNC_1 (char *VAR_0, char *VAR_1, int VAR_2, void *VAR_3) {
  struct newsr_gather_extra *VAR_4 = VAR_3;
  int VAR_5 = 0;
  VAR_5 = FUNC_0 (VAR_0, "%%raw_recommend_updates%d_%d,%d_%d_%d_%d:%d", VAR_4->mask, VAR_4->st_time, VAR_4->end_time, VAR_4->id, VAR_4->t, VAR_4->timestamp, VAR_4->request_tag);
  return VAR_5;
}
