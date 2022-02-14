
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static inline int FUNC_1(u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if (VAR_2 <= VAR_1[VAR_3])
   return VAR_3;

 return -VAR_0;
}
