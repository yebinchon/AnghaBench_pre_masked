
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct merge_remote_desc {TYPE_1__* obj; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_4__ {struct object_id oid; } ;
struct commit {TYPE_2__ object; } ;
struct TYPE_3__ {struct object_id oid; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct merge_remote_desc* FUNC_2 (struct commit*) ;
 int FUNC_3 (struct object_id*) ;
 int FUNC_4 (struct strbuf*,char*,int ) ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct commit_list *VAR_4)
{
 struct commit_list *VAR_5;
 struct strbuf VAR_6 = VAR_1;

 for (VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next) {
  struct object_id *VAR_7;
  struct commit *VAR_8 = VAR_5->item;
  struct merge_remote_desc *VAR_9;

  VAR_9 = FUNC_2(VAR_8);
  if (VAR_9 && VAR_9->obj) {
   VAR_7 = &VAR_9->obj->oid;
  } else {
   VAR_7 = &VAR_8->object.oid;
  }
  FUNC_4(&VAR_6, "%s\n", FUNC_3(VAR_7));
 }
 FUNC_8(FUNC_0(VAR_3), VAR_6.buf, VAR_6.len);

 FUNC_7(&VAR_6);
 if (VAR_2 == VAR_0)
  FUNC_5(&VAR_6, "no-ff");
 FUNC_8(FUNC_1(VAR_3), VAR_6.buf, VAR_6.len);
 FUNC_6(&VAR_6);
}
