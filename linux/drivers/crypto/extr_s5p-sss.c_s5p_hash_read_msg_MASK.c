
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s5p_hash_reqctx {unsigned int nregs; scalar_t__ digest; struct s5p_aes_dev* dd; } ;
struct s5p_aes_dev {int dummy; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 struct s5p_hash_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct s5p_aes_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct ahash_request *VAR_0)
{
 struct s5p_hash_reqctx *VAR_1 = FUNC_1(VAR_0);
 struct s5p_aes_dev *VAR_2 = VAR_1->dd;
 u32 *VAR_3 = (u32 *)VAR_1->digest;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->nregs; VAR_4++)
  VAR_3[VAR_4] = FUNC_2(VAR_2, FUNC_0(VAR_4));
}
