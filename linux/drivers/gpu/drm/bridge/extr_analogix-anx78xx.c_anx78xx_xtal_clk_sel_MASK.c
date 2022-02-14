
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx {int * map; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct anx78xx *VAR_16)
{
 unsigned int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_1(VAR_16->map[VAR_2],
     VAR_3,
     VAR_13 | VAR_7,
     VAR_14);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_2(VAR_16->map[VAR_1], VAR_5,
      VAR_15 & VAR_12);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_2(VAR_16->map[VAR_1], VAR_6,
      ((VAR_15 & 0xff00) >> 2) | (VAR_15 / 10));
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_2(VAR_16->map[VAR_1],
      VAR_9, VAR_15 & 0xff);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_2(VAR_16->map[VAR_1],
      VAR_10,
      (VAR_15 & 0xff00) >> 8);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_2(VAR_16->map[VAR_1], VAR_4,
      VAR_15 / 10 - 1);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_0(VAR_16->map[VAR_0],
     VAR_8,
     &VAR_17);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_2(VAR_16->map[VAR_0],
      VAR_8,
      (VAR_17 & VAR_11) |
      ((((VAR_15 / 10) >> 1) - 2) << 3));
 if (VAR_18)
  return VAR_18;

 return 0;
}
