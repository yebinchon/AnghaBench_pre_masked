
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {size_t iov_len; char* iov_base; } ;


 size_t FUNC_0 (size_t,size_t) ;

void
FUNC_1(const struct iovec *VAR_0, int VAR_1, struct iovec *VAR_2, int *VAR_3,
    size_t VAR_4)
{
 size_t VAR_5 = 0;
 size_t VAR_6 = VAR_4;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  size_t VAR_9 = FUNC_0(VAR_6, VAR_0[VAR_7].iov_len);
  VAR_6 -= VAR_9;

  if (VAR_9 == VAR_0[VAR_7].iov_len)
   continue;

  if (VAR_6 == 0) {
   VAR_5 = VAR_9;
   break;
  }
 }

 for (VAR_8 = VAR_7; VAR_8 < VAR_1; VAR_8++) {
  VAR_2[VAR_8 - VAR_7].iov_base = (char *)VAR_0[VAR_8].iov_base + VAR_5;
  VAR_2[VAR_8 - VAR_7].iov_len = VAR_0[VAR_8].iov_len - VAR_5;
  VAR_5 = 0;
 }

 *VAR_3 = VAR_8 - VAR_7;
}
