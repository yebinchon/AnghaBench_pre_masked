
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw_message {int total_bytes; } ;
struct iovec {int dummy; } ;
struct connection {scalar_t__ status; int flags; int write_low_watermark; int fd; TYPE_1__* type; scalar_t__ crypto; struct raw_message out; struct raw_message out_p; } ;
struct TYPE_2__ {scalar_t__ (* crypto_encrypt_output ) (struct connection*) ;int (* ready_to_write ) (struct connection*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct raw_message*,int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct connection*) ;
 int FUNC_5 (struct connection*) ;
 scalar_t__ FUNC_6 (struct connection*) ;
 int FUNC_7 (struct iovec*,int*,int,struct raw_message*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int,struct iovec*,int) ;

int FUNC_9 (struct connection *VAR_8) {
  int VAR_9, VAR_10, VAR_11 = 0, VAR_12;

  FUNC_0 (VAR_8->status != VAR_4);

  if (VAR_8->crypto) {
    FUNC_0 (VAR_8->type->crypto_encrypt_output (VAR_8) >= 0);
  }

  struct raw_message *VAR_13 = VAR_8->crypto ? &VAR_8->out_p : &VAR_8->out;
  do {
    VAR_12 = (VAR_13->total_bytes >= VAR_8->write_low_watermark);
    while ((VAR_8->flags & VAR_3) != 0) {

      VAR_10 = VAR_13->total_bytes;
      if (!VAR_10) {
        VAR_8->flags &= ~VAR_3;
        break;
      }

      if (VAR_8->flags & VAR_1) {
        break;
      }

      static struct iovec VAR_14[64];
      int VAR_15 = -1;

      VAR_10 = FUNC_7 (VAR_14, &VAR_15, 64, VAR_13);
      FUNC_0 (VAR_15 > 0 && VAR_10 > 0);

      VAR_9 = FUNC_8 (VAR_8->fd, VAR_14, VAR_15);

      if (VAR_7 > 0) {
        FUNC_1 (VAR_6, "send/writev() to %d: %d written out of %d in %d chunks\n", VAR_8->fd, VAR_9, VAR_10, VAR_15);
        if (VAR_9 < 0) {
          FUNC_2 ("send()");
        }
      }

      if (VAR_9 > 0) {
        FUNC_3 (VAR_13, 0, VAR_9);
        VAR_11 += VAR_9;
      }

      if (VAR_9 < VAR_10) {
        VAR_8->flags |= VAR_1;
      }

    }

    if (VAR_11) {
      if (VAR_12 && VAR_13->total_bytes < VAR_8->write_low_watermark && VAR_8->type->ready_to_write) {
        VAR_8->type->ready_to_write (VAR_8);
        VAR_11 = 0;
        if (VAR_8->crypto) {
          FUNC_0 (VAR_8->type->crypto_encrypt_output (VAR_8) >= 0);
        }
        if (VAR_13->total_bytes > 0) {
          VAR_8->flags |= VAR_3;
        }
      }
    }
  } while ((VAR_8->flags & (VAR_3 | VAR_1)) == VAR_3);

  if (VAR_13->total_bytes) {
    VAR_8->flags &= ~VAR_2;
  } else if (VAR_8->status != VAR_5 && !(VAR_8->flags & VAR_0)) {
    VAR_8->flags |= VAR_2;
  }

  return VAR_13->total_bytes;
}
