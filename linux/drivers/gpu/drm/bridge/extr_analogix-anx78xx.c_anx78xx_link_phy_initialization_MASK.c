
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx {int * map; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct anx78xx *VAR_5)
{
 int VAR_6;





 VAR_6 = FUNC_2(VAR_5->map[VAR_1], VAR_2,
      0x02);
 if (VAR_6)
  return VAR_6;




 VAR_6 = FUNC_1(VAR_5->map[VAR_0],
    VAR_3,
    VAR_4,
    FUNC_0(VAR_4));

 if (VAR_6)
  return VAR_6;

 return 0;
}
