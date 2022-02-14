
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(void)
{
 int VAR_5 = -VAR_0;
 unsigned short VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_1(VAR_2, "smapi::smapi_init entry\n");

 FUNC_4(&VAR_4, VAR_7);
 VAR_6 = FUNC_0(0x7C);
 VAR_6 |= (FUNC_0(0x7D) << 8);
 FUNC_5(&VAR_4, VAR_7);
 FUNC_2(VAR_2, "smapi::smapi_init usSmapiID %x\n", VAR_6);

 if (VAR_6 == 0x5349) {
  FUNC_4(&VAR_4, VAR_7);
  VAR_3 = FUNC_0(0x7E);
  VAR_3 |= (FUNC_0(0x7F) << 8);
  FUNC_5(&VAR_4, VAR_7);
  if (VAR_3 == 0) {
   FUNC_3("smapi::smapi_init, ERROR unable to read from SMAPI port\n");
  } else {
   FUNC_2(VAR_2,
    "smapi::smapi_init, exit true g_usSmapiPort %x\n",
    VAR_3);
   VAR_5 = 0;

  }
 } else {
  FUNC_3("smapi::smapi_init, ERROR invalid usSmapiID\n");
  VAR_5 = -VAR_1;
 }

 return VAR_5;
}
