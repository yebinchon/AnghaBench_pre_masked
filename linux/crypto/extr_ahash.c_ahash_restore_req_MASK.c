
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahash_request_priv {int data; int complete; int flags; int result; } ;
struct ahash_request {struct ahash_request_priv* priv; int result; } ;


 int FUNC_0 (struct ahash_request*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request_priv*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ahash_request *VAR_0, int VAR_1)
{
 struct ahash_request_priv *VAR_2 = VAR_0->priv;

 if (!VAR_1)
  FUNC_4(VAR_2->result, VAR_0->result,
         FUNC_1(FUNC_2(VAR_0)));


 VAR_0->result = VAR_2->result;

 FUNC_0(VAR_0, VAR_2->flags,
       VAR_2->complete, VAR_2->data);
 VAR_0->priv = ((void*)0);


 FUNC_3(VAR_2);
}
