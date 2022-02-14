
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_log_data {char* path; struct line_log_data* next; int ranges; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,long,long) ;
 int FUNC_2 (int *,long,long) ;
 struct line_log_data* FUNC_3 (struct line_log_data*,char*,struct line_log_data**) ;
 struct line_log_data* FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct line_log_data **VAR_0,
     char *VAR_1,
     long VAR_2, long VAR_3)
{
 struct line_log_data *VAR_4;
 struct line_log_data *VAR_5 = FUNC_3(*VAR_0, VAR_1, &VAR_4);

 if (VAR_5) {
  FUNC_2(&VAR_5->ranges, VAR_2, VAR_3);
  FUNC_0(VAR_1);
  return;
 }

 VAR_5 = FUNC_4(1, sizeof(struct line_log_data));
 VAR_5->path = VAR_1;
 FUNC_1(&VAR_5->ranges, VAR_2, VAR_3);
 if (VAR_4) {
  VAR_5->next = VAR_4->next;
  VAR_4->next = VAR_5;
 } else {
  VAR_5->next = *VAR_0;
  *VAR_0 = VAR_5;
 }
}
