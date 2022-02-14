
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wlc_param ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(wlc_param VAR_6, void *VAR_7, void *VAR_8)
{
 int *VAR_9 = (int *) VAR_8;
 int VAR_10[3];
 int VAR_11 = 0;

 FUNC_0((char *) VAR_10, "bss");
 VAR_10[1] = VAR_5;
 if (VAR_6 & VAR_1) {
  VAR_10[2] = (*VAR_9 ? 1 : 0);
  VAR_11 = FUNC_1(VAR_4, VAR_3, VAR_10, sizeof(VAR_10));
 } else if (VAR_6 & VAR_0) {
  VAR_11 = FUNC_1(VAR_4, VAR_2, VAR_10, sizeof(VAR_10));
  *VAR_9 = VAR_10[0];
 }

 return VAR_11;
}
