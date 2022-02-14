
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int saved_end_io; } ;
struct request {TYPE_1__ flush; int end_io; int rq_flags; int biotail; int bio; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct request *VAR_1)
{





 VAR_1->bio = VAR_1->biotail;


 VAR_1->rq_flags &= ~VAR_0;
 VAR_1->end_io = VAR_1->flush.saved_end_io;
}
