
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hid_device*,char*,int) ;
 int FUNC_1 (struct hid_device*,unsigned char,unsigned char*,int,int ,int ) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (unsigned char const*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_4)
{
 int VAR_5;





 static const unsigned char VAR_6[] = { 0x0D, 0x00, 0x03, 0x21, 0x00 };
 unsigned char *VAR_7 = FUNC_3(VAR_6, sizeof(VAR_6), VAR_1);

 if (!VAR_7)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4, VAR_7[0], VAR_7, sizeof(VAR_6),
     VAR_2, VAR_3);

 FUNC_2(VAR_7);

 if (VAR_5 != sizeof(VAR_6)) {
  FUNC_0(VAR_4, "Failed to start multitouch: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
