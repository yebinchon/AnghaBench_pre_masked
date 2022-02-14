
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dest; int dest_is_sock; char* src_name; char* dest_name; scalar_t__ bufuse; void* state; scalar_t__ src_is_sock; scalar_t__ src; } ;
struct TYPE_3__ {int src; int dest; int src_is_sock; char* src_name; char* dest_name; scalar_t__ bufuse; void* state; scalar_t__ dest_is_sock; } ;
struct bidirectional_transfer_state {TYPE_2__ gtp; TYPE_1__ ptg; } ;


 void* VAR_0 ;
 int FUNC_0 (struct bidirectional_transfer_state*) ;

int FUNC_1(int VAR_1, int VAR_2)
{
 struct bidirectional_transfer_state VAR_3;


 VAR_3.ptg.src = VAR_1;
 VAR_3.ptg.dest = 1;
 VAR_3.ptg.src_is_sock = (VAR_1 == VAR_2);
 VAR_3.ptg.dest_is_sock = 0;
 VAR_3.ptg.state = VAR_0;
 VAR_3.ptg.bufuse = 0;
 VAR_3.ptg.src_name = "remote input";
 VAR_3.ptg.dest_name = "stdout";

 VAR_3.gtp.src = 0;
 VAR_3.gtp.dest = VAR_2;
 VAR_3.gtp.src_is_sock = 0;
 VAR_3.gtp.dest_is_sock = (VAR_1 == VAR_2);
 VAR_3.gtp.state = VAR_0;
 VAR_3.gtp.bufuse = 0;
 VAR_3.gtp.src_name = "stdin";
 VAR_3.gtp.dest_name = "remote output";

 return FUNC_0(&VAR_3);
}
