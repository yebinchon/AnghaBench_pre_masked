
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {size_t num_reg_defaults_raw; char* reg_defaults_raw; int cache_size_raw; struct regcache_lzo_ctx** cache; } ;
struct regcache_lzo_ctx {unsigned long* sync_bmp; size_t sync_bmp_nbits; char const* src; int src_len; int decompressed_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long*) ;
 unsigned long* FUNC_1 (size_t,int ) ;
 struct regcache_lzo_ctx** FUNC_2 (int,int,int ) ;
 struct regcache_lzo_ctx* FUNC_3 (int,int ) ;
 int FUNC_4 (struct regmap*) ;
 int FUNC_5 (struct regmap*,struct regcache_lzo_ctx*) ;
 int FUNC_6 (struct regmap*) ;
 int FUNC_7 (struct regmap*) ;
 int FUNC_8 (struct regcache_lzo_ctx*) ;

__attribute__((used)) static int FUNC_9(struct regmap *VAR_2)
{
 struct regcache_lzo_ctx **VAR_3;
 size_t VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 const char *VAR_9, *VAR_10;
 unsigned long *VAR_11;

 VAR_5 = 0;

 VAR_8 = FUNC_4(VAR_2);
 VAR_2->cache = FUNC_2(VAR_8, sizeof(*VAR_3),
        VAR_1);
 if (!VAR_2->cache)
  return -VAR_0;
 VAR_3 = VAR_2->cache;







 VAR_4 = VAR_2->num_reg_defaults_raw;
 VAR_11 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_11) {
  VAR_5 = -VAR_0;
  goto err;
 }


 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_3[VAR_6] = FUNC_3(sizeof **VAR_3,
     VAR_1);
  if (!VAR_3[VAR_6]) {
   FUNC_0(VAR_11);
   VAR_5 = -VAR_0;
   goto err;
  }
  VAR_3[VAR_6]->sync_bmp = VAR_11;
  VAR_3[VAR_6]->sync_bmp_nbits = VAR_4;

  VAR_5 = FUNC_8(VAR_3[VAR_6]);
  if (VAR_5 < 0)
   goto err;
 }

 VAR_7 = FUNC_7(VAR_2);
 VAR_9 = VAR_2->reg_defaults_raw;
 VAR_10 = VAR_2->reg_defaults_raw + VAR_2->cache_size_raw;

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++, VAR_9 += VAR_7) {
  VAR_3[VAR_6]->src = VAR_9;
  if (VAR_9 + VAR_7 > VAR_10)
   VAR_3[VAR_6]->src_len = VAR_10 - VAR_9;
  else
   VAR_3[VAR_6]->src_len = VAR_7;
  VAR_5 = FUNC_5(VAR_2,
             VAR_3[VAR_6]);
  if (VAR_5 < 0)
   goto err;
  VAR_3[VAR_6]->decompressed_size =
   VAR_3[VAR_6]->src_len;
 }

 return 0;
err:
 FUNC_6(VAR_2);
 return VAR_5;
}
