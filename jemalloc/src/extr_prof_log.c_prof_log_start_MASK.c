
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

bool
FUNC_6(tsdn_t *VAR_10, const char *VAR_11) {
 if (!VAR_5 || !VAR_6) {
  return 1;
 }

 bool VAR_12 = 0;

 FUNC_0(VAR_10, &VAR_2);

 if (VAR_7 != VAR_9) {
  VAR_12 = 1;
 } else if (VAR_11 == ((void*)0)) {

  FUNC_3(VAR_10, VAR_1, VAR_3);
  VAR_3++;
  VAR_7 = VAR_8;
 } else if (FUNC_5(VAR_11) >= VAR_0) {
  VAR_12 = 1;
 } else {
  FUNC_4(VAR_1, VAR_11);
  VAR_7 = VAR_8;
 }

 if (!VAR_12) {
  FUNC_2(&VAR_4);
 }

 FUNC_1(VAR_10, &VAR_2);

 return VAR_12;
}
