
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct replay_opts {int action; } ;
struct rebase_options {scalar_t__ type; int state_dir; } ;
struct TYPE_2__ {int objects; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct replay_opts VAR_3 ;
 int VAR_4 ;
 struct strbuf VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct rebase_options*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct strbuf*,int ) ;
 int FUNC_6 (char const**,int ) ;
 int FUNC_7 (struct replay_opts*) ;
 int FUNC_8 (struct strbuf*,int ) ;
 int FUNC_9 (struct strbuf*) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_10(struct rebase_options *VAR_7)
{
 struct strbuf VAR_8 = VAR_5;
 const char *VAR_9[] = { "gc", "--auto", ((void*)0) };
 int VAR_10 = 0;

 FUNC_3(((void*)0), "REBASE_HEAD", ((void*)0), VAR_1);
 FUNC_1(VAR_7);
 FUNC_2(VAR_6->objects);




 FUNC_6(VAR_9, VAR_4);
 if (VAR_7->type == VAR_0) {
  struct replay_opts VAR_11 = VAR_3;

  VAR_11.action = VAR_2;
  VAR_10 = FUNC_7(&VAR_11);
 } else {
  FUNC_8(&VAR_8, VAR_7->state_dir);
  if (FUNC_5(&VAR_8, 0))
   VAR_10 = FUNC_4(FUNC_0("could not remove '%s'"),
        VAR_7->state_dir);
  FUNC_9(&VAR_8);
 }

 return VAR_10;
}
