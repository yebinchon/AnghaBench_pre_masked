
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(__be32 *VAR_1, const u8 *VAR_2, unsigned int VAR_3)
{
 u8 VAR_4[VAR_0];
 u32 VAR_5, VAR_6;

 if (VAR_3 > VAR_0)
  return;

 FUNC_0(VAR_4, 0, VAR_0);

 for (VAR_5 = (VAR_0 - VAR_3), VAR_6 = VAR_3 - 1;
      VAR_5 < VAR_0; VAR_5++, VAR_6--)
  VAR_4[VAR_5] = VAR_2[VAR_6];

 FUNC_1(VAR_1, VAR_4, VAR_0);
}
