
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int* VAR_2 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(unsigned int *VAR_3, int *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if ((*VAR_3 & 0xffff) == (VAR_2[VAR_5] & 0xffff)) {
   *VAR_4 = FUNC_1(*VAR_3);
   *VAR_3 = VAR_2[VAR_5];
   if (*VAR_4 > FUNC_1(*VAR_3)) {
    FUNC_2("ioctl not yet supported\n");
    return -VAR_0;
   }
   return 0;
  }
 }
 return -VAR_1;
}
