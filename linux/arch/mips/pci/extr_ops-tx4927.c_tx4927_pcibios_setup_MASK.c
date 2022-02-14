
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct TYPE_2__ {int gbwc; void* retryto; void* trdyto; } ;


 scalar_t__ FUNC_0 (char*,int ,int *) ;
 scalar_t__ FUNC_1 (char*,int ,void**) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__ VAR_0 ;

char *FUNC_3(char *VAR_1)
{
 if (!FUNC_2(VAR_1, "trdyto=", 7)) {
  u8 VAR_2 = 0;
  if (FUNC_1(VAR_1 + 7, 0, &VAR_2) == 0)
   VAR_0.trdyto = VAR_2;
  return ((void*)0);
 }
 if (!FUNC_2(VAR_1, "retryto=", 8)) {
  u8 VAR_3 = 0;
  if (FUNC_1(VAR_1 + 8, 0, &VAR_3) == 0)
   VAR_0.retryto = VAR_3;
  return ((void*)0);
 }
 if (!FUNC_2(VAR_1, "gbwc=", 5)) {
  u16 VAR_4;
  if (FUNC_0(VAR_1 + 5, 0, &VAR_4) == 0)
   VAR_0.gbwc = VAR_4;
  return ((void*)0);
 }
 return VAR_1;
}
