
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hidma_lldev {scalar_t__ evca; void* evch_state; void* trch_state; int dev; scalar_t__ trca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int,int ,int,int) ;
 int FUNC_5 (int,scalar_t__) ;

int FUNC_6(struct hidma_lldev *VAR_7)
{
 u32 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_7->evca + VAR_4);
 VAR_8 &= ~(VAR_1 << 16);
 VAR_8 |= VAR_2 << 16;
 FUNC_5(VAR_8, VAR_7->evca + VAR_4);

 VAR_9 = FUNC_4(VAR_7->evca + VAR_4, VAR_8,
     FUNC_2(FUNC_0(VAR_8)),
     1000, 10000);
 if (VAR_9) {
  FUNC_1(VAR_7->dev, "event channel did not get enabled\n");
  return VAR_9;
 }

 VAR_8 = FUNC_3(VAR_7->trca + VAR_6);
 VAR_8 &= ~(VAR_1 << 16);
 VAR_8 |= VAR_2 << 16;
 FUNC_5(VAR_8, VAR_7->trca + VAR_6);

 VAR_9 = FUNC_4(VAR_7->trca + VAR_6, VAR_8,
     FUNC_2(FUNC_0(VAR_8)),
     1000, 10000);
 if (VAR_9) {
  FUNC_1(VAR_7->dev, "transfer channel did not get enabled\n");
  return VAR_9;
 }

 VAR_7->trch_state = VAR_3;
 VAR_7->evch_state = VAR_3;


 FUNC_5(VAR_0, VAR_7->evca + VAR_5);

 return 0;
}
