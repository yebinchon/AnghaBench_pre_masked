
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf_stream {int complete; int parent; } ;
typedef int git_filter_list ;
typedef int git_buf ;
typedef int git_blob ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buf_stream*,int *) ;
 int FUNC_2 (int *,int *,int *) ;

int FUNC_3(
 git_buf *VAR_0,
 git_filter_list *VAR_1,
 git_blob *VAR_2)
{
 struct buf_stream VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, VAR_0);

 if ((VAR_4 = FUNC_2(
  VAR_1, VAR_2, &VAR_3.parent)) < 0)
   return VAR_4;

 FUNC_0(VAR_3.complete);
 return VAR_4;
}
