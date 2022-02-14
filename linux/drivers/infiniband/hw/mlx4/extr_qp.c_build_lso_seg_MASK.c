
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_wqe_lso_seg {int header; } ;
struct TYPE_4__ {unsigned int max_gs; } ;
struct mlx4_ib_qp {int flags; TYPE_2__ sq; } ;
struct TYPE_3__ {unsigned int num_sge; } ;
struct ib_ud_wr {int hlen; int mss; int header; TYPE_1__ wr; } ;
typedef int __be32 ;


 unsigned int FUNC_0 (int,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mlx4_wqe_lso_seg *VAR_3,
    const struct ib_ud_wr *VAR_4, struct mlx4_ib_qp *VAR_5,
    unsigned *VAR_6, __be32 *VAR_7, __be32 *VAR_8)
{
 unsigned VAR_9 = FUNC_0(sizeof *VAR_3 + VAR_4->hlen, 16);

 if (FUNC_3(VAR_9 > VAR_1))
  *VAR_8 = FUNC_1(1 << 6);

 if (FUNC_3(!(VAR_5->flags & VAR_2) &&
       VAR_4->wr.num_sge > VAR_5->sq.max_gs - (VAR_9 >> 4)))
  return -VAR_0;

 FUNC_2(VAR_3->header, VAR_4->header, VAR_4->hlen);

 *VAR_7 = FUNC_1(VAR_4->mss << 16 | VAR_4->hlen);
 *VAR_6 = VAR_9;
 return 0;
}
