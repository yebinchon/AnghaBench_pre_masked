
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct chtls_sock {int flags; } ;
typedef enum csk_flags { ____Placeholder_csk_flags } csk_flags ;


 int FUNC_0 (struct chtls_sock*) ;
 struct chtls_sock* FUNC_1 (struct sock const*) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static inline int FUNC_3(const struct sock *VAR_0, enum csk_flags VAR_1)
{
 struct chtls_sock *VAR_2 = FUNC_1(VAR_0);

 if (!FUNC_0(VAR_2))
  return 0;
 return FUNC_2(VAR_1, &VAR_2->flags);
}
