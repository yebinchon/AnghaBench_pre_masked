
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_opts {scalar_t__ mainline; } ;
struct option {int long_name; struct replay_opts* value; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_0,
     const char *VAR_1, int VAR_2)
{
 struct replay_opts *VAR_3 = VAR_0->value;
 char *VAR_4;

 if (VAR_2) {
  VAR_3->mainline = 0;
  return 0;
 }

 VAR_3->mainline = FUNC_2(VAR_1, &VAR_4, 10);
 if (*VAR_4 || VAR_3->mainline <= 0)
  return FUNC_1(FUNC_0("option `%s' expects a number greater than zero"),
        VAR_0->long_name);

 return 0;
}
