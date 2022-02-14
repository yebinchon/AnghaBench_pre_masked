
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wlc_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(wlc_param VAR_5, void *VAR_6, void *VAR_7)
{
 int *VAR_8 = (int *) VAR_7;
 int VAR_9;

 if ((VAR_5 & VAR_1) == VAR_0) {
  VAR_9 = FUNC_0(VAR_4, VAR_2, VAR_8, sizeof(int));
  *VAR_8 = ((*VAR_8 & 1) ? 0 : 1);
 } else {
  *VAR_8 = (1 << 16) | (*VAR_8 ? 0 : 1);
  VAR_9 = FUNC_0(VAR_4, VAR_3, VAR_8, sizeof(int));
 }

 return VAR_9;
}
