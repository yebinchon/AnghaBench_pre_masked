
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct sf_buf {int dummy; } ;
struct dmar_unit {int unit; int hw_gcmd; int segment; int domains; } ;
struct dmar_domain {int agaw; int mgaw; int domain; } ;
struct TYPE_2__ {int * owner; } ;
struct dmar_ctx {int refs; TYPE_1__ ctx_tag; struct dmar_domain* domain; } ;
typedef int dmar_ctx_entry_t ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct dmar_domain*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (struct dmar_ctx*,int *,int) ;
 int FUNC_8 (struct dmar_ctx*,int *) ;
 int FUNC_9 (int *,char*,int,int ,int,int,int,int ,int ,int ,int ,char*) ;
 struct dmar_ctx* FUNC_10 (struct dmar_domain*,int ) ;
 int FUNC_11 (struct dmar_ctx*) ;
 struct dmar_domain* FUNC_12 (struct dmar_unit*,int) ;
 int FUNC_13 (struct dmar_domain*) ;
 int FUNC_14 (struct dmar_unit*) ;
 int FUNC_15 (struct dmar_unit*,int) ;
 struct dmar_ctx* FUNC_16 (struct dmar_unit*,int ) ;
 int FUNC_17 (struct dmar_unit*,int) ;
 int FUNC_18 (struct dmar_unit*,struct dmar_ctx*) ;
 int * FUNC_19 (struct dmar_ctx*,struct sf_buf**) ;
 int FUNC_20 (struct sf_buf*) ;
 int FUNC_21 (struct dmar_domain*,int *,int,int,int,int,int,void const*,int) ;
 int FUNC_22 (struct dmar_ctx*,int ) ;
 int VAR_5 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (char*,int,...) ;

__attribute__((used)) static struct dmar_ctx *
FUNC_27(struct dmar_unit *VAR_6, device_t VAR_7, uint16_t VAR_8,
    int VAR_9, int VAR_10, const void *VAR_11, int VAR_12,
    bool VAR_13, bool VAR_14)
{
 struct dmar_domain *VAR_15, *VAR_16;
 struct dmar_ctx *VAR_17, *VAR_18;
 dmar_ctx_entry_t *VAR_19;
 struct sf_buf *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 bool VAR_25;

 if (VAR_7 != ((void*)0)) {
  VAR_21 = FUNC_23(VAR_7);
  VAR_22 = FUNC_25(VAR_7);
  VAR_23 = FUNC_24(VAR_7);
 } else {
  VAR_21 = FUNC_4(VAR_8);
  VAR_22 = FUNC_6(VAR_8);
  VAR_23 = FUNC_5(VAR_8);
 }
 VAR_25 = 0;
 VAR_3;
 FUNC_0(VAR_6);
 VAR_17 = FUNC_16(VAR_6, VAR_8);
 VAR_24 = 0;
 if (VAR_17 == ((void*)0)) {




  FUNC_1(VAR_6);
  FUNC_15(VAR_6, FUNC_4(VAR_8));
  VAR_16 = FUNC_12(VAR_6, VAR_13);
  if (VAR_16 == ((void*)0)) {
   VAR_2;
   return (((void*)0));
  }
  if (!VAR_13) {
   VAR_24 = FUNC_21(VAR_16, VAR_7, VAR_21,
       VAR_22, VAR_23, VAR_9, VAR_10, VAR_11,
       VAR_12);
   if (VAR_24 != 0) {
    FUNC_13(VAR_16);
    VAR_2;
    return (((void*)0));
   }
  }
  VAR_18 = FUNC_10(VAR_16, VAR_8);
  VAR_19 = FUNC_19(VAR_18, &VAR_20);
  FUNC_0(VAR_6);





  VAR_17 = FUNC_16(VAR_6, VAR_8);
  if (VAR_17 == ((void*)0)) {
   VAR_15 = VAR_16;
   VAR_17 = VAR_18;
   FUNC_11(VAR_17);
   VAR_17->ctx_tag.owner = VAR_7;
   FUNC_8(VAR_17, VAR_7);






   if (FUNC_2(&VAR_6->domains))
    VAR_25 = 1;
   FUNC_3(&VAR_6->domains, VAR_15, VAR_5);
   FUNC_7(VAR_17, VAR_19, 0);
   if (VAR_7 != ((void*)0)) {
    FUNC_9(VAR_7,
       "dmar%d pci%d:%d:%d:%d rid %x domain %d mgaw %d "
        "agaw %d %s-mapped\n",
        VAR_6->unit, VAR_6->segment, VAR_21, VAR_22,
        VAR_23, VAR_8, VAR_15->domain, VAR_15->mgaw,
        VAR_15->agaw, VAR_13 ? "id" : "re");
   }
   FUNC_20(VAR_20);
  } else {
   FUNC_20(VAR_20);
   FUNC_13(VAR_16);

   FUNC_22(VAR_18, VAR_1);
   VAR_15 = VAR_17->domain;
   VAR_17->refs++;
  }
 } else {
  VAR_15 = VAR_17->domain;
  if (VAR_17->ctx_tag.owner == ((void*)0))
   VAR_17->ctx_tag.owner = VAR_7;
  VAR_17->refs++;
 }

 VAR_24 = FUNC_17(VAR_6, VAR_25);
 if (VAR_24 != 0) {
  FUNC_18(VAR_6, VAR_17);
  VAR_2;
  return (((void*)0));
 }






 if (VAR_25 && !VAR_14 && (VAR_6->hw_gcmd & VAR_0) == 0) {
  VAR_24 = FUNC_14(VAR_6);
  if (VAR_24 == 0) {
   if (VAR_4) {
    FUNC_26("dmar%d: enabled translation\n",
        VAR_6->unit);
   }
  } else {
   FUNC_26("dmar%d: enabling translation failed, "
       "error %d\n", VAR_6->unit, VAR_24);
   FUNC_18(VAR_6, VAR_17);
   VAR_2;
   return (((void*)0));
  }
 }
 FUNC_1(VAR_6);
 VAR_2;
 return (VAR_17);
}
