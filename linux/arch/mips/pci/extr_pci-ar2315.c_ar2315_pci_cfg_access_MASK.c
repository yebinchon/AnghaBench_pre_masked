
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ar2315_pci_ctrl {scalar_t__ cfg_mem; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct ar2315_pci_ctrl*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct ar2315_pci_ctrl*,int ) ;
 int FUNC_6 (struct ar2315_pci_ctrl*,int ,scalar_t__) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct ar2315_pci_ctrl *VAR_7, unsigned VAR_8,
     int VAR_9, int VAR_10, u32 *VAR_11, bool VAR_12)
{
 int VAR_13 = FUNC_0(VAR_8);
 int VAR_14 = FUNC_1(VAR_8);
 u32 VAR_15 = (1 << (13 + VAR_14)) | (VAR_13 << 8) | (VAR_9 & ~3);
 u32 VAR_16 = 0xffffffff >> 8 * (4 - VAR_10);
 u32 VAR_17 = (VAR_9 & 3) * 8;
 u32 VAR_18, VAR_19;


 if (VAR_15 >= VAR_1 || VAR_14 > 18)
  return VAR_5;


 FUNC_6(VAR_7, VAR_3, VAR_2);

 FUNC_4(VAR_7, VAR_4, 0,
       VAR_0);

 FUNC_7();

 VAR_18 = FUNC_2(VAR_7->cfg_mem + VAR_15);

 VAR_19 = FUNC_5(VAR_7, VAR_3);

 if (VAR_19 & VAR_2)
  goto exit_err;

 if (VAR_12) {
  VAR_18 = (VAR_18 & ~(VAR_16 << VAR_17)) | *VAR_11 << VAR_17;
  FUNC_3(VAR_18, VAR_7->cfg_mem + VAR_15);
  VAR_19 = FUNC_5(VAR_7, VAR_3);
  if (VAR_19 & VAR_2)
   goto exit_err;
 } else {
  *VAR_11 = (VAR_18 >> VAR_17) & VAR_16;
 }

 goto exit;

exit_err:
 FUNC_6(VAR_7, VAR_3, VAR_2);
 if (!VAR_12)
  *VAR_11 = 0xffffffff;

exit:

 FUNC_4(VAR_7, VAR_4, VAR_0,
       0);

 return VAR_19 & VAR_2 ? VAR_5 :
         VAR_6;
}
