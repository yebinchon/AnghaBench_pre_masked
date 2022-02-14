
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bits; } ;
struct TYPE_3__ {int bits; } ;
struct decode_header {TYPE_2__ value; TYPE_1__ mask; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct decode_header *VAR_1, const char* VAR_2)
{

 FUNC_0("FAIL: kprobes test failure \"%s\" (mask %08x, value %08x)\n",
     VAR_2, VAR_1->mask.bits, VAR_1->value.bits);
 return -VAR_0;
}
