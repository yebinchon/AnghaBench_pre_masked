
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {scalar_t__ short_cnt; scalar_t__ long_cnt; int * short_buf; int * long_buf; } ;
typedef TYPE_1__ brain_server_db_attack_t ;
typedef int brain_server_attack_short_t ;
typedef int brain_server_attack_long_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,scalar_t__ const,scalar_t__) ;
 scalar_t__ FUNC_2 (int const*,scalar_t__ const,scalar_t__) ;

u64 FUNC_3 (const brain_server_db_attack_t *VAR_0)
{
  const brain_server_attack_long_t *VAR_1 = VAR_0->long_buf;
  const brain_server_attack_short_t *VAR_2 = VAR_0->short_buf;

  const u64 VAR_3 = VAR_0->long_cnt;
  const u64 VAR_4 = VAR_0->short_cnt;

  u64 VAR_5 = FUNC_1 (VAR_1, VAR_3, 0);
  u64 VAR_6 = FUNC_2 (VAR_2, VAR_4, 0);

  u64 VAR_7 = FUNC_0 (VAR_5, VAR_6);

  VAR_5 = FUNC_1 (VAR_1, VAR_3, VAR_7);
  VAR_6 = FUNC_2 (VAR_2, VAR_4, VAR_7);

  VAR_7 = FUNC_0 (VAR_5, VAR_6);

  return VAR_7;
}
