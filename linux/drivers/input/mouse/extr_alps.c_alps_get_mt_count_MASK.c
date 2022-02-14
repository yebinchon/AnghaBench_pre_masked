
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_pos {scalar_t__ x; scalar_t__ y; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct input_mt_pos *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2].x != 0 || VAR_1[VAR_2].y != 0)
   VAR_3++;
 }

 return VAR_3;
}
