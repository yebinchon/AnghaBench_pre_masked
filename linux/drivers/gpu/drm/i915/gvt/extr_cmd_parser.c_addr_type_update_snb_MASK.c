
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser_exec_state {scalar_t__ buf_type; int buf_addr_type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct parser_exec_state*,int ) ;

__attribute__((used)) static void FUNC_2(struct parser_exec_state *VAR_2)
{
 if ((VAR_2->buf_type == VAR_1) &&
   (FUNC_0(FUNC_1(VAR_2, 0)) == 1)) {
  VAR_2->buf_addr_type = VAR_0;
 }
}
