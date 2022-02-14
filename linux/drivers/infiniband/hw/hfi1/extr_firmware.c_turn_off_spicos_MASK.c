
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {size_t hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hfi1_devdata*,char*,char*,char*) ;
 int * VAR_6 ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int,int ,int) ;
 int FUNC_3 (struct hfi1_devdata*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_7, int VAR_8)
{

 if (!FUNC_1(VAR_7))
  return;

 FUNC_0(VAR_7, "Turning off spicos:%s%s\n",
      VAR_8 & VAR_4 ? " SBus" : "",
      VAR_8 & VAR_3 ? " fabric" : "");

 FUNC_3(VAR_7, VAR_1, VAR_0);

 if (VAR_8 & VAR_4)
  FUNC_2(VAR_7, VAR_2, 0x01,
        VAR_5, 0x00000040);


 if (VAR_8 & VAR_3)
  FUNC_2(VAR_7, VAR_6[VAR_7->hfi1_id],
        0x07, VAR_5, 0x00000000);
 FUNC_3(VAR_7, VAR_1, 0);
}
