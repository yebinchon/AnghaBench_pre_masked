
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
typedef enum ib_qp_attr_mask { ____Placeholder_ib_qp_attr_mask } ib_qp_attr_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static bool FUNC_1(enum ib_qp_state VAR_16, enum ib_qp_state VAR_17,
    enum ib_qp_attr_mask VAR_18)
{
 int VAR_19 = VAR_14;
 int VAR_20 = 0;

 if (VAR_17 == VAR_2) {
  return FUNC_0(VAR_18, VAR_19, VAR_20);
 } else if (VAR_16 == VAR_2 && VAR_17 == VAR_1) {
  VAR_19 |= VAR_9 | VAR_10;
  return FUNC_0(VAR_18, VAR_19, VAR_20);
 } else if (VAR_16 == VAR_1 && VAR_17 == VAR_1) {
  VAR_20 = VAR_9 | VAR_10;
  return FUNC_0(VAR_18, VAR_19, VAR_20);
 } else if (VAR_16 == VAR_1 && VAR_17 == VAR_3) {
  VAR_19 |= VAR_8;
  VAR_20 = VAR_9 | VAR_5;
  return FUNC_0(VAR_18, VAR_19, VAR_20);
 } else if (VAR_16 == VAR_3 && VAR_17 == VAR_4) {
  VAR_19 |= VAR_15 | VAR_11 | VAR_12 |
         VAR_6 | VAR_13;
  VAR_20 = VAR_7;
  return FUNC_0(VAR_18, VAR_19, VAR_20);
 } else if (VAR_16 == VAR_4 && VAR_17 == VAR_4) {
  VAR_20 = VAR_7;
  return FUNC_0(VAR_18, VAR_19, VAR_20);
 } else if (VAR_16 != VAR_2 && VAR_17 == VAR_0) {
  return FUNC_0(VAR_18, VAR_19, VAR_20);
 }
 return 0;
}
