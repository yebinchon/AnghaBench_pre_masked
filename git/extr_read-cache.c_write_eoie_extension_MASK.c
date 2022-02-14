
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char uint32_t ;
struct strbuf {int dummy; } ;
typedef int git_hash_ctx ;
struct TYPE_2__ {int rawsz; int (* final_fn ) (unsigned char*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (struct strbuf*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_2, git_hash_ctx *VAR_3, size_t VAR_4)
{
 uint32_t VAR_5;
 unsigned char VAR_6[VAR_0];


 FUNC_0(&VAR_5, VAR_4);
 FUNC_1(VAR_2, &VAR_5, sizeof(uint32_t));


 VAR_1->final_fn(VAR_6, VAR_3);
 FUNC_1(VAR_2, VAR_6, VAR_1->rawsz);
}
