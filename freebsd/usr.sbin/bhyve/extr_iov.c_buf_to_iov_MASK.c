
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int iov_base; int iov_len; } ;
typedef int ssize_t ;


 size_t FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct iovec*) ;
 struct iovec* FUNC_2 (int) ;
 int FUNC_3 (int ,void const*,size_t) ;
 int FUNC_4 (struct iovec*,int,struct iovec*,int*,size_t) ;

ssize_t
FUNC_5(const void *VAR_0, size_t VAR_1, struct iovec *VAR_2, int VAR_3,
    size_t VAR_4)
{
 struct iovec *VAR_5;
 int VAR_6, VAR_7;
 size_t VAR_8 = 0, VAR_9;

 if (VAR_4 > 0) {
  VAR_5 = FUNC_2(sizeof(struct iovec) * VAR_3);
  FUNC_4(VAR_2, VAR_3, VAR_5, &VAR_6, VAR_4);
 } else {
  VAR_5 = VAR_2;
  VAR_6 = VAR_3;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6 && VAR_8 < VAR_1; VAR_7++) {
  VAR_9 = FUNC_0(VAR_5[VAR_7].iov_len, VAR_1 - VAR_8);
  FUNC_3(VAR_5[VAR_7].iov_base, VAR_0 + VAR_8, VAR_9);
  VAR_8 += VAR_9;
 }

 if (VAR_4 > 0)
  FUNC_1(VAR_5);

 return ((ssize_t)VAR_8);
}
