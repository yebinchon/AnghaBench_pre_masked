
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int total_bytes; } ;
struct iovec {scalar_t__ iov_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct raw_message*,struct iovec*,int,int) ;

int FUNC_2 (struct iovec *VAR_0, int *VAR_1, int VAR_2, struct raw_message *VAR_3) {
  int VAR_4 = FUNC_1 (VAR_3, VAR_0, VAR_2, VAR_3->total_bytes);
  if (VAR_4 < 0) {
    *VAR_1 = VAR_2;
    int VAR_5;
    VAR_4 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
      VAR_4 += VAR_0[VAR_5].iov_len;
    }
    FUNC_0 (VAR_4 < VAR_3->total_bytes);
    return VAR_4;
  } else {
    *VAR_1 = VAR_4;
    return VAR_3->total_bytes;
  }
}
