
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dma; } ;
struct artpec6_hash_request_context {TYPE_1__ common; } ;
struct ahash_request {int base; } ;




 struct artpec6_hash_request_context* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_1)
{
 struct artpec6_hash_request_context *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 if (!VAR_2->common.dma) {
  VAR_3 = FUNC_2(&VAR_2->common,
       &VAR_1->base,
       VAR_0,
       ((void*)0), 0);

  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_1);
 switch (VAR_3) {
 case 128:
  VAR_3 = FUNC_4(&VAR_2->common);
  break;

 case 129:
  VAR_3 = 0;


 default:
  FUNC_1(&VAR_2->common);
  break;
 }

 return VAR_3;
}
