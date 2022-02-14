
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (char*,void*,size_t) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,void*,size_t) ;

ssize_t FUNC_5(unsigned long VAR_3, char *VAR_4,
    size_t VAR_5, unsigned long VAR_6,
    int VAR_7)
{
 void *VAR_8;

 if (!VAR_5)
  return 0;

 VAR_8 = FUNC_2(FUNC_0(VAR_3), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 if (VAR_7) {
  if (FUNC_1(VAR_4, VAR_8 + VAR_6, VAR_5)) {
   FUNC_3(VAR_8);
   return -VAR_0;
  }
 } else {
  FUNC_4(VAR_4, VAR_8 + VAR_6, VAR_5);
 }

 FUNC_3(VAR_8);
 return VAR_5;
}
