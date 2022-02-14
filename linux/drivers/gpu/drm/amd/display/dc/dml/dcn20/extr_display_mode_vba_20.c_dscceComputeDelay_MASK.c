
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum output_format_class { ____Placeholder_output_format_class } output_format_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(
  unsigned int VAR_3,
  double VAR_4,
  unsigned int VAR_5,
  unsigned int VAR_6,
  enum output_format_class VAR_7)
{
 unsigned int VAR_8 = 8192;


 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21,
   VAR_22, VAR_23;

 if (VAR_7 == VAR_1 || VAR_7 == VAR_0)
  VAR_9 = 2;

 else
  VAR_9 = 1;


 VAR_12 = FUNC_0(VAR_8 / 2.0 / VAR_4 / VAR_9);


 if (VAR_3 == 8)
  VAR_11 = 81;
 else if (VAR_3 == 10)
  VAR_11 = 89;
 else
  VAR_11 = 113;


 VAR_13 = VAR_5 / VAR_9;


 if (VAR_7 == VAR_2)
  VAR_14 = 1;
 else
  VAR_14 = 0;


 VAR_15 = VAR_12 + 45;
 VAR_16 = (VAR_13 + 2) / 3;
 VAR_17 = 3 * VAR_16 - VAR_13;
 VAR_18 = VAR_15 / VAR_13;
 VAR_19 = VAR_15 + VAR_17 * VAR_18;
 VAR_20 = (VAR_19 + 2) / 3 + VAR_11 + 6 + 1;
 VAR_21 = (VAR_20 + VAR_16 - 1) / VAR_16;
 if ((VAR_15 % VAR_13) == 0 && VAR_17 != 0)
  VAR_10 = 1;
 else
  VAR_10 = 0;
 VAR_22 = VAR_21 * VAR_16 * (VAR_6 - 1) + VAR_20 + VAR_14 + VAR_10 + 22;


 VAR_23 = VAR_22 * 3 * VAR_9;
 return VAR_23;
}
