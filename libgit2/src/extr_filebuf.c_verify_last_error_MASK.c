
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_error; } ;
typedef TYPE_1__ git_filebuf ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(git_filebuf *VAR_2)
{
 switch (VAR_2->last_error) {
 case 129:
  FUNC_0(VAR_0, "failed to write out file");
  return -1;

 case 130:
  FUNC_1();
  return -1;

 case 128:
  FUNC_0(VAR_1,
   "Buffer error when writing out ZLib data");
  return -1;

 default:
  return 0;
 }
}
