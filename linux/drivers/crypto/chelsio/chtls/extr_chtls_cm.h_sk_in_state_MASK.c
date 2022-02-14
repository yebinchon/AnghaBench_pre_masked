
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct sock *VAR_0,
           unsigned int VAR_1)
{
 return VAR_1 & (1 << VAR_0->sk_state);
}
