
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_aes_dev {scalar_t__ hash_sg_cnt; int hash_flags; int hash_sg_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct s5p_aes_dev *VAR_2)
{
 if (VAR_2->hash_sg_cnt > 0) {
  VAR_2->hash_sg_iter = FUNC_1(VAR_2->hash_sg_iter);
  return 1;
 }

 FUNC_0(VAR_0, &VAR_2->hash_flags);
 if (FUNC_2(VAR_1, &VAR_2->hash_flags))
  return 0;

 return 2;
}
