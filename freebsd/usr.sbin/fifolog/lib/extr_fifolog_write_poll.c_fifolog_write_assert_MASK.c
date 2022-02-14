
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fifolog_writer {scalar_t__ obuf; scalar_t__ obufsize; TYPE_2__* ff; } ;
struct TYPE_4__ {TYPE_1__* zs; } ;
struct TYPE_3__ {scalar_t__ next_out; scalar_t__ avail_out; } ;


 int FUNC_0 (struct fifolog_writer const*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(const struct fifolog_writer *VAR_1)
{

 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1->ff->zs->next_out + VAR_1->ff->zs->avail_out == VAR_1->obuf + VAR_1->obufsize);

}
