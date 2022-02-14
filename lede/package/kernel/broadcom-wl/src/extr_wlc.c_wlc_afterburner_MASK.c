
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wlc_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(wlc_param VAR_3, void *VAR_4, void *VAR_5)
{
 int *VAR_6 = (int *) VAR_5;
 int VAR_7 = 0;

 if ((VAR_3 & VAR_1) == VAR_0) {
  VAR_7 = FUNC_0(VAR_2, "afterburner", VAR_6, sizeof(int));
 } else {
  FUNC_1(VAR_2, "wlfeatureflag", (*VAR_6 ? 3 : 0));
  VAR_7 = FUNC_1(VAR_2, "afterburner", (*VAR_6 ? 1 : 0));
  FUNC_1(VAR_2, "afterburner_override", *VAR_6);
 }

 return VAR_7;
}
