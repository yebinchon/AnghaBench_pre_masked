
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* pfile_in_zip_read; } ;
typedef TYPE_1__ unz_s ;
typedef int * unzFile ;
struct TYPE_4__ {scalar_t__ rest_read_uncompressed; } ;
typedef TYPE_2__ file_in_zip_read_info_s ;


 int VAR_0 ;

extern int FUNC_0 (unzFile VAR_1)
{
 unz_s* VAR_2;
 file_in_zip_read_info_s* VAR_3;
 if (VAR_1==((void*)0))
  return VAR_0;
 VAR_2=(unz_s*)VAR_1;
    VAR_3=VAR_2->pfile_in_zip_read;

 if (VAR_3==((void*)0))
  return VAR_0;

 if (VAR_3->rest_read_uncompressed == 0)
  return 1;
 else
  return 0;
}
