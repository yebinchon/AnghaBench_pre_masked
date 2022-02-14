
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
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 struct secasvar* FUNC_2 (struct secasindex*) ;
 int FUNC_3 (struct secasvar**) ;
 int FUNC_4 (struct mbuf*,int *,int *) ;
 int FUNC_5 (struct tcphdr*) ;
 int FUNC_6 (struct tcphdr*) ;
 int FUNC_7 (struct mbuf*,struct tcphdr*,struct secasvar*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(struct mbuf *VAR_7, struct tcphdr *VAR_8, u_char *VAR_9)
{
 char VAR_10[VAR_3];
 struct secasindex VAR_11;
 struct secasvar *VAR_12;

 FUNC_4(VAR_7, &VAR_11.src, &VAR_11.dst);
 VAR_11.proto = VAR_1;
 VAR_11.mode = VAR_2;
 VAR_11.reqid = 0;
 VAR_12 = FUNC_2(&VAR_11);
 if (VAR_12 == ((void*)0)) {
  FUNC_0(VAR_4);
  return (VAR_0);
 }




 FUNC_6(VAR_8);
 FUNC_7(VAR_7, VAR_8, VAR_12, VAR_10);
 FUNC_5(VAR_8);
 FUNC_3(&VAR_12);
 if (FUNC_1(VAR_9, VAR_10, VAR_3) != 0) {
  FUNC_0(VAR_5);
  return (VAR_0);
 }
 FUNC_0(VAR_6);
 return (0);
}
