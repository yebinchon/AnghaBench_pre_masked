
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chtls_sock {int flags; } ;
typedef enum csk_flags { ____Placeholder_csk_flags } csk_flags ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static inline int FUNC_1(const struct chtls_sock *VAR_0,
     enum csk_flags VAR_1)
{
 return FUNC_0(VAR_1, &VAR_0->flags);
}
