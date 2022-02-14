
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak8974 {scalar_t__ variant; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ak8974*,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ak8974 *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_1(VAR_9->map, VAR_0, VAR_1 |
      VAR_2);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_9->map, VAR_3, 0);
 if (VAR_10)
  return VAR_10;
 if (VAR_9->variant == VAR_7) {

  VAR_10 = FUNC_0(VAR_9, VAR_8, 0xA07E);
  if (VAR_10)
   return VAR_10;
 }
 VAR_10 = FUNC_1(VAR_9->map, VAR_4, VAR_5);
 if (VAR_10)
  return VAR_10;

 return FUNC_1(VAR_9->map, VAR_6, 0);
}
