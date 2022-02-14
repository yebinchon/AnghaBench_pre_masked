
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx {int * map; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct anx78xx *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->map[VAR_0], VAR_3,
     VAR_2);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_1(VAR_4->map[VAR_0], VAR_3,
          VAR_1);
 if (VAR_5)
  return VAR_5;

 return 0;
}
