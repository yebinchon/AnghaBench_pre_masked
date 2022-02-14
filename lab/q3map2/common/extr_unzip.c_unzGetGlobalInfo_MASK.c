
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gi; } ;
typedef TYPE_1__ unz_s ;
typedef int unz_global_info ;
typedef int * unzFile ;


 int VAR_0 ;
 int VAR_1 ;

extern int FUNC_0 (unzFile VAR_2,unz_global_info *VAR_3)
{
 unz_s* VAR_4;
 if (VAR_2==((void*)0))
  return VAR_1;
 VAR_4=(unz_s*)VAR_2;
 *VAR_3=VAR_4->gi;
 return VAR_0;
}
