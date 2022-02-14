
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct n2_crypto_chunk {unsigned long iv_paddr; size_t arr_len; unsigned long dest_paddr; unsigned long dest_final; int entry; TYPE_3__* arr; } ;
struct TYPE_5__ {unsigned long offset; int page; } ;
struct TYPE_4__ {unsigned long offset; int page; } ;
struct ablkcipher_walk {int nbytes; int blocksize; TYPE_2__ dst; TYPE_1__ src; } ;
struct n2_request_context {int chunk_list; struct n2_crypto_chunk chunk; struct ablkcipher_walk walk; } ;
struct ablkcipher_request {int nbytes; int src; int dst; } ;
struct TYPE_6__ {unsigned long src_paddr; int src_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 size_t VAR_2 ;
 struct n2_request_context* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct ablkcipher_request*,struct ablkcipher_walk*,int) ;
 int FUNC_3 (struct ablkcipher_walk*,int ,int ,int ) ;
 int FUNC_4 (struct ablkcipher_request*,struct ablkcipher_walk*) ;
 int FUNC_5 (int,int ) ;
 struct n2_crypto_chunk* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 unsigned long FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct ablkcipher_request *VAR_3)
{
 struct n2_request_context *VAR_4 = FUNC_1(VAR_3);
 struct ablkcipher_walk *VAR_5 = &VAR_4->walk;
 struct n2_crypto_chunk *VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;
 bool VAR_9;
 int VAR_10, VAR_11;

 FUNC_3(VAR_5, VAR_3->dst, VAR_3->src, VAR_3->nbytes);
 VAR_10 = FUNC_4(VAR_3, VAR_5);
 if (VAR_10)
  return VAR_10;

 FUNC_0(&VAR_4->chunk_list);

 VAR_6 = &VAR_4->chunk;
 FUNC_0(&VAR_6->entry);

 VAR_6->iv_paddr = 0UL;
 VAR_6->arr_len = 0;
 VAR_6->dest_paddr = 0UL;

 VAR_9 = 0;
 VAR_7 = ~0UL;
 VAR_8 = 0;

 while ((VAR_11 = VAR_5->nbytes) != 0) {
  unsigned long VAR_12, VAR_13;
  bool VAR_14;
  int VAR_15;

  VAR_13 = (FUNC_8(VAR_5->src.page) +
        VAR_5->src.offset);
  VAR_12 = (FUNC_8(VAR_5->dst.page) +
         VAR_5->dst.offset);
  VAR_14 = (VAR_13 == VAR_12);
  VAR_15 = FUNC_5(VAR_11, VAR_5->blocksize);

  if (VAR_6->arr_len != 0) {
   if (VAR_14 != VAR_9 ||
       (!VAR_9 &&
        VAR_12 != VAR_7) ||
       VAR_6->arr_len == VAR_2 ||
       VAR_8 + VAR_15 > (1 << 16)) {
    VAR_6->dest_final = VAR_7;
    FUNC_7(&VAR_6->entry,
           &VAR_4->chunk_list);
    VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
    if (!VAR_6) {
     VAR_10 = -VAR_0;
     break;
    }
    FUNC_0(&VAR_6->entry);
   }
  }
  if (VAR_6->arr_len == 0) {
   VAR_6->dest_paddr = VAR_12;
   VAR_8 = 0;
  }
  VAR_6->arr[VAR_6->arr_len].src_paddr = VAR_13;
  VAR_6->arr[VAR_6->arr_len].src_len = VAR_15;
  VAR_6->arr_len++;

  VAR_7 = VAR_12 + VAR_15;
  VAR_9 = VAR_14;
  VAR_8 += VAR_15;

  VAR_10 = FUNC_2(VAR_3, VAR_5, VAR_11 - VAR_15);
  if (VAR_10)
   break;
 }
 if (!VAR_10 && VAR_6->arr_len != 0) {
  VAR_6->dest_final = VAR_7;
  FUNC_7(&VAR_6->entry, &VAR_4->chunk_list);
 }

 return VAR_10;
}
