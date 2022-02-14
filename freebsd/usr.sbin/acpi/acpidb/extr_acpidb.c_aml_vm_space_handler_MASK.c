
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_PHYSICAL_ADDRESS ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int,int*) ;
 int FUNC_2 (int,int,int*) ;
 int FUNC_3 (char*,char*,char const*,int,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_4(
 UINT32 VAR_2,
 UINT32 VAR_3,
 ACPI_PHYSICAL_ADDRESS VAR_4,
 UINT32 VAR_5,
 UINT64 *VAR_6,
 int VAR_7)
{
 int VAR_8;
 UINT8 VAR_9;
 UINT64 VAR_10, VAR_11;
 char VAR_12[256];
 static const char *VAR_13[] = {
  "SYSTEM_MEMORY", "SYSTEM_IO", "PCI_CONFIG",
  "EC", "SMBUS", "CMOS", "PCI_BAR_TARGET"};

 switch (VAR_3) {
 case 129:
  VAR_10 = 0;
  for (VAR_11 = 0; (VAR_11 * 8) < VAR_5; VAR_11++) {
   VAR_8 = FUNC_1(VAR_2,
            VAR_4 + VAR_11, &VAR_9);
   if (VAR_8 == -1) {
    return (VAR_0);
   }
   VAR_10 |= VAR_9 << (VAR_11 * 8);
  }
  *VAR_6 = VAR_10;
  if (VAR_7) {
   FUNC_3(VAR_12, "[read (%s, %2d, 0x%jx)]",
    VAR_13[VAR_2], VAR_5,
    (uintmax_t)VAR_4);
   *VAR_6 = FUNC_0(VAR_12, VAR_10);
   if (*VAR_6 != VAR_10) {
    return(FUNC_4(VAR_2,
      128,
      VAR_4, VAR_5, VAR_6, 0));
   }
  }
  break;

 case 128:
  VAR_10 = *VAR_6;
  if (VAR_7) {
   FUNC_3(VAR_12, "[write(%s, %2d, 0x%jx)]",
    VAR_13[VAR_2], VAR_5,
    (uintmax_t)VAR_4);
   VAR_10 = FUNC_0(VAR_12, *VAR_6);
  }
  *VAR_6 = VAR_10;
  for (VAR_11 = 0; (VAR_11 * 8) < VAR_5; VAR_11++) {
   VAR_9 = VAR_10 & 0xff;
   VAR_8 = FUNC_2(VAR_2,
             VAR_4 + VAR_11, &VAR_9);
   if (VAR_8 == -1) {
    return (VAR_0);
   }
   VAR_10 = VAR_10 >> 8;
  }
 }

 return (VAR_1);
}
