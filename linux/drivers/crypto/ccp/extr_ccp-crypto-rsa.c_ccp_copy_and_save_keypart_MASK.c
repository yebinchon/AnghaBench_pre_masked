
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (scalar_t__ const*,unsigned int,int ) ;

__attribute__((used)) static inline int FUNC_1(u8 **VAR_2, unsigned int *VAR_3,
         const u8 *VAR_4, size_t VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  if (VAR_4[VAR_6])
   break;
 *VAR_3 = VAR_5 - VAR_6;
 *VAR_2 = FUNC_0(VAR_4 + VAR_6, *VAR_3, VAR_1);
 if (!*VAR_2)
  return -VAR_0;

 return 0;
}
