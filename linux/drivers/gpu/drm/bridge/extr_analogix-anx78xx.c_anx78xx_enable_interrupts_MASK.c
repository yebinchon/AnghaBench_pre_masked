
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx {int * map; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct anx78xx *VAR_11)
{
 int VAR_12;





 VAR_12 = FUNC_0(VAR_11->map[VAR_1], VAR_7, 0x01);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_11->map[VAR_1],
      VAR_3, VAR_5 | VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_11->map[VAR_1], VAR_4,
      VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_11->map[VAR_0], VAR_8,
      VAR_2 | VAR_9);
 if (VAR_12)
  return VAR_12;

 return 0;
}
