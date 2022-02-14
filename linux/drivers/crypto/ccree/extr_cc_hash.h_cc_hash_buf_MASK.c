
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ahash_req_ctx {size_t buff_index; int ** buffers; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct ahash_req_ctx *VAR_0)
{
 return VAR_0->buffers[VAR_0->buff_index];
}
