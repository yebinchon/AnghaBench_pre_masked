
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucm_file {int ctxs; } ;
struct ib_ucm_context {scalar_t__ id; int file_list; int events; struct ib_ucm_file* file; int comp; int ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,struct ib_ucm_context*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_ucm_context*) ;
 struct ib_ucm_context* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct ib_ucm_context *FUNC_9(struct ib_ucm_file *VAR_3)
{
 struct ib_ucm_context *VAR_4;

 VAR_4 = FUNC_5(sizeof *VAR_4, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_1(&VAR_4->ref, 1);
 FUNC_3(&VAR_4->comp);
 VAR_4->file = VAR_3;
 FUNC_0(&VAR_4->events);

 FUNC_7(&VAR_1);
 VAR_4->id = FUNC_2(&VAR_2, VAR_4, 0, 0, VAR_0);
 FUNC_8(&VAR_1);
 if (VAR_4->id < 0)
  goto error;

 FUNC_6(&VAR_4->file_list, &VAR_3->ctxs);
 return VAR_4;

error:
 FUNC_4(VAR_4);
 return ((void*)0);
}
