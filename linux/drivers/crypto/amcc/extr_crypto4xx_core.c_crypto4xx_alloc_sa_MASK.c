
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto4xx_ctx {int sa_len; int * sa_in; int * sa_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct crypto4xx_ctx *VAR_2, u32 VAR_3)
{
 VAR_2->sa_in = FUNC_0(VAR_3, 4, VAR_1);
 if (VAR_2->sa_in == ((void*)0))
  return -VAR_0;

 VAR_2->sa_out = FUNC_0(VAR_3, 4, VAR_1);
 if (VAR_2->sa_out == ((void*)0)) {
  FUNC_1(VAR_2->sa_in);
  VAR_2->sa_in = ((void*)0);
  return -VAR_0;
 }

 VAR_2->sa_len = VAR_3;

 return 0;
}
