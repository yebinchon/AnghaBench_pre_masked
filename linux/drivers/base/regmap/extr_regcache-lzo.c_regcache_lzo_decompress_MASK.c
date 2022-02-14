
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache_lzo_ctx {size_t dst_len; int dst; int src_len; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,size_t*) ;

__attribute__((used)) static int FUNC_1(struct regcache_lzo_ctx *VAR_2)
{
 size_t VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->dst_len;
 VAR_4 = FUNC_0(VAR_2->src, VAR_2->src_len,
        VAR_2->dst, &VAR_3);
 if (VAR_4 != VAR_1 || VAR_3 != VAR_2->dst_len)
  return -VAR_0;
 return 0;
}
