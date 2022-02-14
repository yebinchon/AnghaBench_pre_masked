
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uLongf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,int*,unsigned char*,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 unsigned char* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (unsigned char *VAR_2, int VAR_3, unsigned char **VAR_4, int *VAR_5) {
  *VAR_4 = ((void*)0);
  if (!VAR_1) { return -1; }
  uLongf VAR_6 = FUNC_1 (VAR_3);
  *VAR_4 = FUNC_2 (VAR_6);
  if (FUNC_0 (*VAR_4, &VAR_6, VAR_2, VAR_3, VAR_1) != VAR_0) {
    return -2;
  }
  *VAR_5 = VAR_6;
  return 0;
}
