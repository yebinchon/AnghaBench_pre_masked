
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sur40_state {int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int,int,int,int *,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sur40_state *VAR_5, u8 VAR_6)
{
 u8 VAR_7[2] = { 0x01, 0x00 };
 u8 VAR_8[2] = { 0x85, 0x80 };
 int VAR_9;

 if (VAR_6 > 1)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_5->usbdev, FUNC_2(VAR_5->usbdev, 0),
  VAR_1, VAR_4 | VAR_3 | VAR_2,
  0x07, VAR_7[VAR_6], ((void*)0), 0, 1000);
 if (VAR_9 < 0)
  goto error;
 FUNC_0(5);

 VAR_9 = FUNC_1(VAR_5->usbdev, FUNC_2(VAR_5->usbdev, 0),
  VAR_1, VAR_4 | VAR_3 | VAR_2,
  0x17, VAR_8[VAR_6], ((void*)0), 0, 1000);
 if (VAR_9 < 0)
  goto error;
 FUNC_0(5);

error:
 return VAR_9;
}
