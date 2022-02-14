
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kyber_queue_data {int q; TYPE_2__* domain_tokens; } ;
struct TYPE_3__ {unsigned int depth; } ;
struct TYPE_4__ {TYPE_1__ sb; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int,int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct kyber_queue_data *VAR_2,
    unsigned int VAR_3, unsigned int VAR_4)
{
 VAR_4 = FUNC_0(VAR_4, 1U, VAR_0[VAR_3]);
 if (VAR_4 != VAR_2->domain_tokens[VAR_3].sb.depth) {
  FUNC_1(&VAR_2->domain_tokens[VAR_3], VAR_4);
  FUNC_2(VAR_2->q, VAR_1[VAR_3],
       VAR_4);
 }
}
