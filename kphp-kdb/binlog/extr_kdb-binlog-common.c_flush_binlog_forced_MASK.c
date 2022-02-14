
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ log_rptr; scalar_t__ log_wptr; scalar_t__ log_endw; scalar_t__ log_wcrypt_ptr; scalar_t__ log_start; } ;
struct TYPE_6__ {TYPE_1__* info; } ;
struct TYPE_5__ {int file_size; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (TYPE_2__*,int,int,scalar_t__) ;
 int FUNC_3 (char*,int,long long,long long,int ) ;
 long long VAR_10 ;
 long long VAR_11 ;
 long long VAR_12 ;
 long long FUNC_4 (int ,long long,int ) ;
 int VAR_13 ;
 int FUNC_5 () ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (int ,scalar_t__,int) ;

void FUNC_8 (int VAR_16) {
  int VAR_17, VAR_18, VAR_19;
  long long VAR_20;
  if (!VAR_8 || VAR_6) {
    return;
  }
  if (VAR_4.log_rptr == VAR_4.log_wptr) {
    FUNC_6 (VAR_16 * 2);
    return;
  }
  if (VAR_15 > 0) {
    FUNC_1 (VAR_14, "%d flush_binlog()\n", VAR_13);
  }
  if (VAR_4.log_endw) {
    FUNC_0 (VAR_4.log_wptr < VAR_4.log_rptr && VAR_4.log_rptr <= VAR_4.log_endw);
    VAR_18 = VAR_4.log_endw - VAR_4.log_rptr;
    if (VAR_18 > 0) {
      VAR_20 = VAR_11 - VAR_12 + VAR_10;
      FUNC_0 (FUNC_4 (VAR_7, VAR_20, VAR_3) == VAR_20);
      if (VAR_4.log_rptr <= VAR_4.log_wcrypt_ptr && VAR_4.log_wcrypt_ptr < VAR_4.log_endw) {
        VAR_19 = VAR_4.log_endw - VAR_4.log_wcrypt_ptr;
        FUNC_5 ();
        FUNC_2 (VAR_0, VAR_4.log_wcrypt_ptr, VAR_19, VAR_20 + (VAR_4.log_wcrypt_ptr - VAR_4.log_rptr));
        VAR_4.log_wcrypt_ptr = VAR_4.log_start;
      }
      VAR_17 = FUNC_7 (VAR_7, VAR_4.log_rptr, VAR_18);
      if (VAR_17 < 0) {
        FUNC_1 (VAR_14, "error writing %d bytes at %lld (file position %lld) to %d: %m\n", VAR_18, VAR_11, VAR_20, VAR_8);
        return;
      }
      VAR_4.log_rptr += VAR_17;
      if (VAR_0 && !VAR_5) {

        VAR_0->info->file_size += VAR_17;
      }
      VAR_11 += VAR_17;
      if (VAR_17 < VAR_18) {
        return;
      }
    }
    VAR_4.log_rptr = VAR_4.log_start;
    VAR_4.log_endw = 0;
  }
  FUNC_0 (VAR_4.log_rptr <= VAR_4.log_wptr);
  VAR_18 = VAR_4.log_wptr - VAR_4.log_rptr;
  if (VAR_18 > 0) {
    VAR_20 = VAR_11 - VAR_12 + VAR_10;
    FUNC_0 (FUNC_4 (VAR_7, VAR_20, VAR_3) == VAR_20);
    if (VAR_4.log_rptr <= VAR_4.log_wcrypt_ptr && VAR_4.log_wcrypt_ptr < VAR_4.log_wptr) {
      VAR_19 = VAR_4.log_wptr - VAR_4.log_wcrypt_ptr;
      FUNC_5 ();
      FUNC_2 (VAR_0, VAR_4.log_wcrypt_ptr, VAR_19, VAR_20 + (VAR_4.log_wcrypt_ptr - VAR_4.log_rptr));
      VAR_4.log_wcrypt_ptr = VAR_4.log_wptr;
    }
    VAR_17 = FUNC_7 (VAR_7, VAR_4.log_rptr, VAR_18);
    if (VAR_17 < 0) {
      int VAR_21 = VAR_9;
      FUNC_3 ("error writing %d bytes at %lld (file position %lld) to %s: %m\n", VAR_18, VAR_11, VAR_20, VAR_8);
      FUNC_0 (VAR_21 == VAR_2 || VAR_21 == VAR_1);
      return;
    }
    VAR_4.log_rptr += VAR_17;
    if (VAR_0 && !VAR_5) {

      VAR_0->info->file_size += VAR_17;
    }
    VAR_11 += VAR_17;
  }
  FUNC_6 (1 + VAR_16);
}
