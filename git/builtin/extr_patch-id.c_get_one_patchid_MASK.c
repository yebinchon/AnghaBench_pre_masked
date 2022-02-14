
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct object_id {int dummy; } ;
typedef int git_hash_ctx ;
struct TYPE_2__ {int (* update_fn ) (int *,char*,int) ;int (* init_fn ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct object_id*,int *) ;
 int FUNC_1 (char const*,struct object_id*) ;
 int FUNC_2 (char) ;
 int FUNC_3 (struct object_id*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int*,int*) ;
 int FUNC_6 (char*,char*,char const**) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (struct strbuf*,int ,char) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_12(struct object_id *VAR_3, struct object_id *VAR_4,
      struct strbuf *VAR_5, int VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = -1, VAR_10 = -1;
 git_hash_ctx VAR_11;

 VAR_2->init_fn(&VAR_11);
 FUNC_3(VAR_4);

 while (FUNC_8(VAR_5, VAR_1, '\n') != VAR_0) {
  char *VAR_12 = VAR_5->buf;
  const char *VAR_13 = VAR_12;
  int VAR_14;

  if (!FUNC_6(VAR_12, "diff-tree ", &VAR_13) &&
      !FUNC_6(VAR_12, "commit ", &VAR_13) &&
      !FUNC_6(VAR_12, "From ", &VAR_13) &&
      FUNC_7(VAR_12, "\\ ") && 12 < FUNC_9(VAR_12))
   continue;

  if (!FUNC_1(VAR_13, VAR_3)) {
   VAR_8 = 1;
   break;
  }


  if (!VAR_7 && !FUNC_7(VAR_12, "diff "))
   continue;


  if (VAR_9 == -1) {
   if (FUNC_7(VAR_12, "index "))
    continue;
   else if (FUNC_7(VAR_12, "--- "))
    VAR_9 = VAR_10 = 1;
   else if (!FUNC_2(VAR_12[0]))
    break;
  }


  if (VAR_9 == 0 && VAR_10 == 0) {
   if (FUNC_7(VAR_12, "@@ -")) {

    FUNC_5(VAR_12, &VAR_9, &VAR_10);
    continue;
   }


   if (!FUNC_7(VAR_12, "diff "))
    break;


   if (VAR_6)
    FUNC_0(VAR_4, &VAR_11);
   VAR_9 = VAR_10 = -1;
  }


  if (VAR_12[0] == '-' || VAR_12[0] == ' ')
   VAR_9--;
  if (VAR_12[0] == '+' || VAR_12[0] == ' ')
   VAR_10--;


  VAR_14 = FUNC_4(VAR_12);
  VAR_7 += VAR_14;
  VAR_2->update_fn(&VAR_11, VAR_12, VAR_14);
 }

 if (!VAR_8)
  FUNC_3(VAR_3);

 FUNC_0(VAR_4, &VAR_11);

 return VAR_7;
}
