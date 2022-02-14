
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_ctx {unsigned int region_size; struct dm_target* ti; } ;
struct dm_target {struct switch_ctx* private; } ;


 int VAR_0 ;
 struct switch_ctx* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct switch_ctx*,int ,unsigned int) ;

__attribute__((used)) static struct switch_ctx *FUNC_2(struct dm_target *VAR_2, unsigned VAR_3,
        unsigned VAR_4)
{
 struct switch_ctx *VAR_5;

 VAR_5 = FUNC_0(FUNC_1(VAR_5, VAR_1, VAR_3), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->ti = VAR_2;
 VAR_5->region_size = VAR_4;

 VAR_2->private = VAR_5;

 return VAR_5;
}
