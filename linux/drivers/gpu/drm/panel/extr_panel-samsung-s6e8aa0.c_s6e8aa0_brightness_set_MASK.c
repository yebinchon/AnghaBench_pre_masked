
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct s6e8aa0 {size_t brightness; int version; TYPE_1__* variant; scalar_t__ error; } ;
struct TYPE_2__ {int ** gamma_tables; } ;


 int VAR_0 ;
 int FUNC_0 (struct s6e8aa0*,int const*,int ) ;
 int FUNC_1 (struct s6e8aa0*,int,int) ;
 int FUNC_2 (struct s6e8aa0*) ;

__attribute__((used)) static void FUNC_3(struct s6e8aa0 *VAR_1)
{
 const u8 *VAR_2;

 if (VAR_1->error)
  return;

 VAR_2 = VAR_1->variant->gamma_tables[VAR_1->brightness];

 if (VAR_1->version >= 142)
  FUNC_2(VAR_1);

 FUNC_0(VAR_1, VAR_2, VAR_0);


 FUNC_1(VAR_1, 0xf7, 0x03);
}
