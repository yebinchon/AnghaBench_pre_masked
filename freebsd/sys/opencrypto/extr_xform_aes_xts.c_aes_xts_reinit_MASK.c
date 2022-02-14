
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int64_t ;
typedef size_t u_int ;
struct aes_xts_ctx {int* tweak; int key2; } ;
typedef scalar_t__ caddr_t ;


 size_t VAR_0 ;
 int FUNC_0 (int const*,int*,size_t) ;
 int FUNC_1 (int*,size_t) ;
 int FUNC_2 (int *,int*,int*) ;

__attribute__((used)) static void
FUNC_3(caddr_t VAR_1, const u_int8_t *VAR_2)
{
 struct aes_xts_ctx *VAR_3 = (struct aes_xts_ctx *)VAR_1;
 u_int64_t VAR_4;
 u_int VAR_5;





 FUNC_0(VAR_2, &VAR_4, VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3->tweak[VAR_5] = VAR_4 & 0xff;
  VAR_4 >>= 8;
 }

 FUNC_1(VAR_3->tweak + VAR_0, VAR_0);

 FUNC_2(&VAR_3->key2, VAR_3->tweak, VAR_3->tweak);
}
