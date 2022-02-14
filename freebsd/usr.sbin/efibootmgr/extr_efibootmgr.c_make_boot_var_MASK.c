
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct entry {char* name; int guid; } ;
typedef char* efidp ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct entry*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (char*,int,int ,char*,size_t,char const*,char const*,scalar_t__) ;
 int FUNC_4 (int ,char*,char*,size_t,int ) ;
 size_t FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char**) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int ) ;
 char* FUNC_11 () ;
 void* FUNC_12 (int) ;
 int FUNC_13 (char*,char*,size_t) ;
 int FUNC_14 (struct entry*,int ,int) ;
 scalar_t__ FUNC_15 (char const*) ;

__attribute__((used)) static int
FUNC_16(const char *VAR_9, const char *VAR_10, const char *VAR_11, const char *VAR_12, bool VAR_13,
    int VAR_14, bool VAR_15)
{
 struct entry *VAR_16;
 uint32_t VAR_17 = 0;
 uint8_t *VAR_18;
 size_t VAR_19, VAR_20, VAR_21;
 efidp VAR_22, VAR_23, VAR_24;
 char *VAR_25 = ((void*)0);
 int VAR_26;

 FUNC_2(VAR_9 != ((void*)0));

 if (VAR_14 == -1)
  VAR_25 = FUNC_11();
 else
  VAR_25 = FUNC_10((uint16_t)VAR_14);
 if (VAR_25 == ((void*)0))
  FUNC_7(1, "bootvar creation");
 if (VAR_10 == ((void*)0))
  FUNC_8(1, "Must specify boot loader");
 if (FUNC_6(VAR_10, &VAR_23) != 0)
  FUNC_7(1, "Cannot translate unix loader path '%s' to UEFI", VAR_10);
 if (VAR_11 != ((void*)0)) {
  if (FUNC_6(VAR_11, &VAR_24) != 0)
   FUNC_7(1, "Cannot translate unix kernel path '%s' to UEFI", VAR_11);
 } else {
  VAR_24 = ((void*)0);
 }
 VAR_20 = FUNC_5(VAR_23);
 if (VAR_20 > VAR_5)
  FUNC_8(1, "Loader path too long.");
 VAR_21 = FUNC_5(VAR_24);
 if (VAR_21 > VAR_5)
  FUNC_8(1, "Kernel path too long.");
 VAR_22 = FUNC_12(VAR_20 + VAR_21);
 if (VAR_22 == ((void*)0))
  FUNC_8(1, "Can't allocate memory for new device paths");
 FUNC_13(VAR_22, VAR_23, VAR_20);
 if (VAR_24 != ((void*)0))
  FUNC_13((char *)VAR_22 + VAR_20, VAR_24, VAR_21);


 VAR_17 = VAR_4;
 if (VAR_15)
  VAR_17 |= VAR_3;
 VAR_18 = FUNC_12(VAR_6);
 if (VAR_18 == ((void*)0))
  FUNC_7(1, "malloc");

 VAR_19 = FUNC_3(VAR_18, VAR_6, VAR_17,
     VAR_22, VAR_20 + VAR_21, VAR_9, VAR_12, VAR_12 ? FUNC_15(VAR_12) + 1 : 0);
 if (VAR_19 == VAR_0)
  FUNC_8(1, "Can't create loadopt");

 VAR_26 = 0;
 if (!VAR_13) {
  VAR_26 = FUNC_4(VAR_2, VAR_25,
      (uint8_t*)VAR_18, VAR_19, VAR_1);
 }

 if (VAR_26)
  FUNC_7(1, "efi_set_variable");

 if (!VAR_13)
  FUNC_1(VAR_25);
 VAR_16 = FUNC_12(sizeof(struct entry));
 if (VAR_16 == ((void*)0))
  FUNC_7(1, "malloc");
 FUNC_14(VAR_16, 0, sizeof(struct entry));
 VAR_16->name = VAR_25;
 VAR_16->guid = VAR_2;
 FUNC_0(&VAR_7, VAR_16, VAR_8);
 FUNC_9(VAR_18);
 FUNC_9(VAR_22);

 return 0;
}
