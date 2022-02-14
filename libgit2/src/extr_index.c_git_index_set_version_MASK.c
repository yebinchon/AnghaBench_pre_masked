
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int version; } ;
typedef TYPE_1__ git_index ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(git_index *VAR_3, unsigned int VAR_4)
{
 FUNC_0(VAR_3);

 if (VAR_4 < VAR_1 ||
     VAR_4 > VAR_2) {
  FUNC_1(VAR_0, "invalid version number");
  return -1;
 }

 VAR_3->version = VAR_4;

 return 0;
}
