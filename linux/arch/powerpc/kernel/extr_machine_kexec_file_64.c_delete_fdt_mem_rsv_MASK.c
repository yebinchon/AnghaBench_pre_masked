
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int,unsigned long*,unsigned long*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*) ;

int FUNC_4(void *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = FUNC_2(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  uint64_t VAR_8, VAR_9;

  VAR_6 = FUNC_1(VAR_2, VAR_5, &VAR_8, &VAR_9);
  if (VAR_6) {
   FUNC_3("Malformed device tree.\n");
   return -VAR_0;
  }

  if (VAR_8 == VAR_3 && VAR_9 == VAR_4) {
   VAR_6 = FUNC_0(VAR_2, VAR_5);
   if (VAR_6) {
    FUNC_3("Error deleting device tree reservation.\n");
    return -VAR_0;
   }

   return 0;
  }
 }

 return -VAR_1;
}
