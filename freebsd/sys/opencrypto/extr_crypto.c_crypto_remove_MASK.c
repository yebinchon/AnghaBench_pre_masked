
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptocap {scalar_t__ cc_sessions; scalar_t__ cc_koperations; } ;


 int VAR_0 ;
 int FUNC_0 (struct cryptocap*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct cryptocap *VAR_2)
{

 FUNC_1(&VAR_1, VAR_0);
 if (VAR_2->cc_sessions == 0 && VAR_2->cc_koperations == 0)
  FUNC_0(VAR_2, sizeof(*VAR_2));
}
