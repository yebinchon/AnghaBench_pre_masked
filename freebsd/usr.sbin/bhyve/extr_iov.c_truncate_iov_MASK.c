
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {size_t iov_len; } ;


 size_t FUNC_0 (size_t,size_t) ;

void
FUNC_1(struct iovec *VAR_0, int *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < *VAR_1; VAR_4++) {
  size_t VAR_5 = FUNC_0(VAR_2 - VAR_3, VAR_0[VAR_4].iov_len);
  VAR_3 += VAR_5;

  if (VAR_5 <= VAR_0[VAR_4].iov_len) {
   VAR_0[VAR_4].iov_len = VAR_5;
   *VAR_1 = VAR_4 + 1;
   return;
  }
 }
}
