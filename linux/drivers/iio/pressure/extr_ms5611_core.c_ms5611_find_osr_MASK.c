
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms5611_osr {unsigned short rate; } ;



__attribute__((used)) static const struct ms5611_osr *FUNC_0(int VAR_0,
      const struct ms5611_osr *VAR_1,
      size_t VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if ((unsigned short)VAR_0 == VAR_1[VAR_3].rate)
   break;
 if (VAR_3 >= VAR_2)
  return ((void*)0);
 return &VAR_1[VAR_3];
}
