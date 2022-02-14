
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_status_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char const*,char*) ;

efi_status_t FUNC_3(char const *VAR_5)
{
 char *VAR_6;

 VAR_6 = FUNC_2(VAR_5, "nokaslr");
 if (VAR_6 == VAR_5 || (VAR_6 && VAR_6 > VAR_5 && *(VAR_6 - 1) == ' '))
  VAR_2 = 1;

 VAR_6 = FUNC_2(VAR_5, "quiet");
 if (VAR_6 == VAR_5 || (VAR_6 && VAR_6 > VAR_5 && *(VAR_6 - 1) == ' '))
  VAR_4 = 1;





 VAR_6 = FUNC_2(VAR_5, "efi=");
 if (!VAR_6)
  return VAR_0;


 VAR_6 += FUNC_0("efi=");





 while (*VAR_6 && *VAR_6 != ' ') {
  if (!FUNC_1(VAR_6, "nochunk", 7)) {
   VAR_6 += FUNC_0("nochunk");
   VAR_1 = -1UL;
  }

  if (!FUNC_1(VAR_6, "novamap", 7)) {
   VAR_6 += FUNC_0("novamap");
   VAR_3 = 1;
  }


  while (*VAR_6 && *VAR_6 != ' ' && *VAR_6 != ',')
   VAR_6++;

  if (*VAR_6 == ',')
   VAR_6++;
 }

 return VAR_0;
}
