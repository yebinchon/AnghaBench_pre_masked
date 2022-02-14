
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;

int FUNC_3(__be32 *VAR_0)
{
 int VAR_1;
 u16 VAR_2;

 VAR_1 = (FUNC_0(VAR_0[0]) >> 16) & 0xff;
 VAR_2 = FUNC_2(0, (u8 *)&VAR_0[1], VAR_1 * 4);
 *VAR_0 |= FUNC_1(VAR_2);

 return VAR_1;
}
