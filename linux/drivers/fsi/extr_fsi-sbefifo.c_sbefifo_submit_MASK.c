
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbefifo {scalar_t__ magic; int lock; } ;
struct kvec {size_t iov_len; int * iov_base; } ;
struct iov_iter {int dummy; } ;
struct device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct sbefifo*,int const*,size_t,struct iov_iter*) ;
 struct sbefifo* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct iov_iter*) ;
 int FUNC_4 (struct iov_iter*,int ,struct kvec*,int,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct device *VAR_4, const __be32 *VAR_5, size_t VAR_6,
     __be32 *VAR_7, size_t *VAR_8)
{
 struct sbefifo *VAR_9;
        struct iov_iter VAR_10;
        struct kvec VAR_11;
 size_t VAR_12;
 int VAR_13;

 if (!VAR_4)
  return -VAR_1;
 VAR_9 = FUNC_2(VAR_4);
 if (!VAR_9)
  return -VAR_1;
 if (FUNC_0(VAR_9->magic != VAR_2))
  return -VAR_1;
 if (!VAR_8 || !VAR_5 || !VAR_7)
  return -VAR_0;


 VAR_12 = (*VAR_8) * sizeof(__be32);
 VAR_11.iov_base = VAR_7;
 VAR_11.iov_len = VAR_12;
        FUNC_4(&VAR_10, VAR_3, &VAR_11, 1, VAR_12);


 FUNC_5(&VAR_9->lock);
 VAR_13 = FUNC_1(VAR_9, VAR_5, VAR_6, &VAR_10);
 FUNC_6(&VAR_9->lock);


 VAR_12 -= FUNC_3(&VAR_10);
 *VAR_8 = VAR_12 / sizeof(__be32);

 return VAR_13;
}
