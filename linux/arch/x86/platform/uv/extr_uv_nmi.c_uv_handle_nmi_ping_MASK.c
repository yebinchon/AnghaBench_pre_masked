
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int pinging; int pings; int queries; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (unsigned int,struct pt_regs*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_4, struct pt_regs *VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_1.queries);
 if (!FUNC_2(VAR_1.pinging)) {
  FUNC_0(&VAR_3);
  return VAR_0;
 }

 FUNC_1(VAR_1.pings);
 FUNC_0(&VAR_2);
 VAR_6 = FUNC_4(VAR_4, VAR_5);
 FUNC_3(VAR_1.pinging, 0);
 return VAR_6;
}
