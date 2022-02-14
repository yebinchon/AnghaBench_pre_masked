
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 double FUNC_0 (double) ;
 int FUNC_1 (double) ;

double FUNC_2(double VAR_1)
{
 const double VAR_2 = 220.2068679123761;
 const double VAR_3 = 221.2135961699311;
 const double VAR_4 = 112.0792914978709;
 const double VAR_5 = 33.912866078383;
 const double VAR_6 = 6.37396220353165;
 const double VAR_7 = .7003830644436881;
 const double VAR_8 = .03526249659989109;
 const double VAR_9 = 440.4137358247522;
 const double VAR_10 = 793.8265125199484;
 const double VAR_11 = 637.3336333788311;
 const double VAR_12 = 296.5642487796737;
 const double VAR_13 = 86.78073220294608;
 const double VAR_14 = 16.06417757920695;
 const double VAR_15 = 1.755667163182642;
 const double VAR_16 = .08838834764831844;
 double VAR_17, VAR_18, VAR_19;
 VAR_18 = FUNC_1(VAR_1) * VAR_0;
 if (VAR_18 > 37.) return VAR_1 > 0.? 0. : 2.;
 VAR_17 = FUNC_0(VAR_18 * VAR_18 * - .5);
 if (VAR_18 < 10. / VAR_0)
     VAR_19 = VAR_17 * ((((((VAR_8 * VAR_18 + VAR_7) * VAR_18 + VAR_6) * VAR_18 + VAR_5) * VAR_18 + VAR_4) * VAR_18 + VAR_3) * VAR_18 + VAR_2)
   / (((((((VAR_16 * VAR_18 + VAR_15) * VAR_18 + VAR_14) * VAR_18 + VAR_13) * VAR_18 + VAR_12) * VAR_18 + VAR_11) * VAR_18 + VAR_10) * VAR_18 + VAR_9);
 else VAR_19 = VAR_17 / 2.506628274631001 / (VAR_18 + 1. / (VAR_18 + 2. / (VAR_18 + 3. / (VAR_18 + 4. / (VAR_18 + .65)))));
 return VAR_1 > 0.? 2. * VAR_19 : 2. * (1. - VAR_19);
}
