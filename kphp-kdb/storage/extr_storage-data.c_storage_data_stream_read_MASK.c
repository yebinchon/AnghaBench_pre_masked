
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct storage_data_stream {scalar_t__ bytes_read; scalar_t__ size; scalar_t__ fd; long long ptr; } ;


 int VAR_0 ;
 int FUNC_0 (void*,long long,long long) ;
 long long FUNC_1 (scalar_t__,void*,long long) ;
 int FUNC_2 (int,char*,long long) ;

__attribute__((used)) static int FUNC_3 (struct storage_data_stream *VAR_1, void *VAR_2, long long VAR_3) {
  FUNC_2 (4, "storage_data_stream_read (len: %lld)\n", VAR_3);
  if (VAR_3 + VAR_1->bytes_read > VAR_1->size) {
    return VAR_0;
  }
  if (VAR_1->fd >= 0) {
    if (FUNC_1 (VAR_1->fd, VAR_2, VAR_3) != VAR_3) {
      return VAR_0;
    }
  } else {
    FUNC_0 (VAR_2, VAR_1->ptr, VAR_3);
    VAR_1->ptr += VAR_3;
  }
  VAR_1->bytes_read += VAR_3;
  return 0;
}
