
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {struct regcache_lzo_ctx** cache; } ;
struct regcache_lzo_ctx {size_t dst_len; size_t src_len; void* dst; void* src; } ;


 int FUNC_0 (void*) ;
 unsigned int FUNC_1 (struct regmap*,void*,int) ;
 int FUNC_2 (struct regmap*,struct regcache_lzo_ctx*) ;
 int FUNC_3 (struct regmap*,unsigned int) ;
 int FUNC_4 (struct regmap*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct regmap *VAR_0,
        unsigned int VAR_1, unsigned int *VAR_2)
{
 struct regcache_lzo_ctx *VAR_3, **VAR_4;
 int VAR_5, VAR_6, VAR_7;
 size_t VAR_8;
 void *VAR_9;


 VAR_6 = FUNC_3(VAR_0, VAR_1);

 VAR_7 = FUNC_4(VAR_0, VAR_1);
 VAR_4 = VAR_0->cache;
 VAR_3 = VAR_4[VAR_6];


 VAR_9 = VAR_3->dst;
 VAR_8 = VAR_3->dst_len;


 VAR_3->src = VAR_3->dst;
 VAR_3->src_len = VAR_3->dst_len;


 VAR_5 = FUNC_2(VAR_0, VAR_3);
 if (VAR_5 >= 0)

  *VAR_2 = FUNC_1(VAR_0, VAR_3->dst, VAR_7);

 FUNC_0(VAR_3->dst);

 VAR_3->dst = VAR_9;
 VAR_3->dst_len = VAR_8;

 return VAR_5;
}
