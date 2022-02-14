
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_log_data {int ranges; struct line_log_data* next; int path; } ;


 int FUNC_0 (struct line_log_data*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int ,int ) ;
 struct line_log_data* FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct line_log_data *FUNC_6(struct line_log_data *VAR_0,
       struct line_log_data *VAR_1)
{
 struct line_log_data *VAR_2 = ((void*)0), **VAR_3 = &VAR_2;

 while (VAR_0 || VAR_1) {
  struct line_log_data *VAR_4;
  struct line_log_data *VAR_5 = ((void*)0);
  struct line_log_data *VAR_6;
  int VAR_7;
  if (!VAR_0)
   VAR_7 = 1;
  else if (!VAR_1)
   VAR_7 = -1;
  else
   VAR_7 = FUNC_3(VAR_0->path, VAR_1->path);
  if (VAR_7 < 0) {
   VAR_4 = VAR_0;
   VAR_0 = VAR_0->next;
  } else if (VAR_7 == 0) {
   VAR_4 = VAR_0;
   VAR_0 = VAR_0->next;
   VAR_5 = VAR_1;
   VAR_1 = VAR_1->next;
  } else {
   VAR_4 = VAR_1;
   VAR_1 = VAR_1->next;
  }
  VAR_6 = FUNC_4(sizeof(struct line_log_data));
  FUNC_0(VAR_6);
  VAR_6->path = FUNC_5(VAR_4->path);
  *VAR_3 = VAR_6;
  VAR_3 = &VAR_6->next;
  if (VAR_5)
   FUNC_2(&VAR_6->ranges, &VAR_4->ranges, &VAR_5->ranges);
  else
   FUNC_1(&VAR_6->ranges, &VAR_4->ranges);
 }

 return VAR_2;
}
