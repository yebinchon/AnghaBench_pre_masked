
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 void* FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (char*,void*,size_t) ;
 int FUNC_2 (char*,void*,size_t) ;

ssize_t
FUNC_3(unsigned long VAR_2, char *VAR_3,
  size_t VAR_4, unsigned long VAR_5, int VAR_6)
{
 void *VAR_7;

 if (!VAR_4)
  return 0;
 VAR_7 = FUNC_0(VAR_2<<VAR_1);
 if (VAR_6) {
  if (FUNC_1(VAR_3, (VAR_7 + VAR_5), VAR_4)) {
   return -VAR_0;
  }
 } else
  FUNC_2(VAR_3, (VAR_7 + VAR_5), VAR_4);
 return VAR_4;
}
