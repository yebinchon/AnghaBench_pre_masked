
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, int VAR_3)
{
 int VAR_4 = -VAR_3 - 1;

 while ((VAR_4 < VAR_1) && !FUNC_1(VAR_0[VAR_4]->name, VAR_2)) {
  if (FUNC_0(VAR_0[VAR_4]) == 2)
   return VAR_4;
  VAR_4++;
 }
 return -1;
}
