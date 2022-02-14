
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int*,int,char*,size_t*,int *,int ) ;
 int FUNC_4 (int ,char*) ;

int
FUNC_5(u_char **VAR_6)
{

 if (VAR_5 == ((void*)0)) {
  int VAR_7[2] = { VAR_0, VAR_1 };
  char *VAR_8;
  size_t VAR_9 = 0;


  if (FUNC_3(VAR_7, 2, ((void*)0), &VAR_9, ((void*)0), 0) != 0) {
   FUNC_4(VAR_2,
       "sysctl({CTL_KERN,KERN_BOOTFILE}) failed: %m");
   return (VAR_3);
  }

  if ((VAR_8 = FUNC_2(VAR_9)) == ((void*)0)) {
   FUNC_4(VAR_2, "malloc failed");
   return (VAR_3);
  }
  if (FUNC_3(VAR_7, 2, VAR_8, &VAR_9, ((void*)0), 0)) {
   FUNC_4(VAR_2,
       "sysctl({CTL_KERN,KERN_BOOTFILE}) failed: %m");
   FUNC_1(VAR_8);
   return (VAR_3);
  }

  VAR_5 = VAR_8;
  FUNC_0("kernel boot file: %s", VAR_5);
 }

 *VAR_6 = VAR_5;
 return (VAR_4);
}
