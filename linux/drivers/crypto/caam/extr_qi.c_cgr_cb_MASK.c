
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {int dummy; } ;
struct qman_cgr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct qman_portal *VAR_2, struct qman_cgr *VAR_3, int VAR_4)
{
 VAR_0 = VAR_4;

 if (VAR_4) {



  FUNC_0("CAAM entered congestion\n");

 } else {
  FUNC_0("CAAM exited congestion\n");
 }
}
