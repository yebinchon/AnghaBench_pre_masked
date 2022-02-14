
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbefifo {int dummy; } ;
struct iov_iter {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct sbefifo*,struct iov_iter*) ;
 int FUNC_1 (struct sbefifo*,int const*,size_t) ;

__attribute__((used)) static int FUNC_2(struct sbefifo *VAR_0,
         const __be32 *VAR_1, size_t VAR_2,
         struct iov_iter *VAR_3)
{

 int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;


 return FUNC_0(VAR_0, VAR_3);
}
