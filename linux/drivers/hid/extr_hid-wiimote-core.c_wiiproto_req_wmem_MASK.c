
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int hdev; } ;
typedef int cmd ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct wiimote_data*,int*,int) ;
 int FUNC_4 (struct wiimote_data*,int*) ;

__attribute__((used)) static void FUNC_5(struct wiimote_data *VAR_1, bool VAR_2,
    __u32 VAR_3, const __u8 *VAR_4, __u8 VAR_5)
{
 __u8 VAR_6[22];

 if (VAR_5 > 16 || VAR_5 == 0) {
  FUNC_0(VAR_1->hdev, "Invalid length %d wmem request\n", VAR_5);
  return;
 }

 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 VAR_6[0] = VAR_0;
 VAR_6[2] = (VAR_3 >> 16) & 0xff;
 VAR_6[3] = (VAR_3 >> 8) & 0xff;
 VAR_6[4] = VAR_3 & 0xff;
 VAR_6[5] = VAR_5;
 FUNC_1(&VAR_6[6], VAR_4, VAR_5);

 if (!VAR_2)
  VAR_6[1] |= 0x04;

 FUNC_4(VAR_1, &VAR_6[1]);
 FUNC_3(VAR_1, VAR_6, sizeof(VAR_6));
}
