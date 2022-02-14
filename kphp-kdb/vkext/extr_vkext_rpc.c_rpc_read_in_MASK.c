
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int in_bytes; scalar_t__ in_pos; scalar_t__ in_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4 (struct rpc_server *VAR_1, char *VAR_2, int VAR_3, double VAR_4) {
  FUNC_0 (VAR_0);
  FUNC_2 (VAR_0);
  if (VAR_3 <= VAR_1->in_bytes) {
    FUNC_3 (VAR_2, VAR_1->in_buf + VAR_1->in_pos, VAR_3);
    VAR_1->in_pos += VAR_3;
    VAR_1->in_bytes -= VAR_3;
    FUNC_1 (VAR_0);
    return VAR_3;
  } else {
    FUNC_3 (VAR_2, VAR_1->in_buf + VAR_1->in_pos, VAR_1->in_bytes);
    int VAR_5 = VAR_1->in_bytes;
    VAR_1->in_pos = 0;
    VAR_1->in_bytes = 0;
    FUNC_1 (VAR_0);
    return VAR_5;
  }
}
