
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct scatterlist {int length; } ;
struct TYPE_3__ {int dlen; } ;
struct cpt_request_info {TYPE_2__* in; TYPE_1__ req; } ;
struct TYPE_4__ {size_t size; void* vptr; } ;


 size_t FUNC_0 (size_t,int ) ;
 int * FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static inline void FUNC_2(struct cpt_request_info *VAR_0,
         struct scatterlist *VAR_1,
         u32 VAR_2, u32 *VAR_3)
{
 VAR_0->req.dlen += VAR_2;

 while (VAR_2) {
  u32 VAR_4 = FUNC_0(VAR_2, VAR_1->length);
  u8 *VAR_5 = FUNC_1(VAR_1);

  VAR_0->in[*VAR_3].vptr = (void *)VAR_5;
  VAR_0->in[*VAR_3].size = VAR_4;
  VAR_2 -= VAR_4;

  ++(*VAR_3);
  ++VAR_1;
 }
}
