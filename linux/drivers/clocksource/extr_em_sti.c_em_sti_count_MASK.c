
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct em_sti_priv {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct em_sti_priv*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static u64 FUNC_3(struct em_sti_priv *VAR_2)
{
 u64 VAR_3;
 unsigned long VAR_4;






 FUNC_1(&VAR_2->lock, VAR_4);
 VAR_3 = (u64)(FUNC_0(VAR_2, VAR_0) & 0xffff) << 32;
 VAR_3 |= FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->lock, VAR_4);

 return VAR_3;
}
