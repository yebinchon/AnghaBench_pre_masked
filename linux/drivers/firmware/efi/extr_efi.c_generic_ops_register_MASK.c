
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int get_next_variable; int set_variable_nonblocking; int set_variable; int get_variable; } ;
struct TYPE_4__ {int query_variable_store; int get_next_variable; int set_variable_nonblocking; int set_variable; int get_variable; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_1(void)
{
 VAR_4.get_variable = VAR_0.get_variable;
 VAR_4.set_variable = VAR_0.set_variable;
 VAR_4.set_variable_nonblocking = VAR_0.set_variable_nonblocking;
 VAR_4.get_next_variable = VAR_0.get_next_variable;
 VAR_4.query_variable_store = VAR_2;

 return FUNC_0(&VAR_3, &VAR_4, VAR_1);
}
