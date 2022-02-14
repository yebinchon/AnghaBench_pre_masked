
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tcphdr {int dummy; } ;
struct secasvar {int dummy; } ;
struct secasindex {scalar_t__ reqid; int mode; int proto; int dst; int src; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct secasvar* FUNC_1 (struct secasindex*) ;
 int FUNC_2 (struct secasvar**) ;
 int FUNC_3 (struct mbuf*,int *,int *) ;
 int FUNC_4 (struct mbuf*,struct tcphdr*,struct secasvar*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(struct mbuf *VAR_4, struct tcphdr *VAR_5, u_char *VAR_6)
{
 struct secasindex VAR_7;
 struct secasvar *VAR_8;

 FUNC_3(VAR_4, &VAR_7.src, &VAR_7.dst);
 VAR_7.proto = VAR_1;
 VAR_7.mode = VAR_2;
 VAR_7.reqid = 0;
 VAR_8 = FUNC_1(&VAR_7);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_3);
  return (VAR_0);
 }
 FUNC_4(VAR_4, VAR_5, VAR_8, VAR_6);
 FUNC_2(&VAR_8);
 return (0);
}
