
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_kfifo {int kf; } ;
struct __kfifo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct __kfifo*,unsigned int,size_t,int ) ;
 size_t FUNC_1 (unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct iio_kfifo *VAR_3,
   size_t VAR_4, unsigned int VAR_5)
{
 if ((VAR_5 == 0) || (VAR_4 == 0))
  return -VAR_0;





 if (FUNC_1(VAR_5) > VAR_2 / VAR_4)
  return -VAR_0;

 return FUNC_0((struct __kfifo *)&VAR_3->kf, VAR_5,
        VAR_4, VAR_1);
}
