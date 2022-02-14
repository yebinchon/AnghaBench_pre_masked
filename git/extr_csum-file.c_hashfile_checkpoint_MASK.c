
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashfile_checkpoint {int ctx; int offset; } ;
struct hashfile {int ctx; int total; } ;


 int FUNC_0 (struct hashfile*) ;

void FUNC_1(struct hashfile *VAR_0, struct hashfile_checkpoint *VAR_1)
{
 FUNC_0(VAR_0);
 VAR_1->offset = VAR_0->total;
 VAR_1->ctx = VAR_0->ctx;
}
