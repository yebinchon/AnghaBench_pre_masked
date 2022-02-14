
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sbefifo {TYPE_1__* fsi_dev; } ;
struct device {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,size_t,size_t,...) ;
 size_t FUNC_3 (size_t,size_t) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (struct sbefifo*,int,int ) ;
 int FUNC_6 (struct sbefifo*,int ) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (struct sbefifo*,int,int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct sbefifo *VAR_4,
    const __be32 *VAR_5, size_t VAR_6)
{
 struct device *VAR_7 = &VAR_4->fsi_dev->dev;
 size_t VAR_8, VAR_9, VAR_10 = 0, VAR_11 = VAR_6;
 unsigned long VAR_12;
 u32 VAR_13;
 int VAR_14;

 FUNC_2(VAR_7, "sending command (%zd words, cmd=%04x)\n",
   VAR_6, FUNC_0(VAR_5[1]));


 VAR_12 = FUNC_4(VAR_2);
 while (VAR_11) {

  VAR_14 = FUNC_8(VAR_4, 1, &VAR_13, VAR_12);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_12 = FUNC_4(VAR_1);

  VAR_10 = FUNC_7(VAR_13);
  VAR_8 = VAR_9 = FUNC_3(VAR_10, VAR_11);

  FUNC_2(VAR_7, "  status=%08x vacant=%zd chunk=%zd\n",
    VAR_13, VAR_10, VAR_9);


  while (VAR_8--) {
   VAR_14 = FUNC_6(VAR_4, *(VAR_5++));
   if (VAR_14) {
    FUNC_1(VAR_7, "FSI error %d writing UP FIFO\n", VAR_14);
    return VAR_14;
   }
  }
  VAR_11 -= VAR_9;
  VAR_10 -= VAR_9;
 }


 if (!VAR_10) {
  VAR_14 = FUNC_8(VAR_4, 1, &VAR_13, VAR_12);
  if (VAR_14)
   return VAR_14;
 }


 VAR_14 = FUNC_5(VAR_4, VAR_3 | VAR_0, 0);
 if (VAR_14)
  FUNC_1(VAR_7, "FSI error %d writing EOT\n", VAR_14);
 return VAR_14;
}
