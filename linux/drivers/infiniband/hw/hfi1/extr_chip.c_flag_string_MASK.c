
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct flag_table {int flag; char* str; } ;
typedef int extra ;


 int FUNC_0 (char*,char**,int*,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, int VAR_1, u64 VAR_2,
    struct flag_table *VAR_3, int VAR_4)
{
 char VAR_5[32];
 char *VAR_6 = VAR_0;
 int VAR_7 = VAR_1;
 int VAR_8 = 0;
 int VAR_9;


 if (VAR_7 < 2)
  return "";

 VAR_7--;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (VAR_2 & VAR_3[VAR_9].flag) {
   VAR_8 = FUNC_0(VAR_0, &VAR_6, &VAR_7, VAR_3[VAR_9].str);
   if (VAR_8)
    break;
   VAR_2 &= ~VAR_3[VAR_9].flag;
  }
 }


 if (!VAR_8 && VAR_2) {
  FUNC_1(VAR_5, sizeof(VAR_5), "bits 0x%llx", VAR_2);
  VAR_8 = FUNC_0(VAR_0, &VAR_6, &VAR_7, VAR_5);
 }


 if (VAR_8) {

  if (VAR_7 == 0)
   --VAR_6;
  *VAR_6++ = '*';
 }


 *VAR_6 = 0;
 return VAR_0;
}
