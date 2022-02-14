
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htcp {int t_last_cong; scalar_t__ prev_cwnd; void* minrtt; void* maxrtt; int beta; int alpha; } ;
struct cc_var {struct htcp* cc_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 struct htcp* FUNC_0 (int,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_1(struct cc_var *VAR_7)
{
 struct htcp *VAR_8;

 VAR_8 = FUNC_0(sizeof(struct htcp), VAR_3, VAR_4);

 if (VAR_8 == ((void*)0))
  return (VAR_0);


 VAR_8->alpha = VAR_1;
 VAR_8->beta = VAR_2;
 VAR_8->maxrtt = VAR_5;
 VAR_8->minrtt = VAR_5;
 VAR_8->prev_cwnd = 0;
 VAR_8->t_last_cong = VAR_6;

 VAR_7->cc_data = VAR_8;

 return (0);
}
