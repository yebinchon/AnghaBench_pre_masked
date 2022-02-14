
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct dpages {TYPE_1__ context_bi; scalar_t__ context_ptr; } ;
struct bio_vec {int dummy; } ;


 int FUNC_0 (struct bio_vec*,TYPE_1__*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct dpages *VAR_0)
{
 unsigned int VAR_1 = (unsigned int)VAR_0->context_bi.bi_sector;

 FUNC_0((struct bio_vec *)VAR_0->context_ptr,
     &VAR_0->context_bi, VAR_1);
}
