
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int dummy; } ;
struct iov_iter {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 size_t FUNC_1 (struct iov_iter*) ;
 size_t FUNC_2 (size_t,struct iov_iter*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct kiocb *VAR_4, struct iov_iter *VAR_5)
{
 size_t VAR_6 = 0;

 while (FUNC_1(VAR_5)) {
  size_t VAR_7 = FUNC_1(VAR_5), VAR_8;

  if (VAR_7 > VAR_2)
   VAR_7 = VAR_2;
  VAR_8 = FUNC_2(VAR_7, VAR_5);
  if (!VAR_8 && FUNC_1(VAR_5))
   return VAR_6 ? VAR_6 : -VAR_0;
  VAR_6 += VAR_8;
  if (FUNC_3(VAR_3))
   return VAR_6 ? VAR_6 : -VAR_1;
  FUNC_0();
 }
 return VAR_6;
}
