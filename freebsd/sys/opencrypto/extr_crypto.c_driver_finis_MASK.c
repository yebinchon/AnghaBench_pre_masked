
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct cryptocap {scalar_t__ cc_sessions; scalar_t__ cc_koperations; int cc_flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct cryptocap*,int) ;

__attribute__((used)) static void
FUNC_2(struct cryptocap *VAR_1)
{
 u_int32_t VAR_2, VAR_3;

 FUNC_0();

 VAR_2 = VAR_1->cc_sessions;
 VAR_3 = VAR_1->cc_koperations;
 FUNC_1(VAR_1, sizeof(*VAR_1));
 if (VAR_2 != 0 || VAR_3 != 0) {




  VAR_1->cc_flags |= VAR_0;
  VAR_1->cc_sessions = VAR_2;
  VAR_1->cc_koperations = VAR_3;
 }
}
