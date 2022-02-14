
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_options {char* branch1; char* branch2; } ;
struct diff_filespec {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct merge_options*,char const*,int *,struct diff_filespec const*,struct diff_filespec const*,char const*,char const*,int ,int ) ;
 scalar_t__ FUNC_2 (struct diff_filespec const*) ;

__attribute__((used)) static int FUNC_3(struct merge_options *VAR_0,
    const char *VAR_1,
    const struct diff_filespec *VAR_2,
    const struct diff_filespec *VAR_3,
    const struct diff_filespec *VAR_4)
{
 const char *VAR_5, *VAR_6;
 const struct diff_filespec *VAR_7;

 if (FUNC_2(VAR_3)) {
  VAR_5 = VAR_0->branch1;
  VAR_6 = VAR_0->branch2;
  VAR_7 = VAR_3;
 } else {
  VAR_5 = VAR_0->branch2;
  VAR_6 = VAR_0->branch1;
  VAR_7 = VAR_4;
 }

 return FUNC_1(VAR_0,
        VAR_1, ((void*)0),
        VAR_2, VAR_7,
        VAR_5, VAR_6,
        FUNC_0("modify"), FUNC_0("modified"));
}
