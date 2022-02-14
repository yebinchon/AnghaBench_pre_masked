
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct checkout {scalar_t__ force; int base_dir_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int,int ) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(const char *VAR_2, int VAR_3,
          const struct checkout *VAR_4)
{
 char *VAR_5 = FUNC_5(VAR_3);
 int VAR_6 = 0;

 while (VAR_6 < VAR_3) {
  do {
   VAR_5[VAR_6] = VAR_2[VAR_6];
   VAR_6++;
  } while (VAR_6 < VAR_3 && VAR_2[VAR_6] != '/');
  if (VAR_6 >= VAR_3)
   break;
  VAR_5[VAR_6] = 0;
  if (FUNC_2(VAR_5, VAR_6, VAR_4->base_dir_len))
   continue;







  if (FUNC_3(VAR_5, 0777)) {
   if (VAR_1 == VAR_0 && VAR_4->force &&
       !FUNC_4(VAR_5) && !FUNC_3(VAR_5, 0777))
    continue;
   FUNC_0("cannot create directory at '%s'", VAR_5);
  }
 }
 FUNC_1(VAR_5);
}
