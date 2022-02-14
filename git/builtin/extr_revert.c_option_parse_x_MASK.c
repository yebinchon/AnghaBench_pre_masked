
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_opts {scalar_t__ xopts_nr; int * xopts; int xopts_alloc; } ;
struct option {struct replay_opts** value; } ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_0,
     const char *VAR_1, int VAR_2)
{
 struct replay_opts **VAR_3 = VAR_0->value;
 struct replay_opts *VAR_4 = *VAR_3;

 if (VAR_2)
  return 0;

 FUNC_0(VAR_4->xopts, VAR_4->xopts_nr + 1, VAR_4->xopts_alloc);
 VAR_4->xopts[VAR_4->xopts_nr++] = FUNC_1(VAR_1);
 return 0;
}
