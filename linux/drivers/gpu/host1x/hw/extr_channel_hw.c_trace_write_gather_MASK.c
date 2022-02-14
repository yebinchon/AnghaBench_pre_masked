
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct host1x_cdma {int dummy; } ;
struct host1x_bo {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct host1x_cdma*) ;
 int FUNC_1 (struct device*) ;
 void* FUNC_2 (struct host1x_bo*) ;
 int FUNC_3 (struct host1x_bo*,void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ,struct host1x_bo*,int,int,void*) ;

__attribute__((used)) static void FUNC_6(struct host1x_cdma *VAR_2, struct host1x_bo *VAR_3,
          u32 VAR_4, u32 VAR_5)
{
 struct device *VAR_6 = FUNC_0(VAR_2)->dev;
 void *VAR_7 = ((void*)0);

 if (VAR_1)
  VAR_7 = FUNC_2(VAR_3);

 if (VAR_7) {
  u32 VAR_8;




  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += VAR_0) {
   u32 VAR_9 = FUNC_4(VAR_5 - VAR_8, VAR_0);

   VAR_4 += VAR_8 * sizeof(u32);

   FUNC_5(FUNC_1(VAR_6), VAR_3,
            VAR_9, VAR_4,
            VAR_7);
  }

  FUNC_3(VAR_3, VAR_7);
 }
}
