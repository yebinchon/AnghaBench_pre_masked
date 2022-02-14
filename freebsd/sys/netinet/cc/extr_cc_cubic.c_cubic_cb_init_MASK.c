
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cubic {int mean_rtt_ticks; int min_rtt_ticks; int t_last_cong; } ;
struct cc_var {struct cubic* cc_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cubic* FUNC_0 (int,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct cc_var *VAR_6)
{
 struct cubic *VAR_7;

 VAR_7 = FUNC_0(sizeof(struct cubic), VAR_1, VAR_2|VAR_3);

 if (VAR_7 == ((void*)0))
  return (VAR_0);


 VAR_7->t_last_cong = VAR_5;
 VAR_7->min_rtt_ticks = VAR_4;
 VAR_7->mean_rtt_ticks = 1;

 VAR_6->cc_data = VAR_7;

 return (0);
}
