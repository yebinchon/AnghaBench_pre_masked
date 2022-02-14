
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hidma_lldev {scalar_t__ evch_state; scalar_t__ trch_state; scalar_t__ evca; int dev; scalar_t__ trca; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int,int,int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct hidma_lldev *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5->trca + VAR_4);
 VAR_6 &= ~(VAR_0 << 16);
 VAR_6 |= VAR_2 << 16;
 FUNC_4(VAR_6, VAR_5->trca + VAR_4);





 VAR_7 = FUNC_3(VAR_5->trca + VAR_4, VAR_6,
     FUNC_0(VAR_6) == VAR_1,
     1000, 10000);
 if (VAR_7) {
  FUNC_1(VAR_5->dev, "transfer channel did not reset\n");
  return VAR_7;
 }

 VAR_6 = FUNC_2(VAR_5->evca + VAR_3);
 VAR_6 &= ~(VAR_0 << 16);
 VAR_6 |= VAR_2 << 16;
 FUNC_4(VAR_6, VAR_5->evca + VAR_3);





 VAR_7 = FUNC_3(VAR_5->evca + VAR_3, VAR_6,
     FUNC_0(VAR_6) == VAR_1,
     1000, 10000);
 if (VAR_7)
  return VAR_7;

 VAR_5->trch_state = VAR_1;
 VAR_5->evch_state = VAR_1;
 return 0;
}
