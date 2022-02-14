
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ freq; } ;
struct cf_level {TYPE_1__ total_set; } ;
struct TYPE_4__ {int tc_frequency; scalar_t__ tc_priv; } ;


 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(void *VAR_3, const struct cf_level *VAR_4, int VAR_5)
{
 uint64_t VAR_6;


 if (VAR_0 || VAR_5 != 0)
  return;


 VAR_6 = (uint64_t)VAR_4->total_set.freq * 1000000;
 FUNC_0(&VAR_1, VAR_6);
 VAR_2.tc_frequency =
     VAR_6 >> (int)(intptr_t)VAR_2.tc_priv;
}
