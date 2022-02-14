
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hfi1_devdata {int dummy; } ;
struct firmware_details {int firmware_len; int signature; int * firmware_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (struct hfi1_devdata*,struct firmware_details*) ;
 int FUNC_2 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_3 (struct hfi1_devdata*,int const,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hfi1_devdata *VAR_2,
         struct firmware_details *VAR_3)
{
 int VAR_4, VAR_5;
 const u8 VAR_6 = VAR_0;

 FUNC_0(VAR_2, "Downloading SBus firmware\n");


 FUNC_1(VAR_2, VAR_3);

 FUNC_3(VAR_2, VAR_6, 0x01, VAR_1, 0x000000c0);

 FUNC_3(VAR_2, VAR_6, 0x01, VAR_1, 0x00000240);

 FUNC_3(VAR_2, VAR_6, 0x03, VAR_1, 0x80000000);

 for (VAR_4 = 0; VAR_4 < VAR_3->firmware_len; VAR_4 += 4) {
  FUNC_3(VAR_2, VAR_6, 0x14, VAR_1,
        *(u32 *)&VAR_3->firmware_ptr[VAR_4]);
 }

 FUNC_3(VAR_2, VAR_6, 0x01, VAR_1, 0x00000040);

 FUNC_3(VAR_2, VAR_6, 0x16, VAR_1, 0x000c0000);


 VAR_5 = FUNC_2(VAR_2, "SBus", VAR_3->signature);
 if (VAR_5)
  return VAR_5;


 FUNC_3(VAR_2, VAR_6, 0x01, VAR_1, 0x00000140);

 return 0;
}
