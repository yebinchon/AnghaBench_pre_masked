
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; char* buf; } ;
struct object_id {int dummy; } ;
struct object {int oid; } ;
struct merge_parents {int nr; TYPE_2__* item; } ;
struct commit_list {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct TYPE_4__ {int used; int commit; } ;


 int VAR_0 ;
 int FUNC_0 (struct merge_parents*,int *,int *) ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 struct commit* FUNC_2 (int ,struct object_id*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 struct object* FUNC_4 (int ,struct object_id*) ;
 scalar_t__ FUNC_5 (char*,struct object_id*,char const**) ;
 scalar_t__ FUNC_6 (int *,int ,struct object*,int ) ;
 struct commit* FUNC_7 (struct commit_list**) ;
 int FUNC_8 (struct commit_list**) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_11(struct merge_parents *VAR_2,
          struct strbuf *VAR_3, struct object_id *VAR_4)
{
 struct commit_list *VAR_5;
 struct commit *VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9;

 VAR_5 = ((void*)0);
 while (VAR_7 < VAR_3->len) {
  int VAR_10;
  char *VAR_11 = VAR_3->buf + VAR_7;
  char *VAR_12 = FUNC_9(VAR_11, '\n');
  const char *VAR_13;
  struct object_id VAR_14;
  struct commit *VAR_15;
  struct object *VAR_16;

  VAR_10 = VAR_12 ? VAR_12 - VAR_11 : FUNC_10(VAR_11);
  VAR_7 += VAR_10 + !!VAR_12;

  if (FUNC_5(VAR_11, &VAR_14, &VAR_13) ||
      VAR_13[0] != '\t' ||
      VAR_13[1] != '\t')
   continue;





  VAR_16 = FUNC_4(VAR_1, &VAR_14);
  VAR_15 = (struct commit *)FUNC_6(((void*)0), 0, VAR_16, VAR_0);
  if (!VAR_15)
   continue;
  FUNC_1(VAR_15, &VAR_5);
  FUNC_0(VAR_2, &VAR_16->oid, &VAR_15->object.oid);
 }
 VAR_6 = FUNC_2(VAR_1, VAR_4);
 if (VAR_6)
  FUNC_1(VAR_6, &VAR_5);
 FUNC_8(&VAR_5);

 while (VAR_5) {
  struct commit *VAR_17 = FUNC_7(&VAR_5);
  for (VAR_8 = 0; VAR_8 < VAR_2->nr; VAR_8++)
   if (FUNC_3(&VAR_2->item[VAR_8].commit, &VAR_17->object.oid))
    VAR_2->item[VAR_8].used = 1;
 }

 for (VAR_8 = VAR_9 = 0; VAR_8 < VAR_2->nr; VAR_8++) {
  if (VAR_2->item[VAR_8].used) {
   if (VAR_8 != VAR_9)
    VAR_2->item[VAR_9] = VAR_2->item[VAR_8];
   VAR_9++;
  }
 }
 VAR_2->nr = VAR_9;
}
