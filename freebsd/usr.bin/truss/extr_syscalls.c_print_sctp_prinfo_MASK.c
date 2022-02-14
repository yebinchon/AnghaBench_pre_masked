
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_prinfo {int pr_value; int pr_policy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_1, struct sctp_prinfo *VAR_2)
{
 FUNC_1("{pol=", VAR_1);
 FUNC_2(VAR_0, VAR_1, VAR_2->pr_policy);
 FUNC_0(VAR_1, ",val=%u}", VAR_2->pr_value);
}
