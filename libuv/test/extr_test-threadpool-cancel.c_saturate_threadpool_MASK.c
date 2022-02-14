
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
typedef int buf ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,unsigned long) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(void) {
  uv_loop_t* VAR_4;
  char VAR_5[64];
  size_t VAR_6;

  FUNC_3(VAR_5,
           sizeof(VAR_5),
           "UV_THREADPOOL_SIZE=%lu",
           (unsigned long)FUNC_0(VAR_1));
  FUNC_2(VAR_5);

  VAR_4 = FUNC_4();
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6 += 1) {
    FUNC_1(0 == FUNC_6(VAR_2 + VAR_6, 0));
    FUNC_1(0 == FUNC_5(VAR_4, VAR_1 + VAR_6, VAR_3, VAR_0));
  }
}
