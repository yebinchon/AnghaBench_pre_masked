
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hfi1_devdata {size_t hfi1_id; } ;
struct firmware_details {int firmware_len; int signature; int * firmware_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int * VAR_1 ;
 int FUNC_1 (struct hfi1_devdata*,struct firmware_details*) ;
 int FUNC_2 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_3 (struct hfi1_devdata*,int const,int,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct hfi1_devdata *VAR_2,
           struct firmware_details *VAR_3)
{
 int VAR_4, VAR_5;
 const u8 VAR_6 = VAR_1[VAR_2->hfi1_id];

 FUNC_0(VAR_2, "Downloading fabric firmware\n");


 FUNC_1(VAR_2, VAR_3);

 FUNC_3(VAR_2, VAR_6, 0x07, VAR_0, 0x00000011);

 FUNC_4(1);

 FUNC_3(VAR_2, VAR_6, 0x07, VAR_0, 0x00000010);

 FUNC_3(VAR_2, VAR_6, 0x00, VAR_0, 0x40000000);

 for (VAR_4 = 0; VAR_4 < VAR_3->firmware_len; VAR_4 += 4) {
  FUNC_3(VAR_2, VAR_6, 0x0a, VAR_0,
        *(u32 *)&VAR_3->firmware_ptr[VAR_4]);
 }

 FUNC_3(VAR_2, VAR_6, 0x00, VAR_0, 0x00000000);

 FUNC_3(VAR_2, VAR_6, 0x0b, VAR_0, 0x000c0000);


 VAR_5 = FUNC_2(VAR_2, "fabric serdes", VAR_3->signature);
 if (VAR_5)
  return VAR_5;


 FUNC_3(VAR_2, VAR_6, 0x07, VAR_0, 0x00000002);

 FUNC_3(VAR_2, VAR_6, 0x08, VAR_0, 0x00000000);

 return 0;
}
