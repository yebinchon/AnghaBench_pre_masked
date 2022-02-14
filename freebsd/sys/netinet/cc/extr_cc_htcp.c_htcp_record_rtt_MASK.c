
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htcp {scalar_t__ minrtt; scalar_t__ maxrtt; } ;
struct cc_var {struct htcp* cc_data; } ;


 scalar_t__ FUNC_0 (struct cc_var*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct cc_var *VAR_4)
{
 struct htcp *VAR_5;

 VAR_5 = VAR_4->cc_data;
 if ((FUNC_0(VAR_4, VAR_3) < VAR_5->minrtt ||
     VAR_5->minrtt == VAR_1) &&
     (FUNC_0(VAR_4, VAR_2) >= VAR_0))
  VAR_5->minrtt = FUNC_0(VAR_4, VAR_3);





 if (FUNC_0(VAR_4, VAR_3) > VAR_5->maxrtt
     && FUNC_0(VAR_4, VAR_2) >= VAR_0)
  VAR_5->maxrtt = FUNC_0(VAR_4, VAR_3);
}
