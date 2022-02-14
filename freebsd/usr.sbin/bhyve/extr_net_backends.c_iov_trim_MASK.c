
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {unsigned int iov_len; void* iov_base; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static __inline struct iovec *
FUNC_1(struct iovec *VAR_0, int *VAR_1, unsigned int VAR_2)
{
 struct iovec *VAR_3;


 FUNC_0(VAR_0[0].iov_len >= VAR_2);

 VAR_0[0].iov_len -= VAR_2;
 if (VAR_0[0].iov_len == 0) {
  FUNC_0(*VAR_1 > 1);
  *VAR_1 -= 1;
  VAR_3 = &VAR_0[1];
 } else {
  VAR_0[0].iov_base = (void *)((uintptr_t)VAR_0[0].iov_base + VAR_2);
  VAR_3 = &VAR_0[0];
 }

 return (VAR_3);
}
