
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; int len; } ;
struct rerere_io {int (* getline ) (struct strbuf*,struct rerere_io*) ;} ;
typedef int git_hash_ctx ;
struct TYPE_2__ {int (* final_fn ) (unsigned char*,int *) ;int (* init_fn ) (int *) ;} ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,struct rerere_io*,int,int *) ;
 scalar_t__ FUNC_1 (int ,char,int) ;
 int FUNC_2 (int ,int ,struct rerere_io*) ;
 int FUNC_3 (int ,struct rerere_io*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct strbuf*,struct rerere_io*) ;
 int FUNC_8 (unsigned char*,int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_9(unsigned char *VAR_2, struct rerere_io *VAR_3, int VAR_4)
{
 git_hash_ctx VAR_5;
 struct strbuf VAR_6 = VAR_0, VAR_7 = VAR_0;
 int VAR_8 = 0;
 if (VAR_2)
  VAR_1->init_fn(&VAR_5);

 while (!VAR_3->getline(&VAR_6, VAR_3)) {
  if (FUNC_1(VAR_6.buf, '<', VAR_4)) {
   VAR_8 = FUNC_0(&VAR_7, VAR_3, VAR_4,
       VAR_2 ? &VAR_5 : ((void*)0));
   if (VAR_8 < 0)
    break;
   FUNC_2(VAR_7.buf, VAR_7.len, VAR_3);
   FUNC_5(&VAR_7);
  } else
   FUNC_3(VAR_6.buf, VAR_3);
 }
 FUNC_4(&VAR_6);
 FUNC_4(&VAR_7);

 if (VAR_2)
  VAR_1->final_fn(VAR_2, &VAR_5);

 return VAR_8;
}
