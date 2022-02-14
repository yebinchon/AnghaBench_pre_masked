
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_psb_private {int dummy; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_17, u32 VAR_18, u32 VAR_19)
{
 struct drm_psb_private *VAR_20 = VAR_17->dev_private;
 u32 VAR_21, VAR_22;
 int VAR_23 = 0;

 if (VAR_18 & VAR_16)
  VAR_21 = FUNC_1(VAR_0);

 if (VAR_19 & VAR_15) {
  VAR_21 = FUNC_1(VAR_2);
  VAR_22 = FUNC_1(VAR_1);
  if (VAR_21) {
   if (VAR_21 & VAR_14)
    FUNC_0("SGX MMU page fault:");
   else
    FUNC_0("SGX MMU read / write protection fault:");

   if (VAR_21 & VAR_6)
    FUNC_0("\tCache requestor");
   if (VAR_21 & VAR_10)
    FUNC_0("\tTA requestor");
   if (VAR_21 & VAR_13)
    FUNC_0("\tVDM requestor");
   if (VAR_21 & VAR_5)
    FUNC_0("\t2D requestor");
   if (VAR_21 & VAR_9)
    FUNC_0("\tPBE requestor");
   if (VAR_21 & VAR_11)
    FUNC_0("\tTSP requestor");
   if (VAR_21 & VAR_8)
    FUNC_0("\tISP requestor");
   if (VAR_21 & VAR_12)
    FUNC_0("\tUSSEPDS requestor");
   if (VAR_21 & VAR_7)
    FUNC_0("\tHost requestor");

   FUNC_0("\tMMU failing address is 0x%08x.\n",
      (unsigned int)VAR_22);
   VAR_23 = 1;
  }
 }


 FUNC_2(VAR_18, VAR_3);
 FUNC_2(VAR_19, VAR_4);
 FUNC_1(VAR_4);
}
