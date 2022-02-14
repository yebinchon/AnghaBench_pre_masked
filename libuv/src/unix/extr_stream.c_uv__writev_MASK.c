
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int iov_len; int iov_base; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,struct iovec*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(int VAR_0, struct iovec* VAR_1, size_t VAR_2) {
  if (VAR_2 == 1)
    return FUNC_0(VAR_0, VAR_1->iov_base, VAR_1->iov_len);
  else
    return FUNC_1(VAR_0, VAR_1, VAR_2);
}
