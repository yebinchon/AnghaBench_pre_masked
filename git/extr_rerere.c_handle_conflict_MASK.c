
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; scalar_t__ len; } ;
struct rerere_io {int (* getline ) (struct strbuf*,struct rerere_io*) ;} ;
typedef int git_hash_ctx ;
struct TYPE_2__ {int (* update_fn ) (int *,char*,scalar_t__) ;} ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (char*,char,int) ;
 int FUNC_1 (struct strbuf*,char,int) ;
 int FUNC_2 (struct strbuf*,struct strbuf*) ;
 scalar_t__ FUNC_3 (struct strbuf*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,struct strbuf*) ;
 int FUNC_6 (struct strbuf*,struct rerere_io*) ;
 int FUNC_7 (int *,char*,scalar_t__) ;
 int FUNC_8 (int *,char*,scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_9(struct strbuf *VAR_2, struct rerere_io *VAR_3,
      int VAR_4, git_hash_ctx *VAR_5)
{
 enum {
  RR_SIDE_1 = 0, RR_SIDE_2, RR_ORIGINAL
 } VAR_6 = RR_SIDE_1;
 struct strbuf VAR_7 = VAR_0, VAR_8 = VAR_0;
 struct strbuf VAR_9 = VAR_0, VAR_10 = VAR_0;
 int VAR_11 = -1;

 while (!VAR_3->getline(&VAR_9, VAR_3)) {
  if (FUNC_0(VAR_9.buf, '<', VAR_4)) {
   if (FUNC_9(&VAR_10, VAR_3, VAR_4, ((void*)0)) < 0)
    break;
   if (VAR_6 == RR_SIDE_1)
    FUNC_2(&VAR_7, &VAR_10);
   else
    FUNC_2(&VAR_8, &VAR_10);
   FUNC_4(&VAR_10);
  } else if (FUNC_0(VAR_9.buf, '|', VAR_4)) {
   if (VAR_6 != RR_SIDE_1)
    break;
   VAR_6 = RR_ORIGINAL;
  } else if (FUNC_0(VAR_9.buf, '=', VAR_4)) {
   if (VAR_6 != RR_SIDE_1 && VAR_6 != RR_ORIGINAL)
    break;
   VAR_6 = RR_SIDE_2;
  } else if (FUNC_0(VAR_9.buf, '>', VAR_4)) {
   if (VAR_6 != RR_SIDE_2)
    break;
   if (FUNC_3(&VAR_7, &VAR_8) > 0)
    FUNC_5(&VAR_7, &VAR_8);
   VAR_11 = 1;
   FUNC_1(VAR_2, '<', VAR_4);
   FUNC_2(VAR_2, &VAR_7);
   FUNC_1(VAR_2, '=', VAR_4);
   FUNC_2(VAR_2, &VAR_8);
   FUNC_1(VAR_2, '>', VAR_4);
   if (VAR_5) {
    VAR_1->update_fn(VAR_5, VAR_7.buf ?
        VAR_7.buf : "",
        VAR_7.len + 1);
    VAR_1->update_fn(VAR_5, VAR_8.buf ?
        VAR_8.buf : "",
        VAR_8.len + 1);
   }
   break;
  } else if (VAR_6 == RR_SIDE_1)
   FUNC_2(&VAR_7, &VAR_9);
  else if (VAR_6 == RR_ORIGINAL)
   ;
  else if (VAR_6 == RR_SIDE_2)
   FUNC_2(&VAR_8, &VAR_9);
 }
 FUNC_4(&VAR_7);
 FUNC_4(&VAR_8);
 FUNC_4(&VAR_9);

 return VAR_11;
}
