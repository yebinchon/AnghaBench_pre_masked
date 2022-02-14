
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(BIO * VAR_2) {
  int VAR_3;
  char VAR_4[1024];
  BIO * VAR_5 = FUNC_1(VAR_1, VAR_0);

  FUNC_2(VAR_2, "GET / HTTP/1.0\n\n");
  for(;;) {
   VAR_3 = FUNC_3(VAR_2, VAR_4, 1024);
   if(VAR_3 <= 0) break;
  FUNC_4(VAR_5, VAR_4, VAR_3);
  }
  FUNC_0(VAR_5);
}
