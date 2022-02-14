
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int32_t ;
struct resource {int dummy; } ;
struct bios_smap {scalar_t__ type; scalar_t__ length; scalar_t__ base; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
typedef int * caddr_t ;
struct TYPE_2__ {scalar_t__ rm_end; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct resource* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (char*,int,...) ;
 int * FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7)
{
 struct bios_smap *VAR_8, *VAR_9, *VAR_10;
 struct resource *VAR_11;
 rman_res_t VAR_12;
 vm_paddr_t *VAR_13;
 caddr_t VAR_14;
 uint32_t VAR_15;
 int VAR_16, VAR_17;


 VAR_14 = FUNC_3("elf kernel");
 if (VAR_14 == ((void*)0))
  VAR_14 = FUNC_3(VAR_0);
 VAR_8 = (struct bios_smap *)FUNC_4(VAR_14,
     VAR_2 | VAR_1);
 if (VAR_8 != ((void*)0)) {
  VAR_15 = *((u_int32_t *)VAR_8 - 1);
  VAR_10 = (struct bios_smap *)((uintptr_t)VAR_8 + VAR_15);

  VAR_17 = 0;
  for (VAR_9 = VAR_8; VAR_9 < VAR_10; VAR_9++) {
   if (VAR_9->type != VAR_3 ||
       VAR_9->length == 0)
    continue;
   if (VAR_9->base > VAR_6.rm_end)
    continue;
   VAR_12 = VAR_9->base + VAR_9->length > VAR_6.rm_end ?
       VAR_6.rm_end - VAR_9->base : VAR_9->length;
   VAR_16 = FUNC_1(VAR_7, VAR_4, VAR_17,
       VAR_9->base, VAR_12);
   if (VAR_16)
    FUNC_2(
        "ram_attach: resource %d failed set with %d",
        VAR_17, VAR_16);
   VAR_11 = FUNC_0(VAR_7, VAR_4, &VAR_17,
       0);
   if (VAR_11 == ((void*)0))
    FUNC_2("ram_attach: resource %d failed to attach",
        VAR_17);
   VAR_17++;
  }
  return (0);
 }
 for (VAR_17 = 0, VAR_13 = VAR_5; VAR_13[1] != 0; VAR_17++, VAR_13 += 2) {
  if (VAR_13[0] > VAR_6.rm_end)
   break;
  VAR_12 = (VAR_13[1] > VAR_6.rm_end ? VAR_6.rm_end : VAR_13[1]) -
      VAR_13[0];
  VAR_16 = FUNC_1(VAR_7, VAR_4, VAR_17, VAR_13[0],
      VAR_12);
  if (VAR_16)
   FUNC_2("ram_attach: resource %d failed set with %d", VAR_17,
       VAR_16);
  VAR_11 = FUNC_0(VAR_7, VAR_4, &VAR_17, 0);
  if (VAR_11 == ((void*)0))
   FUNC_2("ram_attach: resource %d failed to attach", VAR_17);
 }
 return (0);
}
