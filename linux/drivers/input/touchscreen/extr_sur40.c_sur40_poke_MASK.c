
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
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int,int,int,int *,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sur40_state *VAR_4, u8 VAR_5, u8 VAR_6)
{
 int VAR_7;
 u8 VAR_8 = 0x96;

 VAR_7 = FUNC_1(VAR_4->usbdev, FUNC_2(VAR_4->usbdev, 0),
  VAR_0, VAR_3 | VAR_2 | VAR_1,
  0x32, VAR_8, ((void*)0), 0, 1000);
 if (VAR_7 < 0)
  goto error;
 FUNC_0(5);

 VAR_7 = FUNC_1(VAR_4->usbdev, FUNC_2(VAR_4->usbdev, 0),
  VAR_0, VAR_3 | VAR_2 | VAR_1,
  0x72, VAR_5, ((void*)0), 0, 1000);
 if (VAR_7 < 0)
  goto error;
 FUNC_0(5);

 VAR_7 = FUNC_1(VAR_4->usbdev, FUNC_2(VAR_4->usbdev, 0),
  VAR_0, VAR_3 | VAR_2 | VAR_1,
  0xb2, VAR_6, ((void*)0), 0, 1000);
 if (VAR_7 < 0)
  goto error;
 FUNC_0(5);

error:
 return VAR_7;
}
