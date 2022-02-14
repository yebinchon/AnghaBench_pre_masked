
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topa {int last; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct topa *VAR_2)
{

 if (!FUNC_0(VAR_0))
  return !!VAR_2->last;

 return VAR_2->last == VAR_1 - 1;
}
