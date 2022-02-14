
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx {int * map; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct anx78xx *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6->map[VAR_0],
     VAR_4 + 7, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6->map[VAR_1], VAR_5,
          VAR_2);
 if (VAR_7)
  return VAR_7;

 return 0;
}
