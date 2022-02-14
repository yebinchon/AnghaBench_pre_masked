
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_buf ;
struct TYPE_2__ {int error_buf; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(int VAR_1, char *VAR_2)
{
 git_buf *VAR_3 = &VAR_0->error_buf;

 FUNC_1(VAR_3);
 if (VAR_2) {
  FUNC_2(VAR_3, VAR_2);
  FUNC_0(VAR_2);
 }

 FUNC_3(VAR_1);
}
