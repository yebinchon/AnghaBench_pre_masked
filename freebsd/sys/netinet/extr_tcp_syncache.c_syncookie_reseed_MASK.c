
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int oddeven; int reseed; int ** key; } ;
struct tcp_syncache {TYPE_1__ secret; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct tcp_syncache *VAR_4 = VAR_3;
 uint8_t *VAR_5;
 int VAR_6;







 VAR_6 = (VAR_4->secret.oddeven & 0x1) ? 0 : 1;
 VAR_5 = VAR_4->secret.key[VAR_6];
 FUNC_0(VAR_5, VAR_1, 0);
 FUNC_1(&VAR_4->secret.oddeven, 1);


 FUNC_2(&VAR_4->secret.reseed, VAR_0 * VAR_2);
}
