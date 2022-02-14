
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct object {unsigned int flags; } ;
struct commit_list {struct commit_list* next; TYPE_1__* item; } ;
struct commit_dist {int distance; TYPE_1__* commit; } ;
struct TYPE_2__ {struct object object; } ;


 int VAR_0 ;
 int FUNC_0 (struct commit_dist*,int,int ) ;
 struct strbuf VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,int ,struct object*) ;
 int VAR_3 ;
 int FUNC_2 (struct commit_dist*) ;
 int FUNC_3 (struct commit_list*) ;
 int FUNC_4 (struct strbuf*,char*,int) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct commit_list*) ;
 struct commit_dist* FUNC_8 (int,int) ;

__attribute__((used)) static struct commit_list *FUNC_9(struct commit_list *VAR_4, int VAR_5)
{
 struct commit_list *VAR_6;
 struct commit_dist *VAR_7 = FUNC_8(VAR_5, sizeof(*VAR_7));
 struct strbuf VAR_8 = VAR_1;
 int VAR_9, VAR_10;

 for (VAR_6 = VAR_4, VAR_9 = 0; VAR_6; VAR_6 = VAR_6->next) {
  int VAR_11;
  unsigned VAR_12 = VAR_6->item->object.flags;

  if (VAR_12 & VAR_2)
   continue;
  VAR_11 = FUNC_7(VAR_6);
  if (VAR_5 - VAR_11 < VAR_11)
   VAR_11 = VAR_5 - VAR_11;
  VAR_7[VAR_9].commit = VAR_6->item;
  VAR_7[VAR_9].distance = VAR_11;
  VAR_9++;
 }
 FUNC_0(VAR_7, VAR_9, VAR_3);
 for (VAR_6 = VAR_4, VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  struct object *VAR_13 = &(VAR_7[VAR_10].commit->object);

  FUNC_6(&VAR_8);
  FUNC_4(&VAR_8, "dist=%d", VAR_7[VAR_10].distance);
  FUNC_1(VAR_0, VAR_8.buf, VAR_13);

  VAR_6->item = VAR_7[VAR_10].commit;
  if (VAR_10 < VAR_9 - 1)
   VAR_6 = VAR_6->next;
 }
 if (VAR_6) {
  FUNC_3(VAR_6->next);
  VAR_6->next = ((void*)0);
 }
 FUNC_5(&VAR_8);
 FUNC_2(VAR_7);
 return VAR_4;
}
