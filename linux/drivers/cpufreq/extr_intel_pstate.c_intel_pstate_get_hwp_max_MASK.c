
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int hwp_cap_cached; } ;
struct TYPE_3__ {scalar_t__ no_turbo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__** VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (unsigned int,int ,int *) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_3, int *VAR_4,
         int *VAR_5)
{
 u64 VAR_6;

 FUNC_3(VAR_3, VAR_0, &VAR_6);
 FUNC_2(VAR_1[VAR_3]->hwp_cap_cached, VAR_6);
 if (VAR_2.no_turbo)
  *VAR_5 = FUNC_0(VAR_6);
 else
  *VAR_5 = FUNC_1(VAR_6);

 *VAR_4 = FUNC_1(VAR_6);
}
