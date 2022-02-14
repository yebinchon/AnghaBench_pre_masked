
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahash_request {scalar_t__ nbytes; int result; } ;


 int FUNC_0 (struct ahash_request*,int *,int ,int ) ;
 int FUNC_1 (struct ahash_request*,int) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0)
{
 FUNC_0(VAR_0, ((void*)0), VAR_0->result, 0);
 VAR_0->nbytes = 0;
 return FUNC_1(VAR_0, 1);
}
