
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int dummy; } ;
struct iov_iter {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct iov_iter*,size_t) ;
 size_t FUNC_1 (struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kiocb *VAR_0, struct iov_iter *VAR_1)
{
 size_t VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_2);
 return VAR_2;
}
