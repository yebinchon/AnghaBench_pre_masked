
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct vendor_error_type_extension {int pcie_sbdf; int vendor_id; int device_id; int rev_id; } ;
struct set_error_type_with_address {int vendor_extension; } ;


 struct vendor_error_type_extension* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct vendor_error_type_extension*,int) ;
 int FUNC_2 (int ,char*,int,int,int,int,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(u64 VAR_1,
       struct set_error_type_with_address *VAR_2)
{
 int VAR_3 = VAR_2->vendor_extension;
 struct vendor_error_type_extension *VAR_4;
 u32 VAR_5;

 if (!VAR_3)
  return;
 VAR_4 = FUNC_0(VAR_1 + VAR_3, sizeof(*VAR_4));
 if (!VAR_4)
  return;
 VAR_5 = VAR_4->pcie_sbdf;
 FUNC_2(VAR_0, "%x:%x:%x.%x vendor_id=%x device_id=%x rev_id=%x\n",
  VAR_5 >> 24, (VAR_5 >> 16) & 0xff,
  (VAR_5 >> 11) & 0x1f, (VAR_5 >> 8) & 0x7,
   VAR_4->vendor_id, VAR_4->device_id, VAR_4->rev_id);
 FUNC_1(VAR_4, sizeof(*VAR_4));
}
