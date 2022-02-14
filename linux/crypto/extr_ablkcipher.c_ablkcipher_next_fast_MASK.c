
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {void* offset; void* page; } ;
struct TYPE_4__ {void* offset; void* page; } ;
struct ablkcipher_walk {TYPE_3__ out; TYPE_2__ dst; TYPE_3__ in; TYPE_1__ src; } ;
struct ablkcipher_request {int dummy; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static inline int FUNC_2(struct ablkcipher_request *VAR_0,
           struct ablkcipher_walk *VAR_1)
{
 VAR_1->src.page = FUNC_1(&VAR_1->in);
 VAR_1->src.offset = FUNC_0(VAR_1->in.offset);
 VAR_1->dst.page = FUNC_1(&VAR_1->out);
 VAR_1->dst.offset = FUNC_0(VAR_1->out.offset);

 return 0;
}
