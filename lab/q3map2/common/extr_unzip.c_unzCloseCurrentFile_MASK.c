
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pfile_in_zip_read; } ;
typedef TYPE_1__ unz_s ;
typedef int * unzFile ;
struct TYPE_5__ {scalar_t__ rest_read_uncompressed; scalar_t__ crc32; scalar_t__ crc32_wait; scalar_t__ stream_initialised; int stream; struct TYPE_5__* read_buffer; } ;
typedef TYPE_2__ file_in_zip_read_info_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

extern int FUNC_2 (unzFile VAR_3)
{
 int VAR_4=VAR_1;

 unz_s* VAR_5;
 file_in_zip_read_info_s* VAR_6;
 if (VAR_3==((void*)0))
  return VAR_2;
 VAR_5=(unz_s*)VAR_3;
    VAR_6=VAR_5->pfile_in_zip_read;

 if (VAR_6==((void*)0))
  return VAR_2;
 FUNC_0(VAR_6->read_buffer);
 VAR_6->read_buffer = ((void*)0);
 if (VAR_6->stream_initialised)
  FUNC_1(&VAR_6->stream);

 VAR_6->stream_initialised = 0;
 FUNC_0(VAR_6);

    VAR_5->pfile_in_zip_read=((void*)0);

 return VAR_4;
}
