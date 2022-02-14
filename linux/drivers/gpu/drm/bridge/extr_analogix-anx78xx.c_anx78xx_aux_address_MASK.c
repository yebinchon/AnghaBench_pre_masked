
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx {int * map; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct anx78xx *VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5->map[VAR_0], VAR_4,
      VAR_6 & 0xff);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5->map[VAR_0], VAR_1,
      (VAR_6 & 0xff00) >> 8);
 if (VAR_7)
  return VAR_7;






 VAR_7 = FUNC_0(VAR_5->map[VAR_0],
     VAR_3,
     VAR_2,
     (VAR_6 & 0xf0000) >> 16);

 if (VAR_7)
  return VAR_7;

 return 0;
}
