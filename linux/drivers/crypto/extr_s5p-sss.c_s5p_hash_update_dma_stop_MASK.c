
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_hash_reqctx {int sg_len; int sg; } ;
struct s5p_aes_dev {int hash_flags; int dev; int hash_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s5p_hash_reqctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct s5p_aes_dev *VAR_2)
{
 const struct s5p_hash_reqctx *VAR_3 = FUNC_0(VAR_2->hash_req);

 FUNC_2(VAR_2->dev, VAR_3->sg, VAR_3->sg_len, VAR_0);
 FUNC_1(VAR_1, &VAR_2->hash_flags);
}
