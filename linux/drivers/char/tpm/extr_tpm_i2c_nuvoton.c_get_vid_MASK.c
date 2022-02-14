
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vid_did_rid_value ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct i2c_client {int adapter; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct i2c_client*,int ,int,int*) ;
 scalar_t__ FUNC_2 (scalar_t__*,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4, u32 *VAR_5)
{
 static const u8 VAR_6[] = { 0x50, 0x10, 0xfe };
 u32 VAR_7;
 s32 VAR_8;

 if (!FUNC_0(VAR_4->adapter, VAR_1))
  return -VAR_0;
 VAR_8 = FUNC_1(VAR_4, VAR_3, 4, (u8 *)&VAR_7);
 if (VAR_8 < 0)
  return VAR_8;


 if (FUNC_2(&VAR_7, VAR_6, sizeof(VAR_6))) {





  VAR_8 = FUNC_1(VAR_4, VAR_2, 4,
       (u8 *) (&VAR_7));
  if (VAR_8 < 0)
   return VAR_8;


  if (FUNC_2(&VAR_7, VAR_6,
      sizeof(VAR_6)))
   return -VAR_0;
 }

 *VAR_5 = VAR_7;
 return 0;
}
