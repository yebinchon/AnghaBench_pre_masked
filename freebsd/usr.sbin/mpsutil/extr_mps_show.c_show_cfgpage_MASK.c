
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int ExtPageLength; int ExtPageType; int PageType; } ;
struct TYPE_3__ {int PageLength; int PageType; } ;
typedef TYPE_1__ MPI2_CONFIG_PAGE_HEADER ;
typedef TYPE_2__ MPI2_CONFIG_EXTENDED_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (void*,int,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int,int,int,scalar_t__,int *) ;
 void* FUNC_7 (int,int,int ,int,scalar_t__,int *) ;
 int VAR_3 ;
 int FUNC_8 (char*,int,char*,int,char*) ;
 int FUNC_9 (char*,int *,int ) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static int
FUNC_11(int VAR_4, char **VAR_5)
{
 MPI2_CONFIG_PAGE_HEADER *VAR_6;
 MPI2_CONFIG_EXTENDED_PAGE_HEADER *VAR_7;
 void *VAR_8;
 uint32_t VAR_9;
 uint16_t VAR_10;
 uint8_t VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 char *VAR_17, *VAR_18;

 VAR_13 = FUNC_5(VAR_3);
 if (VAR_13 < 0) {
  VAR_14 = VAR_2;
  FUNC_10("mps_open");
  return (VAR_14);
 }

 VAR_9 = 0;
 VAR_12 = 0;
 VAR_11 = 0;

 switch (VAR_4) {
 case 4:
  VAR_9 = (uint32_t)FUNC_9(VAR_5[3], ((void*)0), 0);
 case 3:
  VAR_12 = (uint8_t)FUNC_9(VAR_5[2], ((void*)0), 0);
 case 2:
  VAR_11 = (uint8_t)FUNC_9(VAR_5[1], ((void*)0), 0);
  break;
 default:
  VAR_2 = VAR_0;
  FUNC_10("cfgpage: not enough arguments");
  return (VAR_0);
 }

 if (VAR_11 >= 0x10)
  VAR_8 = FUNC_7(VAR_13, VAR_11, 0, VAR_12, VAR_9,
      &VAR_10);
  else
  VAR_8 = FUNC_6(VAR_13, VAR_11, VAR_12, VAR_9, &VAR_10);

 if (VAR_8 == ((void*)0)) {
  VAR_14 = VAR_2;
  FUNC_10("Error retrieving cfg page: %s\n",
      FUNC_4(VAR_10));
  return (VAR_14);
 }

 if (VAR_11 >= 0x10) {
  VAR_7 = VAR_8;
  VAR_15 = VAR_7->ExtPageLength * 4;
  VAR_11 = VAR_7->ExtPageType;
  VAR_16 = VAR_7->PageType >> 4;
 } else {
  VAR_6 = VAR_8;
  VAR_15 = VAR_6->PageLength * 4;
  VAR_11 = VAR_6->PageType & 0xf;
  VAR_16 = VAR_6->PageType >> 4;
 }

 VAR_17 = FUNC_2(VAR_11);
 if (VAR_16 == 0)
  VAR_18 = "Read-only";
 else if (VAR_16 == 1)
  VAR_18 = "Read-Write";
 else if (VAR_16 == 2)
  VAR_18 = "Read-Write Persistent";
 else
  VAR_18 = "Unknown Page Attribute";

 FUNC_8("Page 0x%x: %s %d, %s\n", VAR_11, VAR_17, VAR_12, VAR_18);
 FUNC_3(VAR_8, VAR_15, ((void*)0), VAR_1 | 4);
 FUNC_1(VAR_8);
 FUNC_0(VAR_13);
 return (0);
}
