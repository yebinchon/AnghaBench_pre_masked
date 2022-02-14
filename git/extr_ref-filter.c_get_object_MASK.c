
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_array_item {int value; int refname; } ;
struct object {int dummy; } ;
struct TYPE_2__ {scalar_t__ contentp; scalar_t__ disk_sizep; int * typep; int * sizep; } ;
struct expand_data {scalar_t__ disk_size; int content; int oid; int size; int type; TYPE_1__ info; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,struct expand_data*) ;
 int FUNC_4 (int ,int,struct object*,int ) ;
 scalar_t__ FUNC_5 (int ,int *,TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 struct object* FUNC_7 (int ,int *,int ,int ,int ,int*) ;
 int FUNC_8 (struct strbuf*,int,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(struct ref_array_item *VAR_2, int VAR_3, struct object **VAR_4,
        struct expand_data *VAR_5, struct strbuf *VAR_6)
{

 int VAR_7 = 1;
 if (VAR_5->info.contentp) {

  VAR_5->info.sizep = &VAR_5->size;
  VAR_5->info.typep = &VAR_5->type;
 }
 if (FUNC_5(VAR_1, &VAR_5->oid, &VAR_5->info,
         VAR_0))
  return FUNC_8(VAR_6, -1, FUNC_1("missing object %s for %s"),
           FUNC_6(&VAR_5->oid), VAR_2->refname);
 if (VAR_5->info.disk_sizep && VAR_5->disk_size < 0)
  FUNC_0("Object size is less than zero.");

 if (VAR_5->info.contentp) {
  *VAR_4 = FUNC_7(VAR_1, &VAR_5->oid, VAR_5->type, VAR_5->size, VAR_5->content, &VAR_7);
  if (!VAR_4) {
   if (!VAR_7)
    FUNC_2(VAR_5->content);
   return FUNC_8(VAR_6, -1, FUNC_1("parse_object_buffer failed on %s for %s"),
            FUNC_6(&VAR_5->oid), VAR_2->refname);
  }
  FUNC_4(VAR_2->value, VAR_3, *VAR_4, VAR_5->content);
 }

 FUNC_3(VAR_2->value, VAR_3, VAR_5);
 if (!VAR_7)
  FUNC_2(VAR_5->content);
 return 0;
}
