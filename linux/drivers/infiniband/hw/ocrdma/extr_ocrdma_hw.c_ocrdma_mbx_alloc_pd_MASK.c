
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_pd {int dpp_enabled; int id; int dpp_page; scalar_t__ num_dpp_qp; } ;
struct ocrdma_mqe {int dummy; } ;
struct ocrdma_dev {int dummy; } ;
struct ocrdma_alloc_pd_rsp {int dpp_page_pdid; } ;
struct ocrdma_alloc_pd {int enable_dpp_rsvd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ocrdma_alloc_pd*) ;
 struct ocrdma_alloc_pd* FUNC_1 (int ,int) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

int FUNC_3(struct ocrdma_dev *VAR_6, struct ocrdma_pd *VAR_7)
{
 int VAR_8 = -VAR_0;
 struct ocrdma_alloc_pd *VAR_9;
 struct ocrdma_alloc_pd_rsp *VAR_10;

 VAR_9 = FUNC_1(VAR_5, sizeof(*VAR_9));
 if (!VAR_9)
  return VAR_8;
 if (VAR_7->dpp_enabled)
  VAR_9->enable_dpp_rsvd |= VAR_1;
 VAR_8 = FUNC_2(VAR_6, (struct ocrdma_mqe *)VAR_9);
 if (VAR_8)
  goto mbx_err;
 VAR_10 = (struct ocrdma_alloc_pd_rsp *)VAR_9;
 VAR_7->id = VAR_10->dpp_page_pdid & VAR_4;
 if (VAR_10->dpp_page_pdid & VAR_2) {
  VAR_7->dpp_enabled = 1;
  VAR_7->dpp_page = VAR_10->dpp_page_pdid >>
    VAR_3;
 } else {
  VAR_7->dpp_enabled = 0;
  VAR_7->num_dpp_qp = 0;
 }
mbx_err:
 FUNC_0(VAR_9);
 return VAR_8;
}
