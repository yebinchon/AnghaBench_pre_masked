
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sbefifo {int broken; TYPE_1__* fsi_dev; } ;
struct iov_iter {int dummy; } ;
struct device {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int,struct iov_iter*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,size_t) ;
 int FUNC_4 (struct iov_iter*) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (struct sbefifo*,int *) ;
 int FUNC_7 (int) ;
 size_t FUNC_8 (int) ;
 int FUNC_9 (struct sbefifo*,int,int ) ;
 int FUNC_10 (struct sbefifo*,int,int*,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct sbefifo *VAR_7, struct iov_iter *VAR_8)
{
 struct device *VAR_9 = &VAR_7->fsi_dev->dev;
 u32 VAR_10, VAR_11;
 unsigned long VAR_12;
 bool VAR_13 = 0;
 __be32 VAR_14;
 size_t VAR_15;
 int VAR_16;

 FUNC_2(VAR_9, "reading response, buflen = %zd\n", FUNC_4(VAR_8));

 VAR_12 = FUNC_5(VAR_6);
 for (;;) {

  VAR_16 = FUNC_10(VAR_7, 0, &VAR_10, VAR_12);
  if (VAR_16 < 0)
   return VAR_16;
  VAR_12 = FUNC_5(VAR_5);


  VAR_15 = FUNC_8(VAR_10);
  VAR_11 = FUNC_7(VAR_10);

  FUNC_2(VAR_9, "  chunk size %zd eot_set=0x%x\n", VAR_15, VAR_11);


  while(VAR_15--) {

   VAR_16 = FUNC_6(VAR_7, &VAR_14);
   if (VAR_16 < 0)
    return VAR_16;


   if (VAR_11 & 0x80) {






    if (VAR_15) {
     FUNC_3(VAR_9, "FIFO read hit"
       " EOT with still %zd data\n",
       VAR_15);
     VAR_7->broken = 1;
    }


    VAR_16 = FUNC_9(VAR_7,
        VAR_3 | VAR_4, 0);






    if (VAR_16) {
     FUNC_1(VAR_9, "FSI error %d ack'ing EOT\n", VAR_16);
     VAR_7->broken = 1;
    }


    return VAR_13 ? -VAR_2 : 0;
   }


   if (FUNC_4(VAR_8) >= sizeof(__be32)) {
    if (FUNC_0(&VAR_14, sizeof(__be32), VAR_8) < sizeof(__be32))
     return -VAR_0;
   } else {
    FUNC_2(VAR_9, "Response overflowed !\n");

    VAR_13 = 1;
   }


   VAR_11 <<= 1;
  }
 }

 return -VAR_1;
}
