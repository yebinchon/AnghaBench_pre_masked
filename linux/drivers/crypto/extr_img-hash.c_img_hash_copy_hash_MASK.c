
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_hash_request_ctx {int digsize; int hdev; scalar_t__ digest; } ;
struct ahash_request {int dummy; } ;


 struct img_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ahash_request *VAR_0)
{
 struct img_hash_request_ctx *VAR_1 = FUNC_0(VAR_0);
 u32 *VAR_2 = (u32 *)VAR_1->digest;
 int VAR_3;

 for (VAR_3 = (VAR_1->digsize / sizeof(u32)) - 1; VAR_3 >= 0; VAR_3--)
  VAR_2[VAR_3] = FUNC_1(VAR_1->hdev);
}
