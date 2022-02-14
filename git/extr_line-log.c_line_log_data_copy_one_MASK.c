
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_log_data {int path; int ranges; } ;


 int FUNC_0 (struct line_log_data*) ;
 int FUNC_1 (struct line_log_data*) ;
 int FUNC_2 (int *,int *) ;
 struct line_log_data* FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct line_log_data *FUNC_5(struct line_log_data *VAR_0)
{
 struct line_log_data *VAR_1 = FUNC_3(sizeof(*VAR_1));

 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
 FUNC_2(&VAR_1->ranges, &VAR_0->ranges);

 VAR_1->path = FUNC_4(VAR_0->path);

 return VAR_1;
}
