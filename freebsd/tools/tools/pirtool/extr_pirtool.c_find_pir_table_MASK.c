
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int major; scalar_t__ minor; int size; } ;
typedef TYPE_1__ pir_table_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned char*,char*,int) ;

pir_table_t *
FUNC_2(unsigned char *VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned char *VAR_4, *VAR_5;
 pir_table_t *VAR_6 = ((void*)0);
 VAR_5 = VAR_2 + VAR_0;
 for (VAR_4 = VAR_2; VAR_4 < VAR_5; VAR_4 += 16) {
  if (FUNC_1(VAR_4, "$PIR", 4) == 0) {
   VAR_6 = (pir_table_t *)VAR_4;
   break;
  }
 }







 if (VAR_6 && (VAR_6->major == 1) && (VAR_6->minor == 0) &&
     (VAR_6->size > 32) && ((VAR_6->size % 16) == 0)) {
  VAR_4 = (unsigned char *)VAR_6;
  VAR_5 = VAR_4 + VAR_6->size;

  while (VAR_4 < VAR_5)
   VAR_3 += *VAR_4++;

  if ((VAR_3 % 256) != 0)
   FUNC_0(VAR_1,
       "WARNING: PIR table checksum is invalid.\n");
 }

 return ((pir_table_t *)VAR_6);
}
