
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {int size; scalar_t__ map; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

struct bitmap
FUNC_2(int VAR_0)
{
 struct bitmap VAR_1;
 int VAR_2 = (VAR_0 / 8) + !!(VAR_0 % 8);

 VAR_1.size = VAR_0;
 VAR_1.map = FUNC_0(VAR_2);
 if (VAR_1.map)
  FUNC_1(VAR_1.map, 0, VAR_2);
 return VAR_1;
}
