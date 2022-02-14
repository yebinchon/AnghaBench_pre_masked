
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct em_sti_priv {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct em_sti_priv*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static u64 FUNC_3(struct em_sti_priv *VAR_5, u64 VAR_6)
{
 unsigned long VAR_7;

 FUNC_1(&VAR_5->lock, VAR_7);


 FUNC_0(VAR_5, VAR_2, 1);


 FUNC_0(VAR_5, VAR_0, VAR_6 >> 32);
 FUNC_0(VAR_5, VAR_1, VAR_6 & 0xffffffff);


 FUNC_0(VAR_5, VAR_4, 1);


 FUNC_0(VAR_5, VAR_3, 1);

 FUNC_2(&VAR_5->lock, VAR_7);

 return VAR_6;
}
