
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct traversal_context {int show_data; int (* show_object ) (struct object*,int *,int ) ;int filter; TYPE_1__* revs; } ;
struct strbuf {size_t len; int * buf; } ;
struct object {int flags; int oid; } ;
struct blob {struct object object; } ;
typedef enum list_objects_filter_result { ____Placeholder_list_objects_filter_result } list_objects_filter_result ;
struct TYPE_2__ {int repo; scalar_t__ exclude_promisor_objects; int blob_objects; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct object*,int *,int *,int ) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*,size_t) ;
 int FUNC_6 (struct object*,int *,int ) ;

__attribute__((used)) static void FUNC_7(struct traversal_context *VAR_5,
    struct blob *VAR_6,
    struct strbuf *VAR_7,
    const char *VAR_8)
{
 struct object *VAR_9 = &VAR_6->object;
 size_t VAR_10;
 enum list_objects_filter_result VAR_11;

 if (!VAR_5->revs->blob_objects)
  return;
 if (!VAR_9)
  FUNC_0("bad blob object");
 if (VAR_9->flags & (VAR_4 | VAR_3))
  return;
 if (VAR_5->revs->exclude_promisor_objects &&
     !FUNC_1(&VAR_9->oid) &&
     FUNC_2(&VAR_9->oid))
  return;

 VAR_10 = VAR_7->len;
 FUNC_4(VAR_7, VAR_8);
 VAR_11 = FUNC_3(VAR_5->revs->repo,
            VAR_2, VAR_9,
            VAR_7->buf, &VAR_7->buf[VAR_10],
            VAR_5->filter);
 if (VAR_11 & VAR_1)
  VAR_9->flags |= VAR_3;
 if (VAR_11 & VAR_0)
  VAR_5->show_object(VAR_9, VAR_7->buf, VAR_5->show_data);
 FUNC_5(VAR_7, VAR_10);
}
