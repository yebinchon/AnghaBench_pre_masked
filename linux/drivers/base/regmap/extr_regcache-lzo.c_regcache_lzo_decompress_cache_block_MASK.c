
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct regcache_lzo_ctx {scalar_t__ dst_len; int dst; scalar_t__ decompressed_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct regcache_lzo_ctx*) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_2,
  struct regcache_lzo_ctx *VAR_3)
{
 int VAR_4;

 VAR_3->dst_len = VAR_3->decompressed_size;
 VAR_3->dst = FUNC_0(VAR_3->dst_len, VAR_1);
 if (!VAR_3->dst) {
  VAR_3->dst_len = 0;
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 return 0;
}
