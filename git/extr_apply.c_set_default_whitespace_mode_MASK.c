
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apply_state {scalar_t__ apply; int ws_error_action; int whitespace_option; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct apply_state *VAR_3)
{
 if (!VAR_3->whitespace_option && !VAR_0)
  VAR_3->ws_error_action = (VAR_3->apply ? VAR_2 : VAR_1);
}
