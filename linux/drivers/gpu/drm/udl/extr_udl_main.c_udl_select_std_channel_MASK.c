
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct udl_device {int udev; } ;
typedef int set_def_chn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int const*,int,int ) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,void*,int,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct udl_device *VAR_6)
{
 int VAR_7;
 static const u8 VAR_8[] = {0x57, 0xCD, 0xDC, 0xA7,
      0x1C, 0x88, 0x5E, 0x15,
      0x60, 0xFE, 0xC6, 0x97,
      0x16, 0x3D, 0x47, 0xF2};
 void *VAR_9;

 VAR_9 = FUNC_1(VAR_8, sizeof(VAR_8), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_6->udev,
         FUNC_3(VAR_6->udev, 0),
         VAR_2,
         (VAR_4 | VAR_5), 0, 0,
         VAR_9, sizeof(VAR_8),
         VAR_3);
 FUNC_0(VAR_9);
 return VAR_7 < 0 ? VAR_7 : 0;
}
