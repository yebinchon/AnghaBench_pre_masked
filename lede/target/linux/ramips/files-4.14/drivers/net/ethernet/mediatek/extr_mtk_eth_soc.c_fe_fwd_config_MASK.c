
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fe_priv {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(struct fe_priv *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2);


 if (VAR_3->flags & VAR_0)
  VAR_4 &= ~VAR_1;


 VAR_4 &= ~0xffff;

 FUNC_1(VAR_4, VAR_2);
}
