
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int *,int *,int *,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char*,unsigned long) ;

__attribute__((used)) static void
FUNC_8(int VAR_2, char *VAR_3, unsigned long VAR_4)
{
 fd_set VAR_5;
 int VAR_6;

 while (VAR_4) {
  FUNC_1(&VAR_5);
  FUNC_0(VAR_2, &VAR_5);
  VAR_6 = FUNC_5(VAR_2+1, ((void*)0), &VAR_5, ((void*)0), ((void*)0));
  if (VAR_6 < 0)
   FUNC_2(1, "select failed");
  if (VAR_6 != 1) {
   FUNC_3(1, "select returned unexpected value %d\n", VAR_6);
   FUNC_4(1);
  }
  VAR_6 = FUNC_7(VAR_2, VAR_3, VAR_4);
  if (VAR_6 < 0) {
   if (VAR_1 != VAR_0)
    FUNC_6("write failed");
   FUNC_4(1);
  }
  VAR_3 += VAR_6;
  VAR_4 -= VAR_6;
 }
}
