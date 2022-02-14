
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_8 ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__* VAR_9 ;
 scalar_t__* VAR_10 ;

__attribute__((used)) static bool FUNC_5(struct radeon_device *VAR_11,
            unsigned VAR_12, unsigned *VAR_13)
{
 unsigned VAR_14;
 unsigned VAR_15;
 unsigned VAR_16;
 unsigned VAR_17;
 unsigned VAR_18;
 unsigned VAR_19;
 unsigned VAR_20;
 unsigned VAR_21;
 bool VAR_22 = 0;
 bool VAR_23 = 0;


 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_9); VAR_14++) {
  VAR_15 = FUNC_4(VAR_7 + VAR_9[VAR_14]);
  if (VAR_15 & VAR_8 &&
      VAR_12 == FUNC_3(VAR_15)) {

   VAR_23 = 1;
   VAR_21 = 1 << VAR_14;
   VAR_15 = VAR_14;
   break;
  }
 }

 if (VAR_23) {

  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_9); VAR_14++) {
   VAR_16 = FUNC_4(VAR_2 + VAR_9[VAR_14]);

   VAR_19 = FUNC_1(VAR_16);
   VAR_20 = FUNC_2(VAR_16);
   if (VAR_21 & VAR_19 &&

       VAR_20 == VAR_3) {
    VAR_17 = FUNC_4(VAR_4 +
         VAR_9[VAR_14]);
    VAR_18 = FUNC_4(VAR_0 +
          VAR_10[VAR_14]);

    if (VAR_17 & VAR_5 &&
        VAR_17 & VAR_6 &&
        VAR_18 & VAR_1) {
     VAR_22 = 1;
     *VAR_13 = VAR_15;
     break;
    }
   }
  }
 }

 return VAR_22;
}
