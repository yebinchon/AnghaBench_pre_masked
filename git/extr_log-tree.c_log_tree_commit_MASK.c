
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int close_file; int file; } ;
struct rev_info {char* break_bar; TYPE_1__ diffopt; struct log_info* loginfo; scalar_t__ reverse_output_stage; int linear; scalar_t__ track_linear; scalar_t__ always_show_header; scalar_t__ line_level_traverse; } ;
struct log_info {int * parent; struct commit* commit; } ;
struct commit {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct rev_info*,struct commit*) ;
 int FUNC_3 (struct rev_info*,struct commit*,struct log_info*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct rev_info*) ;

int FUNC_6(struct rev_info *VAR_0, struct commit *VAR_1)
{
 struct log_info VAR_2;
 int VAR_3, VAR_4 = VAR_0->diffopt.close_file;

 VAR_2.commit = VAR_1;
 VAR_2.parent = ((void*)0);
 VAR_0->loginfo = &VAR_2;
 VAR_0->diffopt.close_file = 0;

 if (VAR_0->line_level_traverse)
  return FUNC_2(VAR_0, VAR_1);

 if (VAR_0->track_linear && !VAR_0->linear && !VAR_0->reverse_output_stage)
  FUNC_1(VAR_0->diffopt.file, "\n%s\n", VAR_0->break_bar);
 VAR_3 = FUNC_3(VAR_0, VAR_1, &VAR_2);
 if (!VAR_3 && VAR_0->loginfo && VAR_0->always_show_header) {
  VAR_2.parent = ((void*)0);
  FUNC_5(VAR_0);
  VAR_3 = 1;
 }
 if (VAR_0->track_linear && !VAR_0->linear && VAR_0->reverse_output_stage)
  FUNC_1(VAR_0->diffopt.file, "\n%s\n", VAR_0->break_bar);
 VAR_0->loginfo = ((void*)0);
 FUNC_4(VAR_0->diffopt.file, "stdout");
 if (VAR_4)
  FUNC_0(VAR_0->diffopt.file);
 return VAR_3;
}
