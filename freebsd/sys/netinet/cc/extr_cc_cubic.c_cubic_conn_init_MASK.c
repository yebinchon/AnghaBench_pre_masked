
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cubic {int max_cwnd; } ;
struct cc_var {struct cubic* cc_data; } ;


 int FUNC_0 (struct cc_var*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct cc_var *VAR_1)
{
 struct cubic *VAR_2;

 VAR_2 = VAR_1->cc_data;






 VAR_2->max_cwnd = FUNC_0(VAR_1, VAR_0);
}
