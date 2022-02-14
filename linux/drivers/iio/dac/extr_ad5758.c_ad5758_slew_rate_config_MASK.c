
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ad5758_state {scalar_t__ slew_time; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,int,scalar_t__) ;
 int FUNC_3 (struct ad5758_state*,unsigned int,unsigned int) ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ad5758_state *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 int VAR_7, VAR_8;
 s64 VAR_9, VAR_10;
 u64 VAR_11, VAR_12;

 VAR_5 = 0;
 VAR_6 = 0;
 VAR_10 = VAR_1;







 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {





  VAR_11 = VAR_0;
  FUNC_4(VAR_11, VAR_2[VAR_7]);
  FUNC_4(VAR_11, VAR_4->slew_time);




  VAR_8 = FUNC_2(VAR_3,
      FUNC_0(VAR_3),
      VAR_11);

  VAR_12 = VAR_0;
  FUNC_4(VAR_12, VAR_3[VAR_8]);
  FUNC_4(VAR_12, VAR_2[VAR_7]);





  VAR_9 = FUNC_1(VAR_4->slew_time - VAR_12);
  if (VAR_9 < VAR_10) {
   VAR_10 = VAR_9;
   VAR_5 = VAR_7;
   VAR_6 = VAR_8;
  }
 }

 return FUNC_3(VAR_4, VAR_5, VAR_6);
}
