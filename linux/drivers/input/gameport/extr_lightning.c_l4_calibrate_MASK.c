
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l4 {int port; } ;
struct gameport {struct l4* port_data; } ;


 scalar_t__ FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(struct gameport *VAR_0, int *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5[4];
 struct l4 *VAR_6 = VAR_0->port_data;

 if (FUNC_0(VAR_6->port, VAR_5))
  return -1;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_4 = (VAR_2[VAR_3] * VAR_5[VAR_3]) / 200;
  VAR_4 = (VAR_4 < 1) ? 1 : ((VAR_4 > 255) ? 255 : VAR_4);
  VAR_1[VAR_3] = (VAR_1[VAR_3] < 0) ? -1 : (VAR_1[VAR_3] * VAR_5[VAR_3]) / VAR_4;
  VAR_1[VAR_3] = (VAR_1[VAR_3] > 252) ? 252 : VAR_1[VAR_3];
  VAR_5[VAR_3] = VAR_4;
 }

 if (FUNC_1(VAR_6->port, VAR_5))
  return -1;

 return 0;
}
