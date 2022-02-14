
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * file_name; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_2;

 if (VAR_1 == ((void*)0)) {
  FUNC_0("no %s specified", "output file");
  return -1;
 }

 if (VAR_0.file_name == ((void*)0)) {
  FUNC_0("no %s specified", "input file");
  return -1;
 }

 VAR_2 = FUNC_1(&VAR_0);
 if (VAR_2)
  return VAR_2;

 return 0;
}
