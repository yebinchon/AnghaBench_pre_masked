
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct buf_stream {int complete; int parent; } ;
typedef int git_filter_list ;
struct TYPE_8__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buf_stream*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,int *) ;

int FUNC_5(
 git_buf *VAR_0, git_filter_list *VAR_1, git_buf *VAR_2)
{
 struct buf_stream VAR_3;
 int VAR_4;

 FUNC_3(VAR_0);
 FUNC_3(VAR_2);

 if (!VAR_1) {
  FUNC_2(VAR_0, VAR_2->ptr, VAR_2->size);
  return 0;
 }

 FUNC_1(&VAR_3, VAR_0);

 if ((VAR_4 = FUNC_4(VAR_1, VAR_2,
  &VAR_3.parent)) < 0)
   return VAR_4;

 FUNC_0(VAR_3.complete);
 return VAR_4;
}
