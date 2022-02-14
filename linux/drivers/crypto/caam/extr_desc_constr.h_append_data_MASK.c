
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int * const) ;
 int FUNC_3 (int *,void const*,int) ;

__attribute__((used)) static inline void FUNC_4(u32 * const VAR_1, const void *VAR_2, int VAR_3)
{
 u32 *VAR_4 = FUNC_2(VAR_1);

 if (VAR_3)
  FUNC_3(VAR_4, VAR_2, VAR_3);

 (*VAR_1) = FUNC_1(FUNC_0(*VAR_1) +
    (VAR_3 + VAR_0 - 1) / VAR_0);
}
