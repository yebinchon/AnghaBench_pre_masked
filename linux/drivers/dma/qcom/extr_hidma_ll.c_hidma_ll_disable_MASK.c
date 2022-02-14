
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hidma_lldev {scalar_t__ evca; scalar_t__ evch_state; scalar_t__ trch_state; scalar_t__ trca; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct hidma_lldev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int,int,int) ;
 int FUNC_4 (int,scalar_t__) ;

int FUNC_5(struct hidma_lldev *VAR_6)
{
 u32 VAR_7;
 int VAR_8;


 if (!FUNC_1(VAR_6))
  return 0;

 VAR_7 = FUNC_2(VAR_6->trca + VAR_5);
 VAR_7 &= ~(VAR_0 << 16);
 VAR_7 |= VAR_1 << 16;
 FUNC_4(VAR_7, VAR_6->trca + VAR_5);





 VAR_8 = FUNC_3(VAR_6->trca + VAR_5, VAR_7,
     FUNC_0(VAR_7) == VAR_2,
     1000, 10000);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_2(VAR_6->evca + VAR_3);
 VAR_7 &= ~(VAR_0 << 16);
 VAR_7 |= VAR_1 << 16;
 FUNC_4(VAR_7, VAR_6->evca + VAR_3);





 VAR_8 = FUNC_3(VAR_6->evca + VAR_3, VAR_7,
     FUNC_0(VAR_7) == VAR_2,
     1000, 10000);
 if (VAR_8)
  return VAR_8;

 VAR_6->trch_state = VAR_2;
 VAR_6->evch_state = VAR_2;


 FUNC_4(0, VAR_6->evca + VAR_4);
 return 0;
}
