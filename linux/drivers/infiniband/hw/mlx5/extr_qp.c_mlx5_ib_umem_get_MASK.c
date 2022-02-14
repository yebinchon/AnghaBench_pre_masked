
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_umem {int dummy; } ;
struct ib_udata {int dummy; } ;


 scalar_t__ FUNC_0 (struct ib_umem*) ;
 int FUNC_1 (struct ib_umem*) ;
 struct ib_umem* FUNC_2 (struct ib_udata*,unsigned long,size_t,int ,int ) ;
 int FUNC_3 (struct ib_umem*) ;
 int FUNC_4 (struct ib_umem*,unsigned long,int ,int*,int*,int*,int *) ;
 int FUNC_5 (struct mlx5_ib_dev*,char*,...) ;
 int FUNC_6 (unsigned long,int,int *) ;
 int FUNC_7 (struct mlx5_ib_dev*,char*) ;

__attribute__((used)) static int FUNC_8(struct mlx5_ib_dev *VAR_0, struct ib_udata *VAR_1,
       unsigned long VAR_2, size_t VAR_3,
       struct ib_umem **VAR_4, int *VAR_5, int *VAR_6,
       int *VAR_7, u32 *VAR_8)
{
 int VAR_9;

 *VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3, 0, 0);
 if (FUNC_0(*VAR_4)) {
  FUNC_5(VAR_0, "umem_get failed\n");
  return FUNC_1(*VAR_4);
 }

 FUNC_4(*VAR_4, VAR_2, 0, VAR_5, VAR_6, VAR_7, ((void*)0));

 VAR_9 = FUNC_6(VAR_2, *VAR_6, VAR_8);
 if (VAR_9) {
  FUNC_7(VAR_0, "bad offset\n");
  goto err_umem;
 }

 FUNC_5(VAR_0, "addr 0x%lx, size %zu, npages %d, page_shift %d, ncont %d, offset %d\n",
      VAR_2, VAR_3, *VAR_5, *VAR_6, *VAR_7, *VAR_8);

 return 0;

err_umem:
 FUNC_3(*VAR_4);
 *VAR_4 = ((void*)0);

 return VAR_9;
}
