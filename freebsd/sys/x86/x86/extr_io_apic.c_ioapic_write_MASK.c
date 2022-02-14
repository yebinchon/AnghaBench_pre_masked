
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int ioregsel; int iowin; } ;
typedef TYPE_1__ ioapic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(volatile ioapic_t *VAR_2, int VAR_3, u_int VAR_4)
{

 FUNC_0(&VAR_1, VAR_0);
 VAR_2->ioregsel = VAR_3;
 VAR_2->iowin = VAR_4;
}
