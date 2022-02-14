
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {int dummy; } ;
struct gc {TYPE_1__* pd; } ;
struct TYPE_2__ {struct parport* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct parport*,unsigned char) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gc *VAR_3, unsigned long VAR_4,
    unsigned char VAR_5)
{
 struct parport *VAR_6 = VAR_3->pd->port;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  unsigned char VAR_8 = (VAR_4 >> VAR_7) & 1 ? VAR_5 : 0;
  FUNC_0(VAR_6, VAR_2 | VAR_8);
  FUNC_1(VAR_0);
 }
}
