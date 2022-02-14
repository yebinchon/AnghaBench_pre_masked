
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {scalar_t__ iov_len; int iov_base; } ;
typedef int ssize_t ;


 size_t FUNC_0 (struct iovec const*,int) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 void* FUNC_2 (void*,size_t) ;

ssize_t
FUNC_3(const struct iovec *VAR_0, int VAR_1, void **VAR_2)
{
 size_t VAR_3, VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 *VAR_2 = FUNC_2(*VAR_2, VAR_4);
 if (*VAR_2 == ((void*)0))
  return (-1);

 for (VAR_5 = 0, VAR_3 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_1(*VAR_2 + VAR_3, VAR_0[VAR_5].iov_base, VAR_0[VAR_5].iov_len);
  VAR_3 += VAR_0[VAR_5].iov_len;
 }

 return (VAR_4);
}
