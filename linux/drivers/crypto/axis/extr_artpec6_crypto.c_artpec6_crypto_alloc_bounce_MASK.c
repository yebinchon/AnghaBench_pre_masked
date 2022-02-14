
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_crypto_bounce_buffer {int buf; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 struct artpec6_crypto_bounce_buffer* FUNC_1 (size_t,int ) ;

__attribute__((used)) static struct artpec6_crypto_bounce_buffer *
FUNC_2(gfp_t VAR_1)
{
 void *VAR_2;
 size_t VAR_3 = sizeof(struct artpec6_crypto_bounce_buffer) +
       2 * VAR_0;
 struct artpec6_crypto_bounce_buffer *VAR_4 = FUNC_1(VAR_3, VAR_1);

 if (!VAR_4)
  return ((void*)0);

 VAR_2 = VAR_4 + 1;
 VAR_4->buf = FUNC_0(VAR_2, VAR_0);
 return VAR_4;
}
