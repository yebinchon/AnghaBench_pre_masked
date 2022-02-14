
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_dev {int ib_dev; } ;
struct TYPE_2__ {int port_num; } ;
struct ib_event {TYPE_1__ element; int event; int * device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_event*) ;
 int FUNC_1 (struct mthca_dev*,char*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct mthca_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct ib_event VAR_5;

 FUNC_1(VAR_2, "Port change to %s for port %d\n",
    VAR_4 ? "active" : "down", VAR_3);

 VAR_5.device = &VAR_2->ib_dev;
 VAR_5.event = VAR_4 ? VAR_0 : VAR_1;
 VAR_5.element.port_num = VAR_3;

 FUNC_0(&VAR_5);
}
