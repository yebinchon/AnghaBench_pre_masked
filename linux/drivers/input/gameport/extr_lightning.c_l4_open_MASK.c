
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l4 {scalar_t__ port; } ;
struct gameport {struct l4* port_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gameport *VAR_3, int VAR_4)
{
 struct l4 *VAR_5 = VAR_3->port_data;

        if (VAR_5->port != 0 && VAR_4 != VAR_0)
  return -1;
 FUNC_0(VAR_2, VAR_1);
 return 0;
}
