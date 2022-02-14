
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int buf; } ;
struct tree_write_stack {char* path; TYPE_1__ buf; struct tree_write_stack* next; } ;
struct object_id {int hash; } ;


 int FUNC_0 (struct tree_write_stack*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,struct object_id*) ;
 int FUNC_3 (TYPE_1__*,int,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct tree_write_stack *VAR_1)
{
 int VAR_2;
 struct tree_write_stack *VAR_3 = VAR_1->next;
 struct object_id VAR_4;
 if (VAR_3) {
  VAR_2 = FUNC_4(VAR_3);
  if (VAR_2)
   return VAR_2;
  VAR_2 = FUNC_2(VAR_3->buf.buf, VAR_3->buf.len, VAR_0, &VAR_4);
  if (VAR_2)
   return VAR_2;
  FUNC_1(&VAR_3->buf);
  FUNC_0(VAR_3);
  VAR_1->next = ((void*)0);
  FUNC_3(&VAR_1->buf, 040000, VAR_1->path, 2, VAR_4.hash);
  VAR_1->path[0] = VAR_1->path[1] = '\0';
 }
 return 0;
}
