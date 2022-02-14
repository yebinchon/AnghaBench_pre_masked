
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fp; int file_name; } ;
typedef TYPE_1__ file_info_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_9(file_info_t *VAR_5)
{
 int VAR_6;

 while ((VAR_6 = FUNC_4(VAR_5->fp)) != VAR_0) {
  if (VAR_1 != VAR_5 && VAR_2 > 1) {
   if (!VAR_3)
    FUNC_7(VAR_5->file_name, 1);
   VAR_1 = VAR_5;
  }
  if (FUNC_8(VAR_6) == VAR_0)
   FUNC_6();
 }
 (void)FUNC_3(VAR_4);
 if (FUNC_2(VAR_5->fp)) {
  FUNC_1(VAR_5->fp);
  VAR_5->fp = ((void*)0);
  FUNC_5(VAR_5->file_name);
  return 0;
 }
 FUNC_0(VAR_5->fp);
 return 1;
}
