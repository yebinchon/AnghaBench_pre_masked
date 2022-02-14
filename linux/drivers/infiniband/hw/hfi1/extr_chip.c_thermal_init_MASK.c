
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {scalar_t__ icode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hfi1_devdata*,int,char*) ;
 int VAR_8 ;
 int FUNC_1 (struct hfi1_devdata*,int ,int ) ;
 scalar_t__ FUNC_2 (struct hfi1_devdata*,int ,int *) ;
 int FUNC_3 (struct hfi1_devdata*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hfi1_devdata*,int ) ;
 int FUNC_6 (struct hfi1_devdata*,int ,int,int ,int) ;
 int FUNC_7 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct hfi1_devdata *VAR_9)
{
 int VAR_10 = 0;

 if (VAR_9->icode != VAR_3 ||
     FUNC_2(VAR_9, VAR_2, ((void*)0)))
  return VAR_10;

 VAR_10 = FUNC_1(VAR_9, VAR_1, VAR_7);
 if (VAR_10) {
  FUNC_0(VAR_9, VAR_10, "Acquire SBus");
  return VAR_10;
 }

 FUNC_3(VAR_9, "Initializing thermal sensor\n");

 FUNC_7(VAR_9, VAR_0, 0x0);
 FUNC_4(100);


 VAR_10 = FUNC_6(VAR_9, VAR_5, 0x0,
    VAR_4, 0);
 if (VAR_10) {
  FUNC_0(VAR_9, VAR_10, "Bus Reset");
  goto done;
 }

 VAR_10 = FUNC_6(VAR_9, VAR_5, 0x0,
    VAR_8, 0x1);
 if (VAR_10) {
  FUNC_0(VAR_9, VAR_10, "Therm Block Reset");
  goto done;
 }

 VAR_10 = FUNC_6(VAR_9, VAR_5, 0x1,
    VAR_8, 0x32);
 if (VAR_10) {
  FUNC_0(VAR_9, VAR_10, "Write Clock Div");
  goto done;
 }

 VAR_10 = FUNC_6(VAR_9, VAR_5, 0x3,
    VAR_8,
    VAR_6);
 if (VAR_10) {
  FUNC_0(VAR_9, VAR_10, "Write Mode Sel");
  goto done;
 }

 VAR_10 = FUNC_6(VAR_9, VAR_5, 0x0,
    VAR_8, 0x2);
 if (VAR_10) {
  FUNC_0(VAR_9, VAR_10, "Write Reset Deassert");
  goto done;
 }

 FUNC_4(22);


 FUNC_7(VAR_9, VAR_0, 0x1);


 VAR_10 = FUNC_1(VAR_9, VAR_2, 0);
 if (VAR_10)
  FUNC_0(VAR_9, VAR_10, "Unable to set thermal init flag");

done:
 FUNC_5(VAR_9, VAR_1);
 return VAR_10;
}
