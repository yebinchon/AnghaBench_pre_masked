
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l4 {int port; } ;
struct gameport {struct l4* port_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct gameport *VAR_4, int *VAR_5, int *VAR_6)
{
 struct l4 *VAR_7 = VAR_4->port_data;
 unsigned char VAR_8;
 int VAR_9, VAR_10 = -1;

 FUNC_2(VAR_2, VAR_1);
 FUNC_2(VAR_3 + (VAR_7->port >> 2), VAR_1);

 if (FUNC_0(VAR_1) & VAR_0) goto fail;
 FUNC_2(VAR_7->port & 3, VAR_1);

 if (FUNC_1()) goto fail;
 VAR_8 = FUNC_0(VAR_1);

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
  if (VAR_8 & (1 << VAR_9)) {
   if (FUNC_1()) goto fail;
   VAR_5[VAR_9] = FUNC_0(VAR_1);
   if (VAR_5[VAR_9] > 252) VAR_5[VAR_9] = -1;
  }

 if (VAR_8 & 0x10) {
  if (FUNC_1()) goto fail;
  *VAR_6 = FUNC_0(VAR_1) & 0x0f;
 }

 VAR_10 = 0;

fail: FUNC_2(VAR_2, VAR_1);
 return VAR_10;
}
