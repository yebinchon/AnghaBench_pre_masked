
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct in6_addrpolicy {int preced; int label; scalar_t__ use; int addrmask; int addr; } ;
struct policyqueue {struct in6_addrpolicy pc_policy; } ;
typedef int addrbuf ;


 int VAR_0 ;
 int VAR_1 ;
 struct policyqueue* FUNC_0 (int *) ;
 struct policyqueue* FUNC_1 (struct policyqueue*,int ) ;
 scalar_t__ FUNC_2 (struct sockaddr*,int,char*,int,int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,char*,int) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 size_t VAR_4;
 char VAR_5[VAR_0];
 struct in6_addrpolicy *VAR_6;
 struct policyqueue *VAR_7;
 int VAR_8, VAR_9 = 1;

 for (VAR_7 = FUNC_0(&VAR_3); VAR_7;
      VAR_7 = FUNC_1(VAR_7, VAR_2)) {
  VAR_6 = &VAR_7->pc_policy;
  if (VAR_9) {
   FUNC_4("%-30s %5s %5s %8s\n",
          "Prefix", "Prec", "Label", "Use");
   VAR_9 = 0;
  }

  if ((FUNC_2((struct sockaddr *)&VAR_6->addr,
     sizeof(VAR_6->addr), VAR_5, sizeof(VAR_5),
     ((void*)0), 0, VAR_1))) {
   FUNC_7("getnameinfo for prefix address failed");
   continue;
  }
  if ((VAR_8 = FUNC_3(&VAR_6->addrmask)) < 0) {
   FUNC_7("invalid address mask");
   continue;
  }
  VAR_4 = FUNC_6(VAR_5);
  if (VAR_4 + sizeof("/128") < sizeof(VAR_5)) {
   FUNC_5(&VAR_5[VAR_4],
     sizeof(VAR_5) - VAR_4 - 1,
     "/%d", VAR_8);
   FUNC_4("%-30s", VAR_5);
  } else
   FUNC_4("%s/%d", VAR_5, VAR_8);
  FUNC_4(" %5d %5d %8llu\n", VAR_6->preced, VAR_6->label,
      (unsigned long long)VAR_6->use);
 }
}
