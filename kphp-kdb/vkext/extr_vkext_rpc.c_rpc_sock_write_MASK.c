
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {scalar_t__ sfd; scalar_t__ out_bytes; scalar_t__ out_rptr; scalar_t__ out_wptr; scalar_t__ out_buf; } ;
struct pollfd {scalar_t__ fd; int events; } ;
struct iovec {scalar_t__ iov_base; scalar_t__ iov_len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (double) ;
 scalar_t__ FUNC_5 (struct pollfd*,int,int) ;
 int FUNC_6 (struct rpc_server*) ;
 int FUNC_7 (struct rpc_server*,int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (scalar_t__,struct iovec*,int) ;

__attribute__((used)) static int FUNC_10 (struct rpc_server *VAR_5, double VAR_6, char *VAR_7, int VAR_8, int VAR_9) {
  FUNC_0 (VAR_4);
  FUNC_2 (VAR_4);
  if (VAR_5->sfd < 0) {
    FUNC_1 (VAR_4);
    return -1;
  }
  int VAR_10 = 0;
  int VAR_11 = 1;

  struct pollfd VAR_12;
  VAR_12.fd = VAR_5->sfd;
  VAR_12.events = VAR_0;
  static struct iovec VAR_13[3];
  int VAR_14, VAR_15;
  if (VAR_5->out_bytes) {
    if (VAR_5->out_bytes != VAR_1 && VAR_5->out_rptr <= VAR_5->out_wptr) {
      VAR_14 = 1;
      VAR_13[1].iov_base = VAR_5->out_rptr;
      VAR_13[1].iov_len = VAR_5->out_wptr - VAR_5->out_rptr;
    } else {
      VAR_14 = 0;
      VAR_13[0].iov_base = VAR_5->out_rptr;
      VAR_13[0].iov_len = VAR_5->out_buf + VAR_1 - VAR_5->out_rptr;
      VAR_13[1].iov_base = VAR_5->out_buf;
      VAR_13[1].iov_len = VAR_5->out_wptr - VAR_5->out_buf;
    }
  } else {
    VAR_14 = 2;
  }
  if (VAR_7 && VAR_8) {
    VAR_15 = 3;
    VAR_13[2].iov_base = VAR_7;
    VAR_13[2].iov_len = VAR_8;
  } else {
    VAR_15 = 2;
  }
  if (!(VAR_15 - VAR_14)) {
    FUNC_1 (VAR_4);
    return 0;
  }
  int VAR_16 = 0;
  do {
    if (FUNC_5 (&VAR_12, 1, VAR_16) <= 0) {
      if (VAR_11) {
        VAR_11 = 0;
        continue;
      }
      FUNC_1 (VAR_4);
      return VAR_10;
    }
    VAR_11 = 0;
    FUNC_0 (VAR_3);
    int VAR_17 = FUNC_9 (VAR_5->sfd, VAR_13 + VAR_14, VAR_15 - VAR_14);
    if (VAR_17 < 0) {
      FUNC_7 (VAR_5, FUNC_8 (VAR_2), VAR_2);
      FUNC_6 (VAR_5);
      FUNC_1 (VAR_4);
      return -1;
    }
    VAR_10 += VAR_17;
    if (VAR_17 && VAR_14 == 0) {
      if (VAR_17 >= VAR_13[0].iov_len) {
        VAR_17 -= VAR_13[0].iov_len;
        VAR_5->out_rptr = VAR_5->out_buf;
        VAR_5->out_bytes -= VAR_13[0].iov_len;
        VAR_14 ++;
      } else {
        VAR_13[0].iov_len -= VAR_17;
        VAR_13[0].iov_base += VAR_17;
        VAR_5->out_rptr += VAR_17;
        VAR_5->out_bytes -= VAR_17;
        VAR_17 = 0;
      }
    }
    if (VAR_17 && VAR_14 == 1) {
      if (VAR_17 >= VAR_13[1].iov_len) {
        VAR_17 -= VAR_13[1].iov_len;
        VAR_5->out_rptr = VAR_5->out_wptr = VAR_5->out_buf;
        VAR_5->out_bytes = 0;
        VAR_14 ++;
      } else {
        VAR_13[1].iov_len -= VAR_17;
        VAR_13[1].iov_base += VAR_17;
        VAR_5->out_rptr += VAR_17;
        VAR_5->out_bytes -= VAR_17;
        VAR_17 = 0;
      }
    }
    if (VAR_17 && VAR_14 == 2) {
      if (VAR_17 >= VAR_13[2].iov_len) {
        FUNC_3 (VAR_17 == VAR_13[2].iov_len);


        break;
      } else {


        VAR_13[2].iov_len -= VAR_17;
        VAR_13[2].iov_base += VAR_17;
      }
    }
  } while (VAR_10 < VAR_9 && VAR_14 < VAR_15 && (VAR_16 = FUNC_4 (VAR_6)));
  FUNC_1 (VAR_4);
  return VAR_10;
}
