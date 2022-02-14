
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd64_pvt {int fam; char* dct_sel_lo; char* dct_sel_hi; int F2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char**) ;
 scalar_t__ FUNC_1 (struct amd64_pvt*) ;
 scalar_t__ FUNC_2 (struct amd64_pvt*) ;
 scalar_t__ FUNC_3 (struct amd64_pvt*) ;
 scalar_t__ FUNC_4 (struct amd64_pvt*) ;
 scalar_t__ FUNC_5 (struct amd64_pvt*) ;
 char* FUNC_6 (struct amd64_pvt*) ;
 char* FUNC_7 (struct amd64_pvt*) ;
 int FUNC_8 (int ,char*,char*,...) ;

__attribute__((used)) static void FUNC_9(struct amd64_pvt *VAR_2)
{

 if (VAR_2->fam == 0xf)
  return;

 if (!FUNC_0(VAR_2->F2, VAR_1, &VAR_2->dct_sel_lo)) {
  FUNC_8(0, "F2x110 (DCTSelLow): 0x%08x, High range addrs at: 0x%x\n",
    VAR_2->dct_sel_lo, FUNC_6(VAR_2));

  FUNC_8(0, "  DCTs operate in %s mode\n",
    (FUNC_2(VAR_2) ? "ganged" : "unganged"));

  if (!FUNC_2(VAR_2))
   FUNC_8(0, "  Address range split per DCT: %s\n",
     (FUNC_3(VAR_2) ? "yes" : "no"));

  FUNC_8(0, "  data interleave for ECC: %s, DRAM cleared since last warm reset: %s\n",
    (FUNC_1(VAR_2) ? "enabled" : "disabled"),
    (FUNC_5(VAR_2) ? "yes" : "no"));

  FUNC_8(0, "  channel interleave: %s, "
    "interleave bits selector: 0x%x\n",
    (FUNC_4(VAR_2) ? "enabled" : "disabled"),
    FUNC_7(VAR_2));
 }

 FUNC_0(VAR_2->F2, VAR_0, &VAR_2->dct_sel_hi);
}
