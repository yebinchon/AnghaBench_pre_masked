
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct testvec_config {TYPE_2__* src_divs; TYPE_2__* dst_divs; scalar_t__ inplace; } ;
struct kvec {int dummy; } ;
struct iov_iter {int dummy; } ;
struct TYPE_3__ {int nents; int sgl; int sgl_ptr; } ;
struct cipher_test_sglists {TYPE_1__ dst; TYPE_1__ src; } ;
struct TYPE_4__ {scalar_t__ proportion_of_total; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,unsigned int,unsigned int,struct iov_iter*,int *) ;
 int FUNC_1 (struct iov_iter*,int ,struct kvec const*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct cipher_test_sglists *VAR_1,
         const struct testvec_config *VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4,
         unsigned int VAR_5,
         const struct kvec *VAR_6,
         unsigned int VAR_7)
{
 struct iov_iter VAR_8;
 int VAR_9;

 FUNC_1(&VAR_8, VAR_0, VAR_6, VAR_7, VAR_4);
 VAR_9 = FUNC_0(&VAR_1->src, VAR_2->src_divs, VAR_3,
    VAR_2->inplace ?
     FUNC_2(VAR_5, VAR_4) :
     VAR_4,
    &VAR_8, ((void*)0));
 if (VAR_9)
  return VAR_9;

 if (VAR_2->inplace) {
  VAR_1->dst.sgl_ptr = VAR_1->src.sgl;
  VAR_1->dst.nents = VAR_1->src.nents;
  return 0;
 }
 return FUNC_0(&VAR_1->dst,
     VAR_2->dst_divs[0].proportion_of_total ?
     VAR_2->dst_divs : VAR_2->src_divs,
     VAR_3, VAR_5, ((void*)0), ((void*)0));
}
