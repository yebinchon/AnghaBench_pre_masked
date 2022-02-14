
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint64_t ;
typedef int u_char ;
typedef int ssize_t ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int cell ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,char*,int*,int) ;
 int FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 phandle_t VAR_4;
 vm_paddr_t VAR_5, VAR_6;
 pcell_t VAR_7[2];
 ssize_t VAR_8;

 if (!VAR_0)
  return;

 VAR_4 = FUNC_0("/chosen");
 if (VAR_4 <= 0)
  return;

 if (!FUNC_2(VAR_4, "linux,initrd-start") ||
     !FUNC_2(VAR_4, "linux,initrd-end"))
  return;

 VAR_8 = FUNC_1(VAR_4, "linux,initrd-start", VAR_7, sizeof(VAR_7));
 if (VAR_8 == 4)
  VAR_5 = VAR_7[0];
 else if (VAR_8 == 8)
  VAR_5 = (uint64_t)VAR_7[0] << 32 | VAR_7[1];
 else {
  FUNC_4("ofw_initrd: Wrong linux,initrd-start size\n");
  return;
 }

 VAR_8 = FUNC_1(VAR_4, "linux,initrd-end", VAR_7, sizeof(VAR_7));
 if (VAR_8 == 4)
  VAR_6 = VAR_7[0];
 else if (VAR_8 == 8)
  VAR_6 = (uint64_t)VAR_7[0] << 32 | VAR_7[1];
 else{
  FUNC_4("ofw_initrd: Wrong linux,initrd-end size\n");
  return;
 }

 if (VAR_6 - VAR_5 > 0) {
  VAR_1 = (u_char *) FUNC_3(VAR_5);
  VAR_2 = VAR_6 - VAR_5;
  FUNC_4("ofw_initrd: initrd loaded at 0x%08lx-0x%08lx\n",
   VAR_5, VAR_6);
 }
}
