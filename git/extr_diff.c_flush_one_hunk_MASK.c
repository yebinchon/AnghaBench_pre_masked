
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {unsigned char* hash; } ;
typedef int git_hash_ctx ;
struct TYPE_2__ {int rawsz; int (* init_fn ) (int *) ;int (* final_fn ) (unsigned char*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;

void FUNC_2(struct object_id *VAR_2, git_hash_ctx *VAR_3)
{
 unsigned char VAR_4[VAR_0];
 unsigned short VAR_5 = 0;
 int VAR_6;

 VAR_1->final_fn(VAR_4, VAR_3);
 VAR_1->init_fn(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_1->rawsz; ++VAR_6) {
  VAR_5 += VAR_2->hash[VAR_6] + VAR_4[VAR_6];
  VAR_2->hash[VAR_6] = VAR_5;
  VAR_5 >>= 8;
 }
}
