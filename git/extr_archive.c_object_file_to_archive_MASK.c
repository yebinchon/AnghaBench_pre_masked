
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;
struct archiver_args {TYPE_1__* repo; int baselen; struct commit* commit; scalar_t__ convert; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {int index; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char const*,int ,int ,struct strbuf*) ;
 int FUNC_2 (struct commit const*,int ,int ,struct strbuf*) ;
 void* FUNC_3 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_4 (struct strbuf*,void*,unsigned long,unsigned long) ;
 void* FUNC_5 (struct strbuf*,size_t*) ;

void *FUNC_6(const struct archiver_args *VAR_1,
        const char *VAR_2, const struct object_id *VAR_3,
        unsigned int VAR_4, enum object_type *VAR_5,
        unsigned long *VAR_6)
{
 void *VAR_7;
 const struct commit *VAR_8 = VAR_1->convert ? VAR_1->commit : ((void*)0);

 VAR_2 += VAR_1->baselen;
 VAR_7 = FUNC_3(VAR_3, VAR_5, VAR_6);
 if (VAR_7 && FUNC_0(VAR_4)) {
  struct strbuf VAR_9 = VAR_0;
  size_t VAR_10 = 0;

  FUNC_4(&VAR_9, VAR_7, *VAR_6, *VAR_6 + 1);
  FUNC_1(VAR_1->repo->index, VAR_2, VAR_9.buf, VAR_9.len, &VAR_9);
  if (VAR_8)
   FUNC_2(VAR_8, VAR_9.buf, VAR_9.len, &VAR_9);
  VAR_7 = FUNC_5(&VAR_9, &VAR_10);
  *VAR_6 = VAR_10;
 }

 return VAR_7;
}
