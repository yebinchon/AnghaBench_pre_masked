
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int hdev; } ;
typedef int cmd ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wiimote_data*,int*,int) ;
 int FUNC_2 (struct wiimote_data*,int*) ;

void FUNC_3(struct wiimote_data *VAR_1, bool VAR_2, __u32 VAR_3,
        __u16 VAR_4)
{
 __u8 VAR_5[7];

 if (VAR_4 == 0) {
  FUNC_0(VAR_1->hdev, "Invalid length %d rmem request\n", VAR_4);
  return;
 }

 VAR_5[0] = VAR_0;
 VAR_5[1] = 0;
 VAR_5[2] = (VAR_3 >> 16) & 0xff;
 VAR_5[3] = (VAR_3 >> 8) & 0xff;
 VAR_5[4] = VAR_3 & 0xff;
 VAR_5[5] = (VAR_4 >> 8) & 0xff;
 VAR_5[6] = VAR_4 & 0xff;

 if (!VAR_2)
  VAR_5[1] |= 0x04;

 FUNC_2(VAR_1, &VAR_5[1]);
 FUNC_1(VAR_1, VAR_5, sizeof(VAR_5));
}
