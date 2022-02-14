
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * file; } ;
typedef TYPE_1__ unz_s ;
typedef int * unzFile ;
typedef int FILE ;


 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int) ;

extern unzFile FUNC_3 (const char* VAR_0, unzFile VAR_1)
{
 unz_s *VAR_2;
 FILE * VAR_3;

    VAR_3=FUNC_0(VAR_0,"rb");
 if (VAR_3==((void*)0))
  return ((void*)0);

 VAR_2=(unz_s*)FUNC_2(sizeof(unz_s));
 FUNC_1(VAR_2, (unz_s*)VAR_1, sizeof(unz_s));

 VAR_2->file = VAR_3;
 return (unzFile)VAR_2;
}
