
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cdn_dp_device {int dev; } ;
typedef int reg ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct cdn_dp_device*,int*,size_t) ;
 int FUNC_2 (struct cdn_dp_device*,int ,int ,int,int*) ;
 int FUNC_3 (struct cdn_dp_device*,int ,int ,int) ;

int FUNC_4(void *VAR_2, u8 *VAR_3,
     unsigned int VAR_4, size_t VAR_5)
{
 struct cdn_dp_device *VAR_6 = VAR_2;
 u8 VAR_7[2], VAR_8[2], VAR_9;
 int VAR_10;

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  VAR_7[0] = VAR_4 / 2;
  VAR_7[1] = VAR_4 % 2;

  VAR_10 = FUNC_2(VAR_6, VAR_1, VAR_0,
       sizeof(VAR_7), VAR_7);
  if (VAR_10)
   continue;

  VAR_10 = FUNC_3(VAR_6, VAR_1,
            VAR_0,
            sizeof(VAR_8) + VAR_5);
  if (VAR_10)
   continue;

  VAR_10 = FUNC_1(VAR_6, VAR_8, sizeof(VAR_8));
  if (VAR_10)
   continue;

  VAR_10 = FUNC_1(VAR_6, VAR_3, VAR_5);
  if (VAR_10)
   continue;

  if (VAR_8[0] == VAR_5 && VAR_8[1] == VAR_4 / 2)
   break;
 }

 if (VAR_10)
  FUNC_0(VAR_6->dev, "get block[%d] edid failed: %d\n", VAR_4,
         VAR_10);

 return VAR_10;
}
