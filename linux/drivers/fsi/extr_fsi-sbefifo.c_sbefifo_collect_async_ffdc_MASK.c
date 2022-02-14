
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbefifo {int async_ffdc; TYPE_1__* fsi_dev; } ;
struct kvec {void* iov_len; int * iov_base; } ;
struct iov_iter {int dummy; } ;
struct device {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 void* FUNC_2 (struct iov_iter*) ;
 int FUNC_3 (struct iov_iter*,int ,struct kvec*,int,void*) ;
 int FUNC_4 (struct sbefifo*,int *,int,struct iov_iter*) ;
 int FUNC_5 (struct device*,int *,size_t,int) ;
 int FUNC_6 (struct device*,int,int *,size_t,size_t*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (void*) ;

__attribute__((used)) static void FUNC_9(struct sbefifo *VAR_3)
{
 struct device *VAR_4 = &VAR_3->fsi_dev->dev;
        struct iov_iter VAR_5;
        struct kvec VAR_6;
 __be32 *VAR_7;
 size_t VAR_8;
 __be32 VAR_9[2];
 int VAR_10;

 VAR_3->async_ffdc = 0;
 VAR_7 = FUNC_8(VAR_1);
 if (!VAR_7) {
  FUNC_1(VAR_4, "Failed to allocate SBE FFDC buffer\n");
  return;
 }
        VAR_6.iov_base = VAR_7;
 VAR_6.iov_len = VAR_1;
        FUNC_3(&VAR_5, VAR_2, &VAR_6, 1, VAR_1);
 VAR_9[0] = FUNC_0(2);
 VAR_9[1] = FUNC_0(VAR_0);
 VAR_10 = FUNC_4(VAR_3, VAR_9, 2, &VAR_5);
 if (VAR_10 != 0) {
  FUNC_1(VAR_4, "Error %d retrieving SBE FFDC\n", VAR_10);
  goto bail;
 }
 VAR_8 = VAR_1 - FUNC_2(&VAR_5);
 VAR_8 /= sizeof(__be32);
 VAR_10 = FUNC_6(VAR_4, VAR_0, VAR_7,
      VAR_8, &VAR_8);
 if (VAR_10 != 0) {
  FUNC_1(VAR_4, "Error %d decoding SBE FFDC\n", VAR_10);
  goto bail;
 }
 if (VAR_8 > 0)
  FUNC_5(VAR_4, VAR_7, VAR_8, 1);
 bail:
 FUNC_7(VAR_7);

}
