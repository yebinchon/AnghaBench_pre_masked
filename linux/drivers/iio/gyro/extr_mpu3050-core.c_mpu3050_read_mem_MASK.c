
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mpu3050 {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mpu3050 *VAR_3,
       u8 VAR_4,
       u8 VAR_5,
       u8 VAR_6,
       u8 *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3->map,
      VAR_0,
      VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_3->map,
      VAR_2,
      VAR_5);
 if (VAR_8)
  return VAR_8;

 return FUNC_0(VAR_3->map,
    VAR_1,
    VAR_7,
    VAR_6);
}
