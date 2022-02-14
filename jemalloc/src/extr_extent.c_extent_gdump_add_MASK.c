
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int extent_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,size_t*,size_t,int ,int ) ;
 size_t FUNC_1 (int *,size_t,int ) ;
 size_t FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_4 (int const*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int const*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(tsdn_t *VAR_8, const extent_t *VAR_9) {
 FUNC_3(VAR_3);

 FUNC_9(FUNC_8(VAR_8),
     VAR_2, 0);

 if (VAR_7 && FUNC_5(VAR_9) == VAR_5) {
  size_t VAR_10 = FUNC_4(VAR_9) >> VAR_1;
  size_t VAR_11 = FUNC_1(&VAR_4, VAR_10,
      VAR_0) + VAR_10;
  size_t VAR_12 = FUNC_2(&VAR_6, VAR_0);
  while (VAR_11 > VAR_12 && !FUNC_0(
      &VAR_6, &VAR_12, VAR_11, VAR_0, VAR_0)) {





  }
  if (VAR_11 > VAR_12 && FUNC_7()) {
   FUNC_6(VAR_8);
  }
 }
}
