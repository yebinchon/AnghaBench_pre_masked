
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s5p_hash_reqctx {unsigned int nregs; scalar_t__ digest; } ;
struct s5p_aes_dev {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct s5p_aes_dev*,int ,int const) ;

__attribute__((used)) static void FUNC_2(struct s5p_aes_dev *VAR_0,
      const struct s5p_hash_reqctx *VAR_1)
{
 const u32 *VAR_2 = (const u32 *)VAR_1->digest;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nregs; VAR_3++)
  FUNC_1(VAR_0, FUNC_0(VAR_3), VAR_2[VAR_3]);
}
