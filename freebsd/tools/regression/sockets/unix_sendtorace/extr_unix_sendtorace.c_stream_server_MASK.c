
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(int VAR_0)
{
 int VAR_1;

 while (1) {
  VAR_1 = FUNC_0(VAR_0, ((void*)0), ((void*)0));
  if (VAR_1 < 0) {
   FUNC_3("stream_server: accept");
   continue;
  }
  FUNC_2(1);
  FUNC_1(VAR_1);
 }
}
