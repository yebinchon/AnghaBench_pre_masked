
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cd_list_entry {unsigned int cd_flags; int * id_firmware; scalar_t__ id_model; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct cd_list_entry* VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char*,int *) ;

__attribute__((used)) static unsigned int FUNC_2(u16 *VAR_3)
{
 const struct cd_list_entry *VAR_4 = VAR_2;

 while (VAR_4->id_model) {
  if (FUNC_0(VAR_4->id_model, (char *)&VAR_3[VAR_1]) == 0 &&
      (VAR_4->id_firmware == ((void*)0) ||
       FUNC_1((char *)&VAR_3[VAR_0], VAR_4->id_firmware)))
   return VAR_4->cd_flags;
  VAR_4++;
 }

 return 0;
}
