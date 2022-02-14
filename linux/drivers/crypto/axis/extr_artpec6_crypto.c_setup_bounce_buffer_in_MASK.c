
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct artpec6_crypto_walk {int offset; int sg; } ;
struct artpec6_crypto_req_common {TYPE_1__* dma; int gfp_flags; } ;
struct artpec6_crypto_bounce_buffer {size_t length; int list; int buf; int offset; int sg; } ;
struct TYPE_2__ {int bounce_buffers; } ;


 int VAR_0 ;
 struct artpec6_crypto_bounce_buffer* FUNC_0 (int ) ;
 int FUNC_1 (struct artpec6_crypto_req_common*,int ,size_t,int) ;
 int FUNC_2 (struct artpec6_crypto_bounce_buffer*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,size_t,int ) ;

__attribute__((used)) static int FUNC_5(struct artpec6_crypto_req_common *VAR_1,
      struct artpec6_crypto_walk *VAR_2, size_t VAR_3)
{
 struct artpec6_crypto_bounce_buffer *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1->gfp_flags);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->length = VAR_3;
 VAR_4->sg = VAR_2->sg;
 VAR_4->offset = VAR_2->offset;

 VAR_5 = FUNC_1(VAR_1, VAR_4->buf, VAR_3, 0);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return VAR_5;
 }

 FUNC_4("BOUNCE %zu offset %zu\n", VAR_3, VAR_2->offset);
 FUNC_3(&VAR_4->list, &VAR_1->dma->bounce_buffers);
 return 0;
}
