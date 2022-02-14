
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int mfs; } ;
struct chtls_sock {TYPE_1__ tlshws; } ;


 int FUNC_0 (unsigned int,int ) ;
 struct chtls_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0, unsigned int VAR_1)
{
 struct chtls_sock *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, VAR_2->tlshws.mfs);
}
