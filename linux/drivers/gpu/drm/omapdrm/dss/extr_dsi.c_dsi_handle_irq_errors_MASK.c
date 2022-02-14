
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsi_data {int errors; int errors_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dsi_data *VAR_4, u32 VAR_5,
      u32 *VAR_6, u32 VAR_7)
{
 int VAR_8;

 if (VAR_5 & VAR_1) {
  FUNC_0("DSI error, irqstatus %x\n", VAR_5);
  FUNC_1(VAR_5);
  FUNC_4(&VAR_4->errors_lock);
  VAR_4->errors |= VAR_5 & VAR_1;
  FUNC_5(&VAR_4->errors_lock);
 } else if (VAR_3) {
  FUNC_1(VAR_5);
 }

 for (VAR_8 = 0; VAR_8 < 4; ++VAR_8) {
  if (VAR_6[VAR_8] & VAR_2) {
   FUNC_0("DSI VC(%d) error, vc irqstatus %x\n",
           VAR_8, VAR_6[VAR_8]);
   FUNC_3(VAR_8, VAR_6[VAR_8]);
  } else if (VAR_3) {
   FUNC_3(VAR_8, VAR_6[VAR_8]);
  }
 }

 if (VAR_7 & VAR_0) {
  FUNC_0("DSI CIO error, cio irqstatus %x\n", VAR_7);
  FUNC_2(VAR_7);
 } else if (VAR_3) {
  FUNC_2(VAR_7);
 }
}
