
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_metadata {scalar_t__ md_type; scalar_t__ md_cval; } ;
struct elf_file {int dummy; } ;
typedef int md ;
typedef int cval ;
typedef int Elf_Off ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct elf_file*) ;
 int FUNC_1 (struct elf_file*) ;
 int FUNC_2 (struct elf_file*,int ,long*,long*,long*) ;
 int FUNC_3 (struct elf_file*,long,int,void*) ;
 int FUNC_4 (struct elf_file*,int ,int,struct mod_metadata*) ;
 int FUNC_5 (struct elf_file*,int ,int,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*,struct elf_file*,scalar_t__) ;
 int FUNC_8 (char*,struct elf_file*,scalar_t__) ;
 int FUNC_9 (void**) ;
 int FUNC_10 (struct mod_metadata*,char*,struct elf_file*,char*) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (int,char*,char*) ;

__attribute__((used)) static int
FUNC_13(char *VAR_7, char *VAR_8)
{
 struct mod_metadata VAR_9;
 struct elf_file VAR_10;
 void **VAR_11;
 int VAR_12, VAR_13;
 long VAR_14, VAR_15, VAR_16, VAR_17;
 char VAR_18[VAR_2 + 1];

 if (VAR_6 || VAR_5)
  FUNC_11("%s\n", VAR_7);
 VAR_12 = FUNC_8(VAR_7, &VAR_10, VAR_6);
 if (VAR_12 != 0) {
  VAR_12 = FUNC_7(VAR_7, &VAR_10, VAR_6);
  if (VAR_12 != 0) {
   if (VAR_6)
    FUNC_12(VAR_12, "elf_open(%s)", VAR_7);
   return (VAR_12);
  }
 }
 VAR_13 = FUNC_1(&VAR_10);
 if (VAR_13 != VAR_1 && VAR_13 != VAR_0) {
  FUNC_0(&VAR_10);
  return (0);
 }
 do {
  FUNC_6(FUNC_2(&VAR_10, VAR_4, &VAR_14, &VAR_15,
      &VAR_16));
  FUNC_6(FUNC_3(&VAR_10, VAR_14, sizeof(*VAR_11) * VAR_16,
      (void *)&VAR_11));
  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   FUNC_6(FUNC_4(&VAR_10, (Elf_Off)VAR_11[VAR_17], sizeof(VAR_9),
       &VAR_9));
   FUNC_6(FUNC_5(&VAR_10, (Elf_Off)VAR_9.md_cval,
       sizeof(VAR_18), VAR_18));
   if (VAR_9.md_type == VAR_3) {
    FUNC_10(&VAR_9, VAR_18, &VAR_10, VAR_8);
    break;
   }
  }
  if (VAR_12 != 0) {
   FUNC_12(VAR_12, "error while reading %s", VAR_7);
   break;
  }




  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   FUNC_6(FUNC_4(&VAR_10, (Elf_Off)VAR_11[VAR_17], sizeof(VAR_9),
       &VAR_9));
   FUNC_6(FUNC_5(&VAR_10, (Elf_Off)VAR_9.md_cval,
       sizeof(VAR_18), VAR_18));
   if (VAR_9.md_type != VAR_3)
    FUNC_10(&VAR_9, VAR_18, &VAR_10, VAR_8);
  }
  if (VAR_12 != 0)
   FUNC_12(VAR_12, "error while reading %s", VAR_7);
  FUNC_9(VAR_11);
 } while(0);
 FUNC_0(&VAR_10);
 return (VAR_12);
}
