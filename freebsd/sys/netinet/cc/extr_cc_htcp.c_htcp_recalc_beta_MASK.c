
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htcp {int minrtt; int maxrtt; int beta; } ;
struct cc_var {struct htcp* cc_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct cc_var *VAR_5)
{
 struct htcp *VAR_6;

 VAR_6 = VAR_5->cc_data;







 if (VAR_4 && VAR_6->minrtt != VAR_3 &&
     VAR_6->maxrtt != VAR_3)
  VAR_6->beta = FUNC_1(FUNC_0(VAR_1,
      (VAR_6->minrtt << VAR_2) / VAR_6->maxrtt),
      VAR_0);
 else
  VAR_6->beta = VAR_1;
}
