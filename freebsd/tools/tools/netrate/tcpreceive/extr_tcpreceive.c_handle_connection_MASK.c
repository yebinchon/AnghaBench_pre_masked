
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int *,int,int ) ;
 scalar_t__ FUNC_3 (int,int *,scalar_t__,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(int VAR_1)
{
 u_char VAR_2[VAR_0];
 ssize_t VAR_3, VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, ((void*)0), ((void*)0));
 if (VAR_6 < 0) {
  FUNC_4("accept");
  return;
 }

 while (1) {
  VAR_4 = FUNC_2(VAR_6, VAR_2, VAR_0, 0);
  if (VAR_4 < 0 || VAR_4 == 0) {
   FUNC_1(VAR_6);
   return;
  }
  VAR_5 = 0;
  while (VAR_5 < VAR_4) {
   VAR_3 = FUNC_3(VAR_6, VAR_2 + VAR_5, VAR_4 - VAR_5, 0);
   if (VAR_3 < 0) {
    FUNC_1(VAR_6);
    return;
   }
   VAR_5 += VAR_3;
  }
 }
}
