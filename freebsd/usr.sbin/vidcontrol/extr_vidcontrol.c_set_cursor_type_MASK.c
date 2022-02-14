
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cshape {int* shape; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int ,struct cshape*) ;
 int FUNC_2 (char*,struct cshape*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(char *VAR_2)
{
 struct cshape VAR_3;


 VAR_3.shape[0] = 0;
 VAR_3.shape[1] = -1;
 VAR_3.shape[2] = -1;
 FUNC_2(VAR_2, &VAR_3);


 if (FUNC_1(0, VAR_0, &VAR_3) != 0) {
  FUNC_3();
  FUNC_0(1, "ioctl(CONS_GETCURSORSHAPE)");
 }

 FUNC_2(VAR_2, &VAR_3);
 if (FUNC_1(0, VAR_1, &VAR_3) != 0) {
  FUNC_3();
  FUNC_0(1, "ioctl(CONS_SETCURSORSHAPE)");
 }
}
