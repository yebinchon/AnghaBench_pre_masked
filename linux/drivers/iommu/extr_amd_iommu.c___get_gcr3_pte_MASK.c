
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static u64 *FUNC_3(u64 *VAR_3, int VAR_4, int VAR_5, bool VAR_6)
{
 int VAR_7;
 u64 *VAR_8;

 while (1) {

  VAR_7 = (VAR_5 >> (9 * VAR_4)) & 0x1ff;
  VAR_8 = &VAR_3[VAR_7];

  if (VAR_4 == 0)
   break;

  if (!(*VAR_8 & VAR_0)) {
   if (!VAR_6)
    return ((void*)0);

   VAR_3 = (void *)FUNC_0(VAR_1);
   if (VAR_3 == ((void*)0))
    return ((void*)0);

   *VAR_8 = FUNC_2(VAR_3) | VAR_0;
  }

  VAR_3 = FUNC_1(*VAR_8 & VAR_2);

  VAR_4 -= 1;
 }

 return VAR_8;
}
