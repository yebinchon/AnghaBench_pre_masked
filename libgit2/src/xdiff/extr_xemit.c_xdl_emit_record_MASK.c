
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdfile_t ;
typedef int xdemitcb_t ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,long,char const*,long,int *) ;
 long FUNC_2 (int *,long,char const**) ;

__attribute__((used)) static int FUNC_3(xdfile_t *VAR_0, long VAR_1, char const *VAR_2, xdemitcb_t *VAR_3) {
 long VAR_4, VAR_5 = (long)FUNC_0(VAR_2);
 char const *VAR_6;

 VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_6);
 if (FUNC_1(VAR_6, VAR_4, VAR_2, VAR_5, VAR_3) < 0) {

  return -1;
 }

 return 0;
}
