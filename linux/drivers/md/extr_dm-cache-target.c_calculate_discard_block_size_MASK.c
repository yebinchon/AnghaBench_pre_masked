
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sector_t ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static sector_t FUNC_1(sector_t VAR_0,
          sector_t VAR_1)
{
 sector_t VAR_2 = VAR_0;

 if (VAR_1)
  while (FUNC_0(VAR_2, VAR_1))
   VAR_2 *= 2;

 return VAR_2;
}
