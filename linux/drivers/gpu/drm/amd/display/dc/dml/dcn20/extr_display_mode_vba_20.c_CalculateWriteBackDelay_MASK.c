
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum source_format_class { ____Placeholder_source_format_class } source_format_class ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (double,unsigned int) ;

__attribute__((used)) static double FUNC_2(
  enum source_format_class VAR_1,
  double VAR_2,
  double VAR_3,
  unsigned int VAR_4,
  unsigned int VAR_5,
  unsigned int VAR_6,
  unsigned int VAR_7,
  unsigned int VAR_8)
{
 double VAR_9 =
   FUNC_1(
     FUNC_0(VAR_4 / 4.0, 1) / VAR_2,
     VAR_5 * FUNC_0(1.0 / VAR_3, 1)
       * FUNC_0(
         VAR_8
           / 4.0,
         1)
       + FUNC_0(1.0 / VAR_3, 1)
         * (FUNC_0(
           VAR_5
             / 4.0,
           1) + 4));

 if (VAR_1 != VAR_0) {
  VAR_9 =
    FUNC_1(
      VAR_9,
      FUNC_1(
        FUNC_0(
          VAR_6
            / 2.0,
          1)
          / (2
            * VAR_2),
        VAR_7
          * FUNC_0(
            1
              / (2
                * VAR_3),
            1)
          * FUNC_0(
            VAR_8
              / 2.0
              / 2.0,
            1)
          + FUNC_0(
            1
              / (2
                * VAR_3),
            1)
            * (FUNC_0(
              VAR_7
                / 4.0,
              1)
              + 4)));
 }
 return VAR_9;
}
