
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pack_window {scalar_t__ offset; scalar_t__ len; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ rawsz; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pack_window *VAR_1, off_t VAR_2)
{






 off_t VAR_3 = VAR_1->offset;
 return VAR_3 <= VAR_2
  && (VAR_2 + VAR_0->rawsz) <= (VAR_3 + VAR_1->len);
}
