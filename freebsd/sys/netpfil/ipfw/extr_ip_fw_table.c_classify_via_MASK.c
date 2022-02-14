
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int kidx; } ;
struct TYPE_4__ {char* name; TYPE_1__ p; } ;
typedef TYPE_2__ ipfw_insn_if ;
typedef int ipfw_insn ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(ipfw_insn *VAR_1, uint16_t *VAR_2, uint8_t *VAR_3)
{
 ipfw_insn_if *VAR_4;


 VAR_4 = (ipfw_insn_if *)VAR_1;
 if (VAR_4->name[0] != '\1')
  return (1);

 *VAR_3 = VAR_0;
 *VAR_2 = VAR_4->p.kidx;

 return (0);
}
