
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct regcache_lzo_ctx {scalar_t__ dst_len; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct regcache_lzo_ctx*) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_3,
  struct regcache_lzo_ctx *VAR_4)
{
 int VAR_5;

 VAR_4->dst_len = FUNC_1(VAR_2);
 VAR_4->dst = FUNC_0(VAR_4->dst_len, VAR_1);
 if (!VAR_4->dst) {
  VAR_4->dst_len = 0;
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
