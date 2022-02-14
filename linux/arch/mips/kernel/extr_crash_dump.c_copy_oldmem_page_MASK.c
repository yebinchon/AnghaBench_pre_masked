
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__,void*) ;
 scalar_t__ FUNC_1 (char*,scalar_t__,size_t) ;
 scalar_t__ VAR_1 ;
 void* FUNC_2 (unsigned long) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,void*,size_t) ;
 int FUNC_5 (char*) ;

ssize_t FUNC_6(unsigned long VAR_2, char *VAR_3,
    size_t VAR_4, unsigned long VAR_5, int VAR_6)
{
 void *VAR_7;

 if (!VAR_4)
  return 0;

 VAR_7 = FUNC_2(VAR_2);

 if (!VAR_6) {
  FUNC_4(VAR_3, (VAR_7 + VAR_5), VAR_4);
  FUNC_3(VAR_7);
 } else {
  if (!VAR_1) {
   FUNC_5("Kdump: Kdump buffer page not allocated\n");

   return -VAR_0;
  }
  FUNC_0(VAR_1, VAR_7);
  FUNC_3(VAR_7);
  if (FUNC_1(VAR_3, (VAR_1 + VAR_5), VAR_4))
   return -VAR_0;
 }

 return VAR_4;
}
