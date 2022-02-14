
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx {int * map; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static bool FUNC_1(struct anx78xx *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->map[VAR_0], VAR_2,
     &VAR_4);
 if (VAR_5 < 0)
  return 0;

 return (VAR_4 & VAR_1) == 0;
}
