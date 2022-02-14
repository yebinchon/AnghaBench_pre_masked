
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int file; int * pfile_in_zip_read; } ;
typedef TYPE_1__ unz_s ;
typedef int * unzFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

extern int FUNC_4 (unzFile VAR_3)
{
 unz_s* VAR_4;
 if (VAR_3==((void*)0))
  return VAR_1;
 VAR_4=(unz_s*)VAR_3;

    if (VAR_4->pfile_in_zip_read!=((void*)0))
        FUNC_3(VAR_3);

 if (VAR_2 == 1) {
  FUNC_1(VAR_4->file);
 } else {
  FUNC_0(VAR_4->file);
 }

 FUNC_2(VAR_4);
 return VAR_0;
}
