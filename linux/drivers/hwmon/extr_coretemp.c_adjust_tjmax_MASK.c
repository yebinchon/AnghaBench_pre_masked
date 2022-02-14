
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tjmax_model {scalar_t__ device; int tjmax; scalar_t__ model; scalar_t__ mask; int id; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;
struct device {int dummy; } ;
struct cpuinfo_x86 {scalar_t__ x86_model; scalar_t__ x86_stepping; int x86_model_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tjmax_model*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct device*,char*) ;
 struct pci_dev* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,int,int*,int*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 struct tjmax_model* VAR_2 ;
 struct tjmax_model* VAR_3 ;
 struct tjmax_model* VAR_4 ;

__attribute__((used)) static int FUNC_6(struct cpuinfo_x86 *VAR_5, u32 VAR_6, struct device *VAR_7)
{


 int VAR_8 = 100000;
 int VAR_9 = 85000;
 int VAR_10 = 1;
 int VAR_11;
 u32 VAR_12, VAR_13;
 int VAR_14;
 u16 VAR_15 = FUNC_1(0, 0);
 struct pci_dev *VAR_16 = FUNC_3(0, 0, VAR_15);






 if (VAR_16 && VAR_16->vendor == VAR_1) {
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_3); VAR_14++) {
   if (VAR_16->device == VAR_3[VAR_14].device)
    return VAR_3[VAR_14].tjmax;
  }
 }

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_4); VAR_14++) {
  if (FUNC_5(VAR_5->x86_model_id, VAR_4[VAR_14].id))
   return VAR_4[VAR_14].tjmax;
 }

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_2); VAR_14++) {
  const struct tjmax_model *VAR_17 = &VAR_2[VAR_14];
  if (VAR_5->x86_model == VAR_17->model &&
      (VAR_17->mask == VAR_0 || VAR_5->x86_stepping == VAR_17->mask))
   return VAR_17->tjmax;
 }



 if (VAR_5->x86_model == 0xf && VAR_5->x86_stepping < 4)
  VAR_10 = 0;

 if (VAR_5->x86_model > 0xe && VAR_10) {
  u8 VAR_18;






  VAR_11 = FUNC_4(VAR_6, 0x17, &VAR_12, &VAR_13);
  if (VAR_11) {
   FUNC_2(VAR_7,
     "Unable to access MSR 0x17, assuming desktop"
     " CPU\n");
   VAR_10 = 0;
  } else if (VAR_5->x86_model < 0x17 && !(VAR_12 & 0x10000000)) {





   VAR_10 = 0;
  } else {

   VAR_18 = (VAR_13 >> 18) & 0x7;





   if (VAR_5->x86_model == 0x17 &&
       (VAR_18 == 5 || VAR_18 == 7)) {




    VAR_9 = 90000;
    VAR_8 = 105000;
   }
  }
 }

 if (VAR_10) {
  VAR_11 = FUNC_4(VAR_6, 0xee, &VAR_12, &VAR_13);
  if (VAR_11) {
   FUNC_2(VAR_7,
     "Unable to access MSR 0xEE, for Tjmax, left"
     " at default\n");
  } else if (VAR_12 & 0x40000000) {
   VAR_8 = VAR_9;
  }
 } else if (VAR_8 == 100000) {




  FUNC_2(VAR_7, "Using relative temperature scale!\n");
 }

 return VAR_8;
}
