
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_ctx {int region_size_bits; unsigned int nr_paths; int region_size; } ;
typedef int sector_t ;


 int FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (struct switch_ctx*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static unsigned FUNC_3(struct switch_ctx *VAR_0, sector_t VAR_1)
{
 unsigned VAR_2;
 sector_t VAR_3;

 VAR_3 = VAR_1;
 if (VAR_0->region_size_bits >= 0)
  VAR_3 >>= VAR_0->region_size_bits;
 else
  FUNC_0(VAR_3, VAR_0->region_size);

 VAR_2 = FUNC_1(VAR_0, VAR_3);


 if (FUNC_2(VAR_2 >= VAR_0->nr_paths))
  VAR_2 = 0;

 return VAR_2;
}
