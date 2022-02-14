
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(u32 VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 if (!VAR_2)
  return;

 FUNC_2(&VAR_0, VAR_4);
 VAR_5 = FUNC_0(VAR_1);

 if (VAR_3)
  VAR_5 &= ~VAR_2;
 else
  VAR_5 |= VAR_2;

 FUNC_1(VAR_5, VAR_1);
 FUNC_3(&VAR_0, VAR_4);
}
