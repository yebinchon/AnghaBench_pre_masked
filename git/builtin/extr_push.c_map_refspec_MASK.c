
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_4__ {scalar_t__ nr; } ;
struct remote {TYPE_2__ push; } ;
struct refspec_item {scalar_t__ dst; scalar_t__ src; scalar_t__ force; } ;
struct ref {scalar_t__ name; } ;
struct branch {int merge_nr; TYPE_1__** merge; } ;
struct TYPE_3__ {scalar_t__ src; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 struct branch* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,struct ref*,struct ref**) ;
 int FUNC_2 (struct refspec_item*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*,struct refspec_item*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (struct strbuf*,char*,char const*,scalar_t__,...) ;
 char const* FUNC_6 (struct strbuf*,int *) ;

__attribute__((used)) static const char *FUNC_7(const char *VAR_3,
          struct remote *VAR_4, struct ref *VAR_5)
{
 struct ref *VAR_6 = ((void*)0);


 if (FUNC_1(VAR_3, VAR_5, &VAR_6) != 1)
  return VAR_3;

 if (VAR_4->push.nr) {
  struct refspec_item VAR_7;
  FUNC_2(&VAR_7, 0, sizeof(struct refspec_item));
  VAR_7.src = VAR_6->name;
  if (!FUNC_3(&VAR_4->push, &VAR_7) && VAR_7.dst) {
   struct strbuf VAR_8 = VAR_1;
   FUNC_5(&VAR_8, "%s%s:%s",
        VAR_7.force ? "+" : "",
        VAR_7.src, VAR_7.dst);
   return FUNC_6(&VAR_8, ((void*)0));
  }
 }

 if (VAR_2 == VAR_0 &&
     FUNC_4(VAR_6->name, "refs/heads/")) {
  struct branch *VAR_9 = FUNC_0(VAR_6->name + 11);
  if (VAR_9->merge_nr == 1 && VAR_9->merge[0]->src) {
   struct strbuf VAR_10 = VAR_1;
   FUNC_5(&VAR_10, "%s:%s",
        VAR_3, VAR_9->merge[0]->src);
   return FUNC_6(&VAR_10, ((void*)0));
  }
 }

 return VAR_3;
}
