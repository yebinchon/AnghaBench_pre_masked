
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct siw_mem {scalar_t__ stag_valid; struct ib_pd* pd; } ;
struct siw_device {int dummy; } ;
struct ib_pd {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_pd*,char*,int) ;
 struct siw_mem* FUNC_1 (struct siw_device*,int) ;
 int FUNC_2 (struct siw_mem*) ;
 struct siw_device* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct ib_pd *VAR_2, u32 VAR_3)
{
 struct siw_device *VAR_4 = FUNC_3(VAR_2->device);
 struct siw_mem *VAR_5 = FUNC_1(VAR_4, VAR_3 >> 8);
 int VAR_6 = 0;

 if (FUNC_4(!VAR_5)) {
  FUNC_0(VAR_2, "STag 0x%08x unknown\n", VAR_3);
  return -VAR_1;
 }
 if (FUNC_4(VAR_5->pd != VAR_2)) {
  FUNC_0(VAR_2, "PD mismatch for STag 0x%08x\n", VAR_3);
  VAR_6 = -VAR_0;
  goto out;
 }




 VAR_5->stag_valid = 0;

 FUNC_0(VAR_2, "STag 0x%08x now invalid\n", VAR_3);
out:
 FUNC_2(VAR_5);
 return VAR_6;
}
