
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hfi1_devdata {TYPE_1__* pcidev; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct hfi1_devdata*,char*,char const*,int) ;
 scalar_t__ FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct hfi1_devdata*,int ) ;
 int FUNC_3 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_12, const char *VAR_13)
{
 u64 VAR_14;
 u64 VAR_15;
 u64 VAR_16;
 u64 VAR_17;
 u64 VAR_18;

 VAR_14 = FUNC_2(VAR_12, VAR_0);
 if (VAR_12->pcidev->device == VAR_11) {

  VAR_15 = (VAR_14 >> VAR_8)
         & VAR_7;
  VAR_16 = (VAR_14 >> VAR_6)
     & VAR_5;
  VAR_17 = (VAR_14 >> VAR_4) & VAR_3;
  VAR_18 = (VAR_14 >> VAR_2)
          & VAR_1;





  if (FUNC_1(VAR_12)) {




   VAR_15 = 0x5;
   VAR_16 = 0x1;
   VAR_17 = 0xF;
   VAR_18 = 0x0;
  }


  VAR_14 = (VAR_15 << VAR_8)
   | (VAR_16 << VAR_6)
   | (VAR_15 << VAR_10)
   | (VAR_16 << VAR_9)
   | (VAR_17 << VAR_4)
   | (VAR_18 << VAR_2);

  FUNC_3(VAR_12, VAR_0, VAR_14);
 }

 FUNC_0(VAR_12, "%s: program XMT margin, CcePcieCtrl 0x%llx\n",
     VAR_13, VAR_14);
}
