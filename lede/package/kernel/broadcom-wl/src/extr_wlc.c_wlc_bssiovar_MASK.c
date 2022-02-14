
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
 int FUNC_0 (int ,char*,int ,int*,int) ;
 int FUNC_1 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_2(wlc_param VAR_5, void *VAR_6, void *VAR_7)
{
 int *VAR_8 = (int *) VAR_7;
 char *VAR_9 = *((char **) VAR_6);
 int VAR_10 = 0;

 if (VAR_5 & VAR_2) {
  switch(VAR_5 & VAR_1) {
   case 128:
    VAR_10 = FUNC_1(VAR_3, VAR_9, VAR_4, *VAR_8);
  }
 }
 if (VAR_5 & VAR_0) {
  switch(VAR_5 & VAR_1) {
   case 128:
    VAR_10 = FUNC_0(VAR_3, VAR_9, VAR_4, VAR_8, sizeof(int));
  }
 }

 return VAR_10;
}
