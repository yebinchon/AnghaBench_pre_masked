
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct amd64_pvt {int top_mem; int top_mem2; size_t dram_type; int dchr1; int dclr1; int dchr0; int dclr0; int online_spare; int F3; int dbam0; int dhar; int F1; int nbcap; int F0; scalar_t__ umc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct amd64_pvt*) ;
 int FUNC_2 (struct amd64_pvt*,int,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct amd64_pvt*) ;
 int FUNC_5 (struct amd64_pvt*) ;
 int FUNC_6 (struct amd64_pvt*) ;
 int FUNC_7 (struct amd64_pvt*,unsigned int) ;
 scalar_t__ FUNC_8 (struct amd64_pvt*,unsigned int) ;
 int FUNC_9 (struct amd64_pvt*,unsigned int) ;
 int FUNC_10 (struct amd64_pvt*,unsigned int) ;
 int FUNC_11 (struct amd64_pvt*) ;
 int FUNC_12 (int,char*,...) ;
 int* VAR_11 ;
 int FUNC_13 (struct amd64_pvt*,unsigned int) ;
 int FUNC_14 (struct amd64_pvt*,unsigned int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct amd64_pvt*) ;
 int FUNC_17 (struct amd64_pvt*,unsigned int) ;
 int FUNC_18 (struct amd64_pvt*) ;

__attribute__((used)) static void FUNC_19(struct amd64_pvt *VAR_12)
{
 unsigned int VAR_13;
 u64 VAR_14;





 FUNC_15(VAR_8, VAR_12->top_mem);
 FUNC_12(0, "  TOP_MEM:  0x%016llx\n", VAR_12->top_mem);


 FUNC_15(VAR_7, VAR_14);
 if (VAR_14 & FUNC_0(21)) {
  FUNC_15(VAR_9, VAR_12->top_mem2);
  FUNC_12(0, "  TOP_MEM2: 0x%016llx\n", VAR_12->top_mem2);
 } else {
  FUNC_12(0, "  TOP_MEM2 disabled\n");
 }

 if (VAR_12->umc) {
  FUNC_1(VAR_12);
  FUNC_3(VAR_12->F0, VAR_3, &VAR_12->dhar);

  goto skip;
 }

 FUNC_3(VAR_12->F3, VAR_10, &VAR_12->nbcap);

 FUNC_18(VAR_12);

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  u8 VAR_15;


  FUNC_17(VAR_12, VAR_13);

  VAR_15 = FUNC_10(VAR_12, VAR_13);
  if (!VAR_15)
   continue;

  FUNC_12(1, "  DRAM range[%d], base: 0x%016llx; limit: 0x%016llx\n",
    VAR_13,
    FUNC_13(VAR_12, VAR_13),
    FUNC_14(VAR_12, VAR_13));

  FUNC_12(1, "   IntlvEn=%s; Range access: %s%s IntlvSel=%d DstNode=%d\n",
    FUNC_8(VAR_12, VAR_13) ? "Enabled" : "Disabled",
    (VAR_15 & 0x1) ? "R" : "-",
    (VAR_15 & 0x2) ? "W" : "-",
    FUNC_9(VAR_12, VAR_13),
    FUNC_7(VAR_12, VAR_13));
 }

 FUNC_3(VAR_12->F1, VAR_4, &VAR_12->dhar);
 FUNC_2(VAR_12, 0, VAR_0, &VAR_12->dbam0);

 FUNC_3(VAR_12->F3, VAR_6, &VAR_12->online_spare);

 FUNC_2(VAR_12, 0, VAR_2, &VAR_12->dclr0);
 FUNC_2(VAR_12, 0, VAR_1, &VAR_12->dchr0);

 if (!FUNC_4(VAR_12)) {
  FUNC_2(VAR_12, 1, VAR_2, &VAR_12->dclr1);
  FUNC_2(VAR_12, 1, VAR_1, &VAR_12->dchr1);
 }

skip:
 FUNC_16(VAR_12);

 FUNC_6(VAR_12);
 FUNC_12(1, "  DIMM type: %s\n", VAR_11[VAR_12->dram_type]);

 FUNC_5(VAR_12);

 FUNC_11(VAR_12);
}
