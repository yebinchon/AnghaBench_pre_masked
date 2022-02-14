
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree {int dummy; } ;
struct traversal_context {TYPE_1__* revs; int show_data; int (* show_object ) (struct object*,char const*,int ) ;} ;
struct strbuf {scalar_t__ len; } ;
struct object_array_entry {char* name; char* path; struct object* item; } ;
struct object {int flags; scalar_t__ type; int oid; } ;
struct blob {int dummy; } ;
struct TYPE_4__ {int nr; struct object_array_entry* objects; } ;
struct TYPE_3__ {TYPE_2__ pending; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct traversal_context*,struct blob*,struct strbuf*,char const*) ;
 int FUNC_5 (struct traversal_context*,struct tree*,struct strbuf*,char const*) ;
 int FUNC_6 (struct object*,char const*,int ) ;

__attribute__((used)) static void FUNC_7(struct traversal_context *VAR_5,
         struct strbuf *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_6->len == 0);

 for (VAR_7 = 0; VAR_7 < VAR_5->revs->pending.nr; VAR_7++) {
  struct object_array_entry *VAR_8 = VAR_5->revs->pending.objects + VAR_7;
  struct object *VAR_9 = VAR_8->item;
  const char *VAR_10 = VAR_8->name;
  const char *VAR_11 = VAR_8->path;
  if (VAR_9->flags & (VAR_4 | VAR_3))
   continue;
  if (VAR_9->type == VAR_1) {
   VAR_9->flags |= VAR_3;
   VAR_5->show_object(VAR_9, VAR_10, VAR_5->show_data);
   continue;
  }
  if (!VAR_11)
   VAR_11 = "";
  if (VAR_9->type == VAR_2) {
   FUNC_5(VAR_5, (struct tree *)VAR_9, VAR_6, VAR_11);
   continue;
  }
  if (VAR_9->type == VAR_0) {
   FUNC_4(VAR_5, (struct blob *)VAR_9, VAR_6, VAR_11);
   continue;
  }
  FUNC_1("unknown pending object %s (%s)",
      FUNC_3(&VAR_9->oid), VAR_10);
 }
 FUNC_2(&VAR_5->revs->pending);
}
