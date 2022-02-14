
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uLongf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int*,unsigned char*,int,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 unsigned char* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5 (unsigned char *VAR_3, int VAR_4, unsigned char **VAR_5, int *VAR_6) {
  *VAR_5 = ((void*)0);
  if (VAR_2 <= 0) {
    FUNC_3 ("compress_level should be strictly positive.\n");
    FUNC_2 (1);
  }
  uLongf VAR_7 = FUNC_1 (VAR_4);
  *VAR_5 = FUNC_4 (VAR_7);
  int VAR_8 = FUNC_0 (*VAR_5, &VAR_7, VAR_3, VAR_4, VAR_2);
  if (VAR_8 != VAR_1) {
    FUNC_3 ("compress2 returns error code %d.\n", VAR_8);
    FUNC_2 (1);
  }
  if (VAR_7 > VAR_0) {
    FUNC_3 ("compressed data is greater than 2G\n");
    FUNC_2 (1);
  }
  *VAR_6 = VAR_7;
}
