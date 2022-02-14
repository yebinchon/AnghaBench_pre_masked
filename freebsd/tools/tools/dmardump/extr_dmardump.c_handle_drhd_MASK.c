
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct dmar_root_entry {int r1; int r2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (char*,char*,int,...) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void
FUNC_8(int VAR_9, uint64_t VAR_10)
{
 struct dmar_root_entry *VAR_11;
 char *VAR_12;
 uint64_t VAR_13;
 uint32_t VAR_14, VAR_15;
 bool VAR_16;
 int VAR_17;

 VAR_12 = FUNC_2(VAR_10, 4096);

 VAR_15 = FUNC_6(VAR_12, VAR_8);
 VAR_14 = FUNC_6(VAR_12, VAR_0);
 FUNC_5("drhd @ %#jx (version %d.%d) PCI segment %d%s:\n",
     (uintmax_t)VAR_10, FUNC_0(VAR_15), FUNC_1(VAR_15),
     VAR_9, VAR_14 & VAR_2 ? "" : " (disabled)");
 if ((VAR_14 & (VAR_2 | VAR_1)) !=
     (VAR_2 | VAR_1))
  return;
 VAR_13 = FUNC_7(VAR_12, VAR_5);
 VAR_16 = (VAR_13 & VAR_7) != 0;
 FUNC_5("    %sroot table @ 0x%#jx\n", VAR_16 ? "extended " : "",
     VAR_13 & VAR_6);
 VAR_11 = FUNC_2(VAR_13 & VAR_6, 4096);
 for (VAR_17 = 0; VAR_17 < 255; VAR_17++) {
  if (VAR_16) {
  } else if (VAR_11[VAR_17].r1 & VAR_4)
   FUNC_3(VAR_9, VAR_17, VAR_11[VAR_17].r1 &
       VAR_3);
 }
}
