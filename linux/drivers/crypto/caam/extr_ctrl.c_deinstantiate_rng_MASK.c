
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (int,int ) ;
 int FUNC_5 (struct device*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, int VAR_6)
{
 u32 *VAR_7, VAR_8;
 int VAR_9, VAR_10 = 0;

 VAR_7 = FUNC_4(VAR_0 * 3, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {





  if ((1 << VAR_9) & VAR_6) {




   FUNC_0(VAR_7, VAR_9);


   VAR_10 = FUNC_5(VAR_5, VAR_7, &VAR_8);

   if (VAR_10 ||
       (VAR_8 && VAR_8 != VAR_3)) {
    FUNC_1(VAR_5,
     "Failed to deinstantiate RNG4 SH%d\n",
     VAR_9);
    break;
   }
   FUNC_2(VAR_5, "Deinstantiated RNG4 SH%d\n", VAR_9);
  }
 }

 FUNC_3(VAR_7);

 return VAR_10;
}
