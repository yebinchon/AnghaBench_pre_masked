
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct mlx4_ib_mr {int page_map_size; int page_map; scalar_t__ npages; } ;
struct ib_mr {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct ib_mr*,struct scatterlist*,int,unsigned int*,int ) ;
 int VAR_1 ;
 struct mlx4_ib_mr* FUNC_3 (struct ib_mr*) ;

int FUNC_4(struct ib_mr *VAR_2, struct scatterlist *VAR_3, int VAR_4,
        unsigned int *VAR_5)
{
 struct mlx4_ib_mr *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 VAR_6->npages = 0;

 FUNC_0(VAR_2->device, VAR_6->page_map,
       VAR_6->page_map_size, VAR_0);

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_1);

 FUNC_1(VAR_2->device, VAR_6->page_map,
          VAR_6->page_map_size, VAR_0);

 return VAR_7;
}
