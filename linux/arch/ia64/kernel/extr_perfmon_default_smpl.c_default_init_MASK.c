
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_3__ {int hdr_cur_offs; unsigned long hdr_overflows; unsigned long hdr_count; int hdr_version; int hdr_buf_size; } ;
typedef TYPE_1__ pfm_default_smpl_hdr_t ;
struct TYPE_4__ {int buf_size; } ;
typedef TYPE_2__ pfm_default_smpl_arg_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int
FUNC_2(struct task_struct *VAR_1, void *VAR_2, unsigned int VAR_3, int VAR_4, void *VAR_5)
{
 pfm_default_smpl_hdr_t *VAR_6;
 pfm_default_smpl_arg_t *VAR_7 = (pfm_default_smpl_arg_t *)VAR_5;

 VAR_6 = (pfm_default_smpl_hdr_t *)VAR_2;

 VAR_6->hdr_version = VAR_0;
 VAR_6->hdr_buf_size = VAR_7->buf_size;
 VAR_6->hdr_cur_offs = sizeof(*VAR_6);
 VAR_6->hdr_overflows = 0UL;
 VAR_6->hdr_count = 0UL;

 FUNC_0(("[%d] buffer=%p buf_size=%lu hdr_size=%lu hdr_version=%u cur_offs=%lu\n",
  FUNC_1(VAR_1),
  VAR_2,
  VAR_6->hdr_buf_size,
  sizeof(*VAR_6),
  VAR_6->hdr_version,
  VAR_6->hdr_cur_offs));

 return 0;
}
