
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; scalar_t__ len; } ;
struct merge_options {int buffer_output; TYPE_1__ obuf; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct merge_options *VAR_1)
{
 if (VAR_1->buffer_output < 2 && VAR_1->obuf.len) {
  FUNC_0(VAR_1->obuf.buf, VAR_0);
  FUNC_1(&VAR_1->obuf);
 }
}
