
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int product; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct hid_device*,unsigned char*,int) ;
 int FUNC_1 (struct hid_device*,int,unsigned char*,int,int ,int ) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_5,
   unsigned char VAR_6, unsigned char VAR_7)
{
 int VAR_8;
 unsigned char *VAR_9;

 VAR_9 = FUNC_3(3, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9[0] = 0x18;
 VAR_9[1] = VAR_6;
 VAR_9[2] = VAR_7;

 switch (VAR_5->product) {
 case 128:
  VAR_8 = FUNC_1(VAR_5, 0x13, VAR_9, 3,
     VAR_3, VAR_4);
  break;
 case 129:
  VAR_8 = FUNC_0(VAR_5, VAR_9, 3);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }

 FUNC_2(VAR_9);

 return VAR_8 < 0 ? VAR_8 : 0;
}
