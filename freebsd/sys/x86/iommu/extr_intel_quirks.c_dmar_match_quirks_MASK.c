
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct intel_dmar_quirk_nb {scalar_t__ dev_id; scalar_t__ rev_no; int (* quirk ) (struct dmar_unit*,int *) ;int descr; } ;
struct intel_dmar_quirk_cpu {scalar_t__ ext_family; scalar_t__ ext_model; scalar_t__ family_code; scalar_t__ model; int stepping; int (* quirk ) (struct dmar_unit*) ;int descr; } ;
struct dmar_unit {int dev; } ;
typedef int * device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,scalar_t__*) ;
 int * FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct dmar_unit*,int *) ;
 int FUNC_6 (struct dmar_unit*) ;

__attribute__((used)) static void
FUNC_7(struct dmar_unit *VAR_7,
    const struct intel_dmar_quirk_nb *VAR_8, int VAR_9,
    const struct intel_dmar_quirk_cpu *VAR_10, int VAR_11)
{
 device_t VAR_12;
 const struct intel_dmar_quirk_nb *VAR_13;
 const struct intel_dmar_quirk_cpu *VAR_14;
 u_int VAR_15[4];
 u_int VAR_16, VAR_17;
 u_int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23;

 if (VAR_8 != ((void*)0)) {
  VAR_12 = FUNC_2(0, 0, 0);
  if (VAR_12 != ((void*)0)) {
   VAR_16 = FUNC_3(VAR_12);
   VAR_17 = FUNC_4(VAR_12);
   for (VAR_23 = 0; VAR_23 < VAR_9; VAR_23++) {
    VAR_13 = &VAR_8[VAR_23];
    if (VAR_13->dev_id == VAR_16 &&
        (VAR_13->rev_no == VAR_17 ||
        VAR_13->rev_no == VAR_5)) {
     if (VAR_6) {
      FUNC_0(VAR_7->dev,
          "NB IOMMU quirk %s\n",
          VAR_13->descr);
     }
     VAR_13->quirk(VAR_7, VAR_12);
    }
   }
  } else {
   FUNC_0(VAR_7->dev, "cannot find northbridge\n");
  }
 }
 if (VAR_10 != ((void*)0)) {
  FUNC_1(1, VAR_15);
  VAR_18 = (VAR_15[0] & VAR_0) >> 20;
  VAR_19 = (VAR_15[0] & VAR_1) >> 16;
  VAR_20 = (VAR_15[0] & VAR_2) >> 8;
  VAR_21 = (VAR_15[0] & VAR_3) >> 4;
  VAR_22 = VAR_15[0] & VAR_4;
  for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
   VAR_14 = &VAR_10[VAR_23];
   if (VAR_14->ext_family == VAR_18 &&
       VAR_14->ext_model == VAR_19 &&
       VAR_14->family_code == VAR_20 &&
       VAR_14->model == VAR_21 &&
       (VAR_14->stepping == -1 ||
       VAR_14->stepping == VAR_22)) {
    if (VAR_6) {
     FUNC_0(VAR_7->dev,
         "CPU IOMMU quirk %s\n",
         VAR_14->descr);
    }
    VAR_14->quirk(VAR_7);
   }
  }
 }
}
