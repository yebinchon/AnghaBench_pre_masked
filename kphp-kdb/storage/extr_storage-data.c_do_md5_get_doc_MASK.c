
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volume_t ;


 int VAR_0 ;
 int * FUNC_0 (long long,int ) ;
 int FUNC_1 (int *,unsigned char*,unsigned long long,unsigned long long*) ;

int FUNC_2 (long long VAR_1, unsigned char VAR_2[16], unsigned long long VAR_3, volume_t **VAR_4, unsigned long long *VAR_5) {
  *VAR_4 = FUNC_0 (VAR_1, 0);
  if (*VAR_4 == ((void*)0)) {
    return VAR_0;
  }
  int VAR_6 = FUNC_1 (*VAR_4, VAR_2, VAR_3, VAR_5);
  if (VAR_6) {
    return VAR_6;
  }
  return 0;
}
