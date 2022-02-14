
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct column_options {int width; int indent; int padding; } ;
struct argv_array {int dummy; } ;
struct TYPE_4__ {int in; int git_cmd; void* out; struct argv_array args; } ;


 int FUNC_0 (struct argv_array*,char*) ;
 int FUNC_1 (struct argv_array*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_0 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;

int FUNC_8(int VAR_3, const struct column_options *VAR_4)
{
 struct argv_array *VAR_5;

 if (VAR_1 != -1)
  return -1;

 FUNC_2(&VAR_0);
 VAR_5 = &VAR_0.args;

 FUNC_0(VAR_5, "column");
 FUNC_1(VAR_5, "--raw-mode=%d", VAR_3);
 if (VAR_4 && VAR_4->width)
  FUNC_1(VAR_5, "--width=%d", VAR_4->width);
 if (VAR_4 && VAR_4->indent)
  FUNC_1(VAR_5, "--indent=%s", VAR_4->indent);
 if (VAR_4 && VAR_4->padding)
  FUNC_1(VAR_5, "--padding=%d", VAR_4->padding);

 FUNC_6(VAR_2);
 VAR_0.in = -1;
 VAR_0.out = FUNC_4(1);
 VAR_0.git_cmd = 1;

 if (FUNC_7(&VAR_0))
  return -2;

 VAR_1 = FUNC_4(1);
 FUNC_3(1);
 FUNC_5(VAR_0.in, 1);
 FUNC_3(VAR_0.in);
 return 0;
}
