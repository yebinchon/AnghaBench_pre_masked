
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_multicast {int list; int id; struct ucma_context* ctx; } ;
struct ucma_context {int mc_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucma_multicast*) ;
 struct ucma_multicast* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,int *,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct ucma_multicast* FUNC_4(struct ucma_context *VAR_3)
{
 struct ucma_multicast *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->ctx = VAR_3;
 if (FUNC_3(&VAR_1, &VAR_4->id, ((void*)0), VAR_2, VAR_0))
  goto error;

 FUNC_2(&VAR_4->list, &VAR_3->mc_list);
 return VAR_4;

error:
 FUNC_0(VAR_4);
 return ((void*)0);
}
