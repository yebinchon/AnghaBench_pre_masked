
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {scalar_t__ sfd; int out_bytes; scalar_t__ out_rptr; scalar_t__ out_wptr; scalar_t__ out_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (struct rpc_server*) ;
 int FUNC_5 (struct rpc_server*,char*,int ) ;
 int FUNC_6 (struct rpc_server*,double,char*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7 (struct rpc_server *VAR_2, char *VAR_3, int VAR_4, double VAR_5) {
  if (VAR_2->sfd < 0) {
    return -1;
  }
  if (!VAR_4) {
    return 0;
  }
  int VAR_6 = VAR_4;
  FUNC_0 (VAR_1);
  FUNC_2 (VAR_1);
  int VAR_7 = VAR_2->out_bytes;
  if (VAR_7 + VAR_4 >= VAR_0) {
    int VAR_8 = FUNC_6 (VAR_2, VAR_5, VAR_3, VAR_4, VAR_7 + VAR_4 - VAR_0 + 1024);
    if (VAR_8 < 0) {
      FUNC_1 (VAR_1);
      return -1;
    }
    if (VAR_8 > VAR_7) {
      VAR_3 += (VAR_8 - VAR_7);
      VAR_4 -= (VAR_8 - VAR_7);
    }
    VAR_7 = VAR_2->out_bytes;
    if (VAR_7 + VAR_4 >= VAR_0) {
      FUNC_5 (VAR_2, "Write timeout", 0);
      FUNC_4 (VAR_2);
      FUNC_1 (VAR_1);
      return -1;
    }
  }
  VAR_2->out_bytes += VAR_4;
  if (VAR_2->out_rptr <= VAR_2->out_wptr) {
    if (VAR_2->out_wptr + VAR_4 <= VAR_2->out_buf + VAR_0) {
      FUNC_3 (VAR_2->out_wptr, VAR_3, VAR_4);
      VAR_2->out_wptr += VAR_4;
      FUNC_1 (VAR_1);
      return VAR_6;
    } else {
      int VAR_9 = VAR_2->out_buf + VAR_0 - VAR_2->out_wptr;
      FUNC_3 (VAR_2->out_wptr, VAR_3, VAR_9);
      FUNC_3 (VAR_2->out_buf, VAR_3 + VAR_9, VAR_4 - VAR_9);
      VAR_2->out_wptr = VAR_2->out_buf + (VAR_4 - VAR_9);
      FUNC_1 (VAR_1);
      return VAR_6;
    }
  } else {
    FUNC_3 (VAR_2->out_wptr, VAR_3, VAR_4);
    VAR_2->out_wptr += VAR_4;
    FUNC_1 (VAR_1);
    return VAR_6;
  }
}
