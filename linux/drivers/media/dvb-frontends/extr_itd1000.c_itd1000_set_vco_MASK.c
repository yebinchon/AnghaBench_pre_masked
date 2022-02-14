
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct itd1000_state {int dummy; } ;
struct TYPE_3__ {scalar_t__ fmax_rg; int vcorg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct itd1000_state*,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct itd1000_state*,int ,int) ;
 int FUNC_3 (char*,scalar_t__,int,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct itd1000_state *VAR_4, u32 VAR_5)
{
 u8 VAR_6;
 u8 VAR_7 = FUNC_1(VAR_4, VAR_0) & 0xbf;
 u8 VAR_8 = FUNC_1(VAR_4, VAR_2) & 0x0f;
 u8 VAR_9;


 FUNC_2(VAR_4, VAR_0, VAR_7 | (1 << 6));

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  if (VAR_5 < VAR_3[VAR_6].fmax_rg) {
   FUNC_2(VAR_4, VAR_2, VAR_8 | (VAR_3[VAR_6].vcorg << 4));
   FUNC_4(1);

   VAR_9 = FUNC_1(VAR_4, VAR_1) & 0x0f;

   FUNC_3("VCO: %dkHz: %d -> ADCOUT: %d %02x\n", VAR_5, VAR_3[VAR_6].vcorg, VAR_9, VAR_8);

   if (VAR_9 > 13) {
    if (!(VAR_3[VAR_6].vcorg == 7 || VAR_3[VAR_6].vcorg == 15))
     FUNC_2(VAR_4, VAR_2, VAR_8 | ((VAR_3[VAR_6].vcorg + 1) << 4));
   } else if (VAR_9 < 2) {
    if (!(VAR_3[VAR_6].vcorg == 1 || VAR_3[VAR_6].vcorg == 9))
     FUNC_2(VAR_4, VAR_2, VAR_8 | ((VAR_3[VAR_6].vcorg - 1) << 4));
   }
   break;
  }
 }
}
