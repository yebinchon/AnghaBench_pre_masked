
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct repository {int dummy; } ;
struct replay_opts {int dummy; } ;
struct object_id {int dummy; } ;


 unsigned int VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct repository*) ;
 int FUNC_3 (struct repository*) ;
 int FUNC_4 (struct replay_opts*) ;
 int FUNC_5 (struct repository*,int *,struct object_id*,int ) ;
 int FUNC_6 (struct repository*,char const*,struct replay_opts*,unsigned int) ;
 scalar_t__ FUNC_7 (struct strbuf*,char const*,int) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct repository*,struct strbuf*,char const*,struct replay_opts*,unsigned int,struct object_id*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct repository *VAR_4,
       const char *VAR_5, const char *VAR_6,
       struct replay_opts *VAR_7, unsigned int VAR_8)
{
 int VAR_9 = 1;

 if (!(VAR_8 & VAR_0) && !(VAR_8 & VAR_3)) {
  struct object_id VAR_10;
  struct strbuf VAR_11 = VAR_1;

  if (VAR_5 && FUNC_7(&VAR_11, VAR_5, 2048) < 0)
   return FUNC_1(FUNC_0("unable to read commit message "
          "from '%s'"),
        VAR_5);

  VAR_9 = FUNC_9(VAR_4, VAR_5 ? &VAR_11 : ((void*)0),
        VAR_6, VAR_7, VAR_8, &VAR_10);
  FUNC_8(&VAR_11);
  if (!VAR_9) {
   FUNC_10(FUNC_2(VAR_4));
   FUNC_10(FUNC_3(VAR_4));
   if (!FUNC_4(VAR_7))
    FUNC_5(VAR_4, ((void*)0), &VAR_10,
      VAR_2);
   return VAR_9;
  }
 }
 if (VAR_9 == 1)
  return FUNC_6(VAR_4, VAR_5, VAR_7, VAR_8);

 return VAR_9;
}
