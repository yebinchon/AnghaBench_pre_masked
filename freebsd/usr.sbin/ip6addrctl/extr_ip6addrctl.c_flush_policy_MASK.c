
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policyqueue {int pc_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct policyqueue* FUNC_0 (int *) ;
 struct policyqueue* FUNC_1 (struct policyqueue*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct policyqueue *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_5(VAR_0, VAR_3, VAR_1)) < 0)
  FUNC_3(1, "socket(UDP)");

 for (VAR_6 = FUNC_0(&VAR_5); VAR_6;
      VAR_6 = FUNC_1(VAR_6, VAR_4)) {
  if (FUNC_4(VAR_7, VAR_2, &VAR_6->pc_policy))
   FUNC_6("ioctl(SIOCDADDRCTL_POLICY)");
 }

 FUNC_2(VAR_7);
}
