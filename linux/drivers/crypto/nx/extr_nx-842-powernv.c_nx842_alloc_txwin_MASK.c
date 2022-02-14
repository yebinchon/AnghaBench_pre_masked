
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vas_window {int dummy; } ;
struct vas_tx_win_attr {scalar_t__ pid; scalar_t__ lpid; } ;
struct TYPE_2__ {int id; } ;
struct nx842_coproc {int ct; TYPE_1__ vas; } ;


 scalar_t__ FUNC_0 (struct vas_window*) ;
 int FUNC_1 (struct vas_window*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct vas_tx_win_attr*,int ) ;
 struct vas_window* FUNC_4 (int ,int ,struct vas_tx_win_attr*) ;

__attribute__((used)) static struct vas_window *FUNC_5(struct nx842_coproc *VAR_0)
{
 struct vas_window *VAR_1 = ((void*)0);
 struct vas_tx_win_attr VAR_2;





 FUNC_3(&VAR_2, VAR_0->ct);
 VAR_2.lpid = 0;
 VAR_2.pid = 0;




 VAR_1 = FUNC_4(VAR_0->vas.id, VAR_0->ct, &VAR_2);
 if (FUNC_0(VAR_1))
  FUNC_2("ibm,nx-842: Can not open TX window: %ld\n",
    FUNC_1(VAR_1));

 return VAR_1;
}
