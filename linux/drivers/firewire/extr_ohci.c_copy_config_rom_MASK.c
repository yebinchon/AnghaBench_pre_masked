
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int *,int ,size_t) ;

__attribute__((used)) static void FUNC_2(__be32 *VAR_1, const __be32 *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = VAR_3 * 4;

 FUNC_0(VAR_1, VAR_2, VAR_4);
 if (VAR_4 < VAR_0)
  FUNC_1(&VAR_1[VAR_3], 0, VAR_0 - VAR_4);
}
