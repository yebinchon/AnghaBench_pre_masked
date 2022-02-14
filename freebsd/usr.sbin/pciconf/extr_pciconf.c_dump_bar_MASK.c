
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int pc_domain; int pc_bus; int pc_dev; int pc_func; } ;
struct pci_bar_mmap {int pbm_reg; int pbm_bar_length; int pbm_bar_off; int pbm_map_length; scalar_t__ pbm_map_base; TYPE_1__ pbm_sel; int pbm_memattr; scalar_t__ pbm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,char*,int,int,int,int,int,scalar_t__,int,int,int,int,int) ;
 size_t FUNC_4 (int*,int,int,int ) ;
 TYPE_1__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int,int ,struct pci_bar_mmap*) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_9 (char const*,char**,int ) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_6, const char *VAR_7, const char *VAR_8,
    const char *VAR_9, int VAR_10, int VAR_11)
{
 struct pci_bar_mmap VAR_12;
 uint32_t *VAR_13;
 uint16_t *VAR_14;
 uint8_t *VAR_15;
 uint64_t *VAR_16, VAR_17, VAR_18, VAR_19;
 char *VAR_20;
 size_t VAR_21;
 int VAR_22;

 VAR_18 = 0;
 if (VAR_8 != ((void*)0)) {
  VAR_18 = FUNC_9(VAR_8, &VAR_20, 0);
  if (*VAR_20 != '\0')
   FUNC_2(1, "Invalid bar start specification %s",
       VAR_8);
 }
 VAR_19 = 0;
 if (VAR_9 != ((void*)0)) {
  VAR_19 = FUNC_9(VAR_9, &VAR_20, 0);
  if (*VAR_20 != '\0')
   FUNC_2(1, "Invalid count specification %s",
       VAR_9);
 }

 VAR_12.pbm_sel = FUNC_5(VAR_6);
 VAR_12.pbm_reg = FUNC_9(VAR_7, &VAR_20, 0);
 if (*VAR_7 == '\0' || *VAR_20 != '\0')
  FUNC_2(1, "Invalid bar specification %s", VAR_7);
 VAR_12.pbm_flags = 0;
 VAR_12.pbm_memattr = VAR_2;

 VAR_22 = FUNC_8(VAR_3, VAR_0, 0);
 if (VAR_22 < 0)
  FUNC_1(1, "%s", VAR_3);

 if (FUNC_6(VAR_22, VAR_1, &VAR_12) < 0)
  FUNC_1(1, "ioctl(PCIOCBARMMAP)");

 if (VAR_19 == 0)
  VAR_19 = VAR_12.pbm_bar_length / VAR_10;
 if (VAR_18 + VAR_19 < VAR_18 || (VAR_18 + VAR_19) * VAR_10 < (uint64_t)VAR_10)
  FUNC_2(1, "(start + count) x width overflow");
 if ((VAR_18 + VAR_19) * VAR_10 > VAR_12.pbm_bar_length) {
  if (VAR_18 * VAR_10 > VAR_12.pbm_bar_length)
   VAR_19 = 0;
  else
   VAR_19 = (VAR_12.pbm_bar_length - VAR_18 * VAR_10) / VAR_10;
 }
 if (VAR_11) {
  FUNC_3(VAR_4,
      "Dumping pci%d:%d:%d:%d BAR %x mapped base %ld "
      "off %#x length %#x from %#x count %#x in %d-bytes\n",
      VAR_12.pbm_sel.pc_domain, VAR_12.pbm_sel.pc_bus,
      VAR_12.pbm_sel.pc_dev, VAR_12.pbm_sel.pc_func,
      VAR_12.pbm_reg, VAR_12.pbm_map_base, VAR_12.pbm_bar_off,
      VAR_12.pbm_bar_length, VAR_18, VAR_19, VAR_10);
 }
 switch (VAR_10) {
 case 1:
  VAR_15 = (uint8_t *)(uintptr_t)((uintptr_t)VAR_12.pbm_map_base +
      VAR_12.pbm_bar_off + VAR_18 * VAR_10);
  for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17 += VAR_10, VAR_15++) {
   VAR_21 = FUNC_4(VAR_15, VAR_10, 1, VAR_5);
   if (VAR_21 != 1) {
    FUNC_2(1, "error writing to stdout");
    break;
   }
  }
  break;
 case 2:
  VAR_14 = (uint16_t *)(uintptr_t)((uintptr_t)VAR_12.pbm_map_base +
      VAR_12.pbm_bar_off + VAR_18 * VAR_10);
  for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17 += VAR_10, VAR_14++) {
   VAR_21 = FUNC_4(VAR_14, VAR_10, 1, VAR_5);
   if (VAR_21 != 1) {
    FUNC_2(1, "error writing to stdout");
    break;
   }
  }
  break;
 case 4:
  VAR_13 = (uint32_t *)(uintptr_t)((uintptr_t)VAR_12.pbm_map_base +
      VAR_12.pbm_bar_off + VAR_18 * VAR_10);
  for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17 += VAR_10, VAR_13++) {
   VAR_21 = FUNC_4(VAR_13, VAR_10, 1, VAR_5);
   if (VAR_21 != 1) {
    FUNC_2(1, "error writing to stdout");
    break;
   }
  }
  break;
 case 8:
  VAR_16 = (uint64_t *)(uintptr_t)((uintptr_t)VAR_12.pbm_map_base +
      VAR_12.pbm_bar_off + VAR_18 * VAR_10);
  for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17 += VAR_10, VAR_16++) {
   VAR_21 = FUNC_4(VAR_16, VAR_10, 1, VAR_5);
   if (VAR_21 != 1) {
    FUNC_2(1, "error writing to stdout");
    break;
   }
  }
  break;
 default:
  FUNC_2(1, "invalid access width");
 }

 FUNC_7((void *)VAR_12.pbm_map_base, VAR_12.pbm_map_length);
 FUNC_0(VAR_22);
}
