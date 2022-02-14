
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
typedef int async_cookie_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_port*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, async_cookie_t VAR_2)
{
 struct ata_port *VAR_3 = VAR_1;
 if (!(VAR_3->host->flags & VAR_0) && VAR_3->port_no != 0)
  FUNC_0(VAR_2);

 (void)FUNC_1(VAR_3);


 FUNC_0(VAR_2);

 FUNC_2(VAR_3, 1);
}
