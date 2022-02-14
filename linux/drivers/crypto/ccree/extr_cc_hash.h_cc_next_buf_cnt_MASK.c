
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ahash_req_ctx {int buff_index; int * buf_cnt; } ;



__attribute__((used)) static inline u32 *FUNC_0(struct ahash_req_ctx *VAR_0)
{
 return &VAR_0->buf_cnt[VAR_0->buff_index ^ 1];
}
