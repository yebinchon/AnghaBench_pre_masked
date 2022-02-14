
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5l_log {TYPE_1__* current_io; } ;
struct TYPE_2__ {scalar_t__ meta_offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct r5l_log*) ;
 int FUNC_1 (struct r5l_log*) ;

__attribute__((used)) static int FUNC_2(struct r5l_log *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->current_io &&
     VAR_2->current_io->meta_offset + VAR_3 > VAR_1)
  FUNC_1(VAR_2);

 if (!VAR_2->current_io) {
  VAR_2->current_io = FUNC_0(VAR_2);
  if (!VAR_2->current_io)
   return -VAR_0;
 }

 return 0;
}
