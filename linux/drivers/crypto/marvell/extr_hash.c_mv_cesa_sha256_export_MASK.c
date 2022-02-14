
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha256_state {int buf; int count; int state; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (struct ahash_request*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct ahash_request *VAR_0, void *VAR_1)
{
 struct sha256_state *VAR_2 = VAR_1;

 return FUNC_0(VAR_0, VAR_2->state, &VAR_2->count,
        VAR_2->buf);
}
