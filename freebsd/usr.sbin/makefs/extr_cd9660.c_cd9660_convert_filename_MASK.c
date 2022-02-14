
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int isoLevel; } ;
typedef TYPE_1__ iso9660_disk ;
typedef int (* cd9660_filename_conversion_functor ) (TYPE_1__*,char const*,char*,int) ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char const*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char const*,char*,int) ;

__attribute__((used)) static int
FUNC_4(iso9660_disk *VAR_0, const char *VAR_1,
    char *VAR_2, int VAR_3)
{
 FUNC_0(1 <= VAR_0->isoLevel && VAR_0->isoLevel <= 2);

 cd9660_filename_conversion_functor VAR_4 = ((void*)0);
 if (VAR_0->isoLevel == 1)
  VAR_4 = &FUNC_1;
 else if (VAR_0->isoLevel == 2)
  VAR_4 = &FUNC_2;
 return (*VAR_4)(VAR_0, VAR_1, VAR_2, VAR_3);
}
