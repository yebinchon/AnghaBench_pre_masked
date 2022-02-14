
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*,int,int ,int,int,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void *
FUNC_3(void *VAR_4)
{
 void *VAR_5;
 int VAR_6 = *(int *)VAR_4;

 if ((VAR_5 =
     FUNC_1(0, 8192, VAR_3, VAR_2, VAR_6, 0)) == VAR_0) {
  FUNC_2("mmap");
  FUNC_0(1);
 }
 for (;;) {
  if (FUNC_1(VAR_5, 8192, VAR_3,
      VAR_2|VAR_1, VAR_6, 0) == VAR_0) {
   FUNC_2("mmap");
   FUNC_0(1);
  }
 }

 return ((void *)1);
}
