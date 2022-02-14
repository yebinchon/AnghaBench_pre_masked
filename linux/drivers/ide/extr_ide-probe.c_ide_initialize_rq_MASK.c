
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_2__ {int sense; } ;
struct ide_request {int sense; TYPE_1__ sreq; int * special; } ;


 struct ide_request* FUNC_0 (struct request*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_0)
{
 struct ide_request *VAR_1 = FUNC_0(VAR_0);

 VAR_1->special = ((void*)0);
 FUNC_1(&VAR_1->sreq);
 VAR_1->sreq.sense = VAR_1->sense;
}
