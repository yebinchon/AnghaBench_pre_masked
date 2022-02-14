
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ avail_in; scalar_t__ total_out; scalar_t__ zfree; scalar_t__ zalloc; void* avail_out; int * next_out; int * next_in; } ;
typedef TYPE_1__ z_stream ;
typedef scalar_t__ uLongf ;
typedef scalar_t__ uLong ;
typedef void* uInt ;
typedef scalar_t__ free_func ;
typedef scalar_t__ alloc_func ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3 (Bytef *VAR_6, uLongf *VAR_7, const Bytef *VAR_8, uLong VAR_9) {
  z_stream VAR_10;
  int VAR_11;
  VAR_10.next_in = (Bytef*) VAR_8;
  VAR_10.avail_in = (uInt) VAR_9;

  if ((uLong)VAR_10.avail_in != VAR_9) return VAR_0;
  VAR_10.next_out = VAR_6;
  VAR_10.avail_out = (uInt) *VAR_7;
  if ((uLong)VAR_10.avail_out != *VAR_7) return VAR_0;
  VAR_10.zalloc = (alloc_func) 0;
  VAR_10.zfree = (free_func) 0;

  VAR_11 = FUNC_2 (&VAR_10, 15 + 32);
  if (VAR_11 != VAR_4) {
    return VAR_11;
  }

  VAR_11 = FUNC_0 (&VAR_10, VAR_2);
  if (VAR_11 != VAR_5) {
    FUNC_1 (&VAR_10);
    if (VAR_11 == VAR_3 || (VAR_11 == VAR_0 && VAR_10.avail_in == 0)) {
      return VAR_1;
    }
    return VAR_11;
  }
  *VAR_7 = VAR_10.total_out;

  VAR_11 = FUNC_1 (&VAR_10);
  return VAR_11;
}
