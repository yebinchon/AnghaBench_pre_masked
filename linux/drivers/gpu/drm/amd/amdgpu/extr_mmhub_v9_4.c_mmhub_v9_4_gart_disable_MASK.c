
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_3(struct amdgpu_device *VAR_12)
{
 u32 VAR_13;
 u32 VAR_14, VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {

  for (VAR_14 = 0; VAR_14 < 16; VAR_14++)
   FUNC_2(VAR_3, 0,
         VAR_10,
         VAR_15 * VAR_4 +
         VAR_14, 0);


  VAR_13 = FUNC_1(VAR_3, 0,
       VAR_11,
       VAR_15 * VAR_4);
  VAR_13 = FUNC_0(VAR_13, VAR_7,
        VAR_1, 0);
  VAR_13 = FUNC_0(VAR_13,
        VAR_7,
        VAR_0, 0);
  FUNC_2(VAR_3, 0,
        VAR_11,
        VAR_15 * VAR_4, VAR_13);


  VAR_13 = FUNC_1(VAR_3, 0, VAR_8,
       VAR_15 * VAR_4);
  VAR_13 = FUNC_0(VAR_13, VAR_6,
        VAR_2, 0);
  FUNC_2(VAR_3, 0, VAR_8,
        VAR_15 * VAR_4, VAR_13);
  FUNC_2(VAR_3, 0, VAR_9,
        VAR_15 * VAR_4, 0);
 }
}
