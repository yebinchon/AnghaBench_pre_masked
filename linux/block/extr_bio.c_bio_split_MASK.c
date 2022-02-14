
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio_set {int dummy; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bio*,int) ;
 struct bio* FUNC_2 (struct bio*,int ,struct bio_set*) ;
 scalar_t__ FUNC_3 (struct bio*,int ) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*,int ) ;

struct bio *FUNC_8(struct bio *VAR_1, int VAR_2,
        gfp_t VAR_3, struct bio_set *VAR_4)
{
 struct bio *VAR_5;

 FUNC_0(VAR_2 <= 0);
 FUNC_0(VAR_2 >= FUNC_6(VAR_1));

 VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->bi_iter.bi_size = VAR_2 << 9;

 if (FUNC_4(VAR_5))
  FUNC_5(VAR_5);

 FUNC_1(VAR_1, VAR_5->bi_iter.bi_size);

 if (FUNC_3(VAR_1, VAR_0))
  FUNC_7(VAR_5, VAR_0);

 return VAR_5;
}
