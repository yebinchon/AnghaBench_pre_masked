
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (size_t,size_t,char*) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (char*,int *,int *,int *,int ) ;
 size_t FUNC_5 () ;

__attribute__((used)) static void *
FUNC_6(void *VAR_3) {
 unsigned VAR_4 = *(unsigned *)VAR_3;
 size_t VAR_5, VAR_6;
 unsigned VAR_7, VAR_8;

 VAR_7 = 0;
 VAR_5 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  void *VAR_9 = FUNC_0(VAR_4, VAR_8);
  FUNC_3(VAR_9, 0);
  if (VAR_8 % VAR_1 == 0) {
   FUNC_1(FUNC_4("prof.dump", ((void*)0), ((void*)0), ((void*)0), 0),
       0, "Unexpected error while dumping heap profile");
  }

  if (VAR_8 % VAR_0 == 0 ||
      VAR_8+1 == VAR_2) {
   VAR_6 = FUNC_5();
   FUNC_2(VAR_5+(VAR_8-VAR_7), VAR_6,
       "Expected larger backtrace count increase");
   VAR_7 = VAR_8;
   VAR_5 = VAR_6;
  }
 }

 return ((void*)0);
}
