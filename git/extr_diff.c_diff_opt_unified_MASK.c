
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {int output_format; int context; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_5(const struct option *VAR_0,
       const char *VAR_1, int VAR_2)
{
 struct diff_options *VAR_3 = VAR_0->value;
 char *VAR_4;

 FUNC_0(VAR_2);

 if (VAR_1) {
  VAR_3->context = FUNC_4(VAR_1, &VAR_4, 10);
  if (*VAR_4)
   return FUNC_3(FUNC_1("%s expects a numerical value"), "--unified");
 }
 FUNC_2(&VAR_3->output_format);

 return 0;
}
