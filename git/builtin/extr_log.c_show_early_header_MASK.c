
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file; int line_termination; } ;
struct rev_info {scalar_t__ commit_format; TYPE_1__ diffopt; scalar_t__ shown_one; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rev_info *VAR_1, const char *VAR_2, int VAR_3)
{
 if (VAR_1->shown_one) {
  VAR_1->shown_one = 0;
  if (VAR_1->commit_format != VAR_0)
   FUNC_2(VAR_1->diffopt.line_termination);
 }
 FUNC_1(VAR_1->diffopt.file, FUNC_0("Final output: %d %s\n"), VAR_3, VAR_2);
}
