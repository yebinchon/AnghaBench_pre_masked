
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int i; int offset; int sum; int o; } ;
typedef TYPE_1__ ocb_hash ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int const*,int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, const uint8_t *VAR_1)
{
  ocb_hash *VAR_2 = VAR_0;


  FUNC_1(VAR_2->o, FUNC_0(VAR_2->i), VAR_2->offset);


  FUNC_2(VAR_2->o, VAR_1, VAR_2->sum, VAR_2->offset);

  VAR_2->i++;
}
