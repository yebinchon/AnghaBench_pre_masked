
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floppy_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct floppy_struct** VAR_2 ;
 struct floppy_struct* VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(int VAR_4, int VAR_5, struct floppy_struct **VAR_6)
{
 if (VAR_5)
  *VAR_6 = &VAR_3[VAR_5];
 else {
  if (FUNC_0(VAR_4))
   return -VAR_0;
  if (FUNC_1(0, 0) == -VAR_0)
   return -VAR_0;
  FUNC_2();
  *VAR_6 = VAR_2[VAR_4];
 }
 if (!*VAR_6)
  return -VAR_1;
 return 0;
}
