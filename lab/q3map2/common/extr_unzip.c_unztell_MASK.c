
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* pfile_in_zip_read; } ;
typedef TYPE_2__ unz_s ;
typedef int * unzFile ;
struct TYPE_4__ {scalar_t__ total_out; } ;
struct TYPE_6__ {TYPE_1__ stream; } ;
typedef TYPE_3__ file_in_zip_read_info_s ;


 long VAR_0 ;

extern long FUNC_0 (unzFile VAR_1)
{
 unz_s* VAR_2;
 file_in_zip_read_info_s* VAR_3;
 if (VAR_1==((void*)0))
  return VAR_0;
 VAR_2=(unz_s*)VAR_1;
    VAR_3=VAR_2->pfile_in_zip_read;

 if (VAR_3==((void*)0))
  return VAR_0;

 return (long)VAR_3->stream.total_out;
}
