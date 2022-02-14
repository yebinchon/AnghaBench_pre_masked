
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output_format; } ;
struct rev_info {TYPE_1__ diffopt; } ;
struct line_log_data {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rev_info*,struct line_log_data*) ;
 struct line_log_data* FUNC_1 (struct rev_info*,struct commit*) ;
 int FUNC_2 (struct rev_info*) ;

int FUNC_3(struct rev_info *VAR_1, struct commit *VAR_2)
{

 FUNC_2(VAR_1);
 if (!(VAR_1->diffopt.output_format & VAR_0)) {
  struct line_log_data *VAR_3 = FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_1, VAR_3);
 }
 return 1;
}
