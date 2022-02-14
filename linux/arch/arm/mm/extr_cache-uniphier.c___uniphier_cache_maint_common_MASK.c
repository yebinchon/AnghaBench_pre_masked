
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct uniphier_cache_data {scalar_t__ op_base; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct uniphier_cache_data *VAR_9,
       unsigned long VAR_10,
       unsigned long VAR_11,
       u32 VAR_12)
{
 unsigned long VAR_13;
 FUNC_4(VAR_13);


 FUNC_7(VAR_1, VAR_9->op_base + VAR_0);

 do {

  FUNC_7(VAR_7 | VAR_12,
          VAR_9->op_base + VAR_6);


  if (FUNC_2(FUNC_0(VAR_12))) {
   FUNC_7(VAR_10, VAR_9->op_base + VAR_5);
   FUNC_7(VAR_11, VAR_9->op_base + VAR_8);
  }
 } while (FUNC_6(FUNC_5(VAR_9->op_base + VAR_2) &
     (VAR_3 | VAR_4)));


 while (FUNC_2(FUNC_5(VAR_9->op_base + VAR_0) !=
        VAR_1))
  FUNC_1();

 FUNC_3(VAR_13);
}
