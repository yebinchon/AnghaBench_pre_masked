
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tag {scalar_t__ tag; } ;
struct strbuf {int buf; } ;
struct TYPE_2__ {int type; } ;
struct pretty_print_context {TYPE_1__ date_mode; int member_0; } ;
struct object_id {int dummy; } ;
struct disambiguate_state {int repo; int cb_data; int (* fn ) (int ,struct object_id const*,int ) ;} ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int FUNC_0 (char*,int ,char*,int ) ;
 int FUNC_1 (struct commit*,char*,struct strbuf*,struct pretty_print_context*) ;
 struct commit* FUNC_2 (int ,struct object_id const*) ;
 struct tag* FUNC_3 (int ,struct object_id const*) ;
 int FUNC_4 (int ,struct object_id const*,int *) ;
 int FUNC_5 (struct tag*) ;
 int FUNC_6 (int ,struct object_id const*,int ) ;
 int FUNC_7 (struct strbuf*,char*,scalar_t__) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (int ,struct object_id const*,int ) ;
 char* FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(const struct object_id *VAR_5, void *VAR_6)
{
 const struct disambiguate_state *VAR_7 = VAR_6;
 struct strbuf VAR_8 = VAR_4;
 int VAR_9;

 if (VAR_7->fn && !VAR_7->fn(VAR_7->repo, VAR_5, VAR_7->cb_data))
  return 0;

 VAR_9 = FUNC_4(VAR_7->repo, VAR_5, ((void*)0));
 if (VAR_9 == VAR_2) {
  struct commit *VAR_10 = FUNC_2(VAR_7->repo, VAR_5);
  if (VAR_10) {
   struct pretty_print_context VAR_11 = {0};
   VAR_11.date_mode.type = VAR_0;
   FUNC_1(VAR_10, " %ad - %s", &VAR_8, &VAR_11);
  }
 } else if (VAR_9 == VAR_3) {
  struct tag *VAR_12 = FUNC_3(VAR_7->repo, VAR_5);
  if (!FUNC_5(VAR_12) && VAR_12->tag)
   FUNC_7(&VAR_8, " %s", VAR_12->tag);
 }

 FUNC_0("  %s %s%s",
        FUNC_6(VAR_7->repo, VAR_5, VAR_1),
        FUNC_10(VAR_9) ? FUNC_10(VAR_9) : "unknown type",
        VAR_8.buf);

 FUNC_8(&VAR_8);
 return 0;
}
