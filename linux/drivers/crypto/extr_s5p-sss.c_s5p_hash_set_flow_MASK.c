
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s5p_aes_dev {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s5p_aes_dev*,int ) ;
 int FUNC_1 (struct s5p_aes_dev*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct s5p_aes_dev *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_2->lock, VAR_4);

 VAR_5 = FUNC_0(VAR_2, VAR_0);
 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_3;
 FUNC_1(VAR_2, VAR_0, VAR_5);

 FUNC_3(&VAR_2->lock, VAR_4);
}
