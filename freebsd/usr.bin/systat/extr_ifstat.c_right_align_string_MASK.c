
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ifmd_name; } ;
struct if_stat {char* if_name; TYPE_1__ if_mib; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_3(struct if_stat *VAR_1)
{
 int VAR_2 = 0, VAR_3 = 0;
 char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 if (VAR_1 == ((void*)0) || VAR_1->if_mib.ifmd_name == ((void*)0))
  return;
 else {

  VAR_2 = FUNC_1(VAR_1->if_mib.ifmd_name)+1;
  VAR_3 = VAR_0-(VAR_2);

  VAR_4 = VAR_1->if_name;
  VAR_5 = VAR_4 + VAR_3;
  (void)FUNC_0((void *)VAR_4, (int)' ', VAR_0);
  (void)FUNC_2(VAR_5, (const char *)&VAR_1->if_mib.ifmd_name,
         VAR_2);
 }

 return;
}
