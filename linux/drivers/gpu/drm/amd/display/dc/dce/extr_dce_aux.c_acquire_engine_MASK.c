
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dce_aux {int dummy; } ;
struct aux_engine_dce110 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct aux_engine_dce110* FUNC_0 (struct dce_aux*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (scalar_t__,int,int ,int ) ;

__attribute__((used)) static bool FUNC_8(
 struct dce_aux *VAR_10)
{
 struct aux_engine_dce110 *VAR_11 = FUNC_0(VAR_10);

 uint32_t VAR_12 = FUNC_2(VAR_0);
 uint32_t VAR_13 = FUNC_6(
   VAR_12,
   VAR_0,
   VAR_3);
 if (VAR_13 == VAR_8)
  return 0;

 VAR_12 = FUNC_2(VAR_1);
 VAR_13 = FUNC_6(VAR_12,
    VAR_1,
    VAR_2);

 if (VAR_13 == 0) {
  FUNC_7(
    VAR_12,
    1,
    VAR_1,
    VAR_2);

  if (FUNC_1(VAR_6)) {

   FUNC_7(
    VAR_12,
    1,
    VAR_1,
    VAR_4);
  }

  FUNC_5(VAR_1, VAR_12);

  if (FUNC_1(VAR_6)) {


   FUNC_4(VAR_1, VAR_5, 1,
     1, 11);

   FUNC_7(
    VAR_12,
    0,
    VAR_1,
    VAR_4);

   FUNC_5(VAR_1, VAR_12);

   FUNC_4(VAR_1, VAR_5, 0,
     1, 11);
  }
 }


 FUNC_3(VAR_0, VAR_7, 1);

 VAR_12 = FUNC_2(VAR_0);
 VAR_13 = FUNC_6(
   VAR_12,
   VAR_0,
   VAR_3);

 return (VAR_13 == VAR_9);
}
