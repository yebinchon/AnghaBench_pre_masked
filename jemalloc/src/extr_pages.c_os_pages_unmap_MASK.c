
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 void* FUNC_0 (void*,int ) ;
 size_t FUNC_1 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (void*,size_t) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9(void *VAR_4, size_t VAR_5) {
 FUNC_4(FUNC_0(VAR_4, VAR_3) == VAR_4);
 FUNC_4(FUNC_1(VAR_5, VAR_3) == VAR_5);




 if (FUNC_8(VAR_4, VAR_5) == -1)

 {
  char VAR_6[VAR_0];

  FUNC_5(FUNC_6(), VAR_6, sizeof(VAR_6));
  FUNC_7("<jemalloc>: Error in "



      "munmap"

      "(): %s\n", VAR_6);
  if (VAR_2) {
   FUNC_3();
  }
 }
}
