
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hidma_lldev {int evre_ring_size; int evre_processed_off; int* evre_ring; scalar_t__ evca; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hidma_lldev*) ;
 scalar_t__ FUNC_3 (struct hidma_lldev*,int,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct hidma_lldev *VAR_8)
{
 u32 VAR_9 = VAR_8->evre_ring_size;
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13;
 u32 VAR_14 = 0;

 VAR_12 = FUNC_4(VAR_8->evca + VAR_1);
 VAR_13 = VAR_8->evre_processed_off;

 if ((VAR_12 > VAR_9) ||
     (VAR_12 % VAR_7)) {
  FUNC_1(VAR_8->dev, "HW reports invalid EVRE write offset\n");
  return 0;
 }





 while ((VAR_13 != VAR_12)) {
  u32 *VAR_15 = VAR_8->evre_ring + VAR_13;
  u32 VAR_16;

  VAR_16 = VAR_15[VAR_2];
  VAR_10 = VAR_16 >> VAR_5;
  VAR_10 &= VAR_6;
  VAR_11 =
      (VAR_16 >> VAR_3) & VAR_4;

  if (FUNC_3(VAR_8, VAR_10, VAR_11))
   break;

  FUNC_0(VAR_13, VAR_7,
      VAR_9);






  VAR_12 =
      FUNC_4(VAR_8->evca + VAR_1);
  VAR_14++;





  if (!FUNC_2(VAR_8))
   break;
 }

 if (VAR_14) {
  u32 VAR_17 = (VAR_8->evre_processed_off +
         VAR_7 * VAR_14);
  VAR_17 = VAR_17 % VAR_9;
  FUNC_5(VAR_17, VAR_8->evca + VAR_0);


  VAR_8->evre_processed_off = VAR_17;
 }

 return VAR_14;
}
