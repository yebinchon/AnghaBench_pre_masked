
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct pvo_entry {int dummy; } ;
struct ofw_map {int om_va; int om_len; int om_pa; int om_mode; } ;
typedef int register_t ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int mmu_t ;
typedef int cell_t ;
typedef int acells ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int*,size_t) ;
 int VAR_2 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int FUNC_10 (struct ofw_map*,size_t) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__) ;
 struct pvo_entry* FUNC_13 (int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct ofw_map*,size_t,int,int ) ;

__attribute__((used)) static void
FUNC_16(mmu_t VAR_7, phandle_t VAR_8, size_t VAR_9)
{
 struct ofw_map VAR_10[VAR_9/(4*sizeof(cell_t))];
 pcell_t VAR_11, VAR_12[VAR_9/sizeof(cell_t)];
 struct pvo_entry *VAR_13;
 register_t VAR_14;
 vm_offset_t VAR_15;
 vm_paddr_t VAR_16;
 int VAR_17, VAR_18;

 FUNC_10(VAR_10, VAR_9);
 FUNC_6(FUNC_5("/"), "#address-cells", &VAR_11,
     sizeof(VAR_11));
 if (FUNC_6(VAR_8, "translations", VAR_12, VAR_9) == -1)
  FUNC_14("moea64_bootstrap: can't get ofw translations");

 FUNC_0(VAR_0, "moea64_add_ofw_mappings: translations");
 VAR_9 /= sizeof(cell_t);
 for (VAR_17 = 0, VAR_18 = 0; VAR_17 < VAR_9; VAR_18++) {
  VAR_10[VAR_18].om_va = VAR_12[VAR_17++];
  VAR_10[VAR_18].om_len = VAR_12[VAR_17++];
  VAR_10[VAR_18].om_pa = VAR_12[VAR_17++];
  if (VAR_11 == 2) {
   VAR_10[VAR_18].om_pa <<= 32;
   VAR_10[VAR_18].om_pa |= VAR_12[VAR_17++];
  }
  VAR_10[VAR_18].om_mode = VAR_12[VAR_17++];
 }
 FUNC_4(VAR_17 == VAR_9, ("Translations map has incorrect cell count (%d/%zd)",
     VAR_17, VAR_9));

 VAR_9 = VAR_18;
 FUNC_15(VAR_10, VAR_9, sizeof (*VAR_10), VAR_6);

 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  VAR_16 = VAR_10[VAR_17].om_pa;

  if ((VAR_10[VAR_17].om_pa >> 32) != 0)
   FUNC_14("OFW translations above 32-bit boundary!");


  if (VAR_16 % VAR_2)
   FUNC_14("OFW translation not page-aligned (phys)!");
  if (VAR_10[VAR_17].om_va % VAR_2)
   FUNC_14("OFW translation not page-aligned (virt)!");

  FUNC_1(VAR_0, "translation: pa=%#zx va=%#x len=%#x",
      VAR_16, VAR_10[VAR_17].om_va, VAR_10[VAR_17].om_len);



  FUNC_2(VAR_14);
  for (VAR_15 = 0; VAR_15 < VAR_10[VAR_17].om_len; VAR_15 += VAR_2) {

   if (VAR_4 &&
       VAR_10[VAR_17].om_va == FUNC_7(VAR_16) &&
       FUNC_11(VAR_16 + VAR_15, VAR_3)
        == VAR_1)
    continue;

   FUNC_8(VAR_5);
   VAR_13 = FUNC_13(VAR_5,
       VAR_10[VAR_17].om_va + VAR_15);
   FUNC_9(VAR_5);
   if (VAR_13 != ((void*)0))
    continue;

   FUNC_12(VAR_7, VAR_10[VAR_17].om_va + VAR_15,
       VAR_16 + VAR_15);
  }
  FUNC_3(VAR_14);
 }
}
