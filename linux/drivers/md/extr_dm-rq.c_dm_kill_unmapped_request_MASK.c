
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_flags; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int ) ;

__attribute__((used)) static void FUNC_1(struct request *VAR_1, blk_status_t VAR_2)
{
 VAR_1->rq_flags |= VAR_0;
 FUNC_0(VAR_1, VAR_2);
}
