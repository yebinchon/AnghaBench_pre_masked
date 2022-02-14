
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct receive_hook_feed_state {int skip_broken; int buf; struct string_list const* push_options; struct command* cmd; } ;
struct command {int dummy; } ;


 scalar_t__ FUNC_0 (struct receive_hook_feed_state*,int *,int *) ;
 int FUNC_1 (char const*,scalar_t__ (*) (struct receive_hook_feed_state*,int *,int *),struct receive_hook_feed_state*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct command *VAR_0,
       const char *VAR_1,
       int VAR_2,
       const struct string_list *VAR_3)
{
 struct receive_hook_feed_state VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4.buf, 0);
 VAR_4.cmd = VAR_0;
 VAR_4.skip_broken = VAR_2;
 if (FUNC_0(&VAR_4, ((void*)0), ((void*)0)))
  return 0;
 VAR_4.cmd = VAR_0;
 VAR_4.push_options = VAR_3;
 VAR_5 = FUNC_1(VAR_1, FUNC_0, &VAR_4);
 FUNC_3(&VAR_4.buf);
 return VAR_5;
}
