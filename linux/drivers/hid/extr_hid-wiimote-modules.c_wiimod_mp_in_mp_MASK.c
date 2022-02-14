
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int mp; } ;
typedef int __u8 ;
typedef int __u16 ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wiimote_data *VAR_3, const __u8 *VAR_4)
{
 __s32 VAR_5, VAR_6, VAR_7;
 VAR_5 = VAR_4[0];
 VAR_6 = VAR_4[1];
 VAR_7 = VAR_4[2];

 VAR_5 |= (((__u16)VAR_4[3]) << 6) & 0xff00;
 VAR_6 |= (((__u16)VAR_4[4]) << 6) & 0xff00;
 VAR_7 |= (((__u16)VAR_4[5]) << 6) & 0xff00;

 VAR_5 -= 8192;
 VAR_6 -= 8192;
 VAR_7 -= 8192;

 if (!(VAR_4[3] & 0x02))
  VAR_5 = (VAR_5 * 2000 * 9) / 440;
 else
  VAR_5 *= 9;
 if (!(VAR_4[4] & 0x02))
  VAR_6 = (VAR_6 * 2000 * 9) / 440;
 else
  VAR_6 *= 9;
 if (!(VAR_4[3] & 0x01))
  VAR_7 = (VAR_7 * 2000 * 9) / 440;
 else
  VAR_7 *= 9;

 FUNC_0(VAR_3->mp, VAR_0, VAR_5);
 FUNC_0(VAR_3->mp, VAR_1, VAR_6);
 FUNC_0(VAR_3->mp, VAR_2, VAR_7);
 FUNC_1(VAR_3->mp);
}
