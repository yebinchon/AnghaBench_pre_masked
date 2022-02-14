
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_hash_ctx ;
struct TYPE_2__ {scalar_t__ rawsz; int (* final_fn ) (scalar_t__,int *) ;int (* update_fn ) (int *,scalar_t__,unsigned int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,unsigned int) ;
 int FUNC_2 (scalar_t__,int *) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_3 (int,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_4(git_hash_ctx *VAR_4, int VAR_5, unsigned char *VAR_6)
{
 unsigned int VAR_7 = VAR_3;

 if (VAR_7) {
  VAR_3 = 0;
  VAR_1->update_fn(VAR_4, VAR_2, VAR_7);
 }


 if (VAR_7 + VAR_1->rawsz > VAR_0) {
  if (FUNC_3(VAR_5, VAR_2, VAR_7) < 0)
   return -1;
  VAR_7 = 0;
 }


 VAR_1->final_fn(VAR_2 + VAR_7, VAR_4);
 FUNC_0(VAR_6, VAR_2 + VAR_7);
 VAR_7 += VAR_1->rawsz;
 return (FUNC_3(VAR_5, VAR_2, VAR_7) < 0) ? -1 : 0;
}
