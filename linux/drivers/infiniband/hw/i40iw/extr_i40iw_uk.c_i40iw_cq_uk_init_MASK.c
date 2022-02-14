
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_cqe {int dummy; } ;
struct i40iw_cq_uk_init_info {scalar_t__ cq_size; int avoid_mem_cflct; int shadow_area; int cqe_alloc_reg; int cq_id; scalar_t__ cq_base; } ;
struct i40iw_cq_uk {scalar_t__ cq_size; int polarity; int ops; int cq_ring; int avoid_mem_cflct; int shadow_area; int cqe_alloc_reg; int cq_id; struct i40iw_cqe* cq_base; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_3 ;

enum i40iw_status_code FUNC_1(struct i40iw_cq_uk *VAR_4,
     struct i40iw_cq_uk_init_info *VAR_5)
{
 if ((VAR_5->cq_size < VAR_2) ||
     (VAR_5->cq_size > VAR_1))
  return VAR_0;
 VAR_4->cq_base = (struct i40iw_cqe *)VAR_5->cq_base;
 VAR_4->cq_id = VAR_5->cq_id;
 VAR_4->cq_size = VAR_5->cq_size;
 VAR_4->cqe_alloc_reg = VAR_5->cqe_alloc_reg;
 VAR_4->shadow_area = VAR_5->shadow_area;
 VAR_4->avoid_mem_cflct = VAR_5->avoid_mem_cflct;

 FUNC_0(VAR_4->cq_ring, VAR_4->cq_size);
 VAR_4->polarity = 1;
 VAR_4->ops = VAR_3;

 return 0;
}
