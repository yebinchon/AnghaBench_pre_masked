
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {size_t iov_len; void* iov_base; } ;
typedef int ssize_t ;


 int FUNC_0 (int,struct iovec*,int,int ) ;

__attribute__((used)) static ssize_t
FUNC_1(int VAR_0, void *VAR_1, size_t VAR_2)
{
 struct iovec VAR_3;

 VAR_3.iov_base = VAR_1;
 VAR_3.iov_len = VAR_2;
 return (FUNC_0(VAR_0, &VAR_3, 1, 0));
}
