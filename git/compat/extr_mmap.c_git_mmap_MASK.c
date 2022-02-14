
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,int ,size_t) ;
 void* FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int,char*,size_t,scalar_t__) ;

void *FUNC_5(void *VAR_6, size_t VAR_7, int VAR_8, int VAR_9, int VAR_10, off_t VAR_11)
{
 size_t VAR_12 = 0;

 if (VAR_6 != ((void*)0) || VAR_9 != VAR_3 || VAR_8 != VAR_4)
  FUNC_0("Invalid usage of mmap when built with NO_MMAP");

 VAR_6 = FUNC_3(VAR_7);
 if (VAR_6 == ((void*)0)) {
  VAR_5 = VAR_1;
  return VAR_2;
 }

 while (VAR_12 < VAR_7) {
  ssize_t VAR_13 = FUNC_4(VAR_10, (char *)VAR_6 + VAR_12, VAR_7 - VAR_12, VAR_11 + VAR_12);

  if (VAR_13 == 0) {
   FUNC_2((char *)VAR_6+VAR_12, 0, VAR_7-VAR_12);
   break;
  }

  if (VAR_13 < 0) {
   FUNC_1(VAR_6);
   VAR_5 = VAR_0;
   return VAR_2;
  }

  VAR_12 += VAR_13;
 }

 return VAR_6;
}
