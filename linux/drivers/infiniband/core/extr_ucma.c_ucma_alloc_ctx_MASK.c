
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_file {int ctx_list; } ;
struct ucma_context {int list; int id; struct ucma_file* file; int mc_list; int comp; int ref; int close_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ucma_context*) ;
 struct ucma_context* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int *,int *,struct ucma_context*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static struct ucma_context *FUNC_8(struct ucma_file *VAR_4)
{
 struct ucma_context *VAR_5;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_1(&VAR_5->close_work, VAR_2);
 FUNC_2(&VAR_5->ref, 1);
 FUNC_3(&VAR_5->comp);
 FUNC_0(&VAR_5->mc_list);
 VAR_5->file = VAR_4;

 if (FUNC_7(&VAR_1, &VAR_5->id, VAR_5, VAR_3, VAR_0))
  goto error;

 FUNC_6(&VAR_5->list, &VAR_4->ctx_list);
 return VAR_5;

error:
 FUNC_4(VAR_5);
 return ((void*)0);
}
