
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_wmem_queued; } ;
struct chtls_dev {int max_host_sndbuf; } ;



__attribute__((used)) static int FUNC_0(struct chtls_dev *VAR_0, struct sock *VAR_1)
{
 return (VAR_0->max_host_sndbuf - VAR_1->sk_wmem_queued);
}
