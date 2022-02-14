
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_multicast {scalar_t__ id; int list; struct ucma_context* ctx; } ;
struct ucma_context {int mc_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct ucma_multicast*,int ,int ,int ) ;
 int FUNC_1 (struct ucma_multicast*) ;
 struct ucma_multicast* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct ucma_multicast* FUNC_6(struct ucma_context *VAR_3)
{
 struct ucma_multicast *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_4(&VAR_2);
 VAR_4->id = FUNC_0(&VAR_1, VAR_4, 0, 0, VAR_0);
 FUNC_5(&VAR_2);
 if (VAR_4->id < 0)
  goto error;

 VAR_4->ctx = VAR_3;
 FUNC_3(&VAR_4->list, &VAR_3->mc_list);
 return VAR_4;

error:
 FUNC_1(VAR_4);
 return ((void*)0);
}
