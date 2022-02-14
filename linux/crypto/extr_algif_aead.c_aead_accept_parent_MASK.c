
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct aead_tfm {int aead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,struct sock*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, struct sock *VAR_3)
{
 struct aead_tfm *VAR_4 = VAR_2;

 if (FUNC_1(VAR_4->aead) & VAR_0)
  return -VAR_1;

 return FUNC_0(VAR_2, VAR_3);
}
