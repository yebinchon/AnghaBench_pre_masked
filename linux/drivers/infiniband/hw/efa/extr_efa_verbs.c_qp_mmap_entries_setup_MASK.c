
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efa_ucontext {int dummy; } ;
struct efa_qp {scalar_t__ rq_size; int rq_cpu_addr; } ;
struct efa_ibv_create_qp_resp {scalar_t__ sq_db_mmap_key; int sq_db_offset; scalar_t__ llq_desc_mmap_key; int llq_desc_offset; scalar_t__ rq_db_mmap_key; int rq_db_offset; scalar_t__ rq_mmap_key; scalar_t__ rq_mmap_size; } ;
struct efa_dev {scalar_t__ db_bar_addr; scalar_t__ mem_bar_addr; } ;
struct efa_com_create_qp_params {scalar_t__ sq_ring_size_in_bytes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (struct efa_dev*,struct efa_ucontext*,struct efa_qp*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct efa_qp *VAR_7,
     struct efa_dev *VAR_8,
     struct efa_ucontext *VAR_9,
     struct efa_com_create_qp_params *VAR_10,
     struct efa_ibv_create_qp_resp *VAR_11)
{




 VAR_11->sq_db_mmap_key =
  FUNC_1(VAR_8, VAR_9, VAR_7,
      VAR_8->db_bar_addr + VAR_11->sq_db_offset,
      VAR_6, VAR_2);
 if (VAR_11->sq_db_mmap_key == VAR_1)
  return -VAR_4;

 VAR_11->sq_db_offset &= ~VAR_5;

 VAR_11->llq_desc_mmap_key =
  FUNC_1(VAR_8, VAR_9, VAR_7,
      VAR_8->mem_bar_addr + VAR_11->llq_desc_offset,
      FUNC_0(VAR_10->sq_ring_size_in_bytes +
          (VAR_11->llq_desc_offset & ~VAR_5)),
      VAR_3);
 if (VAR_11->llq_desc_mmap_key == VAR_1)
  return -VAR_4;

 VAR_11->llq_desc_offset &= ~VAR_5;

 if (VAR_7->rq_size) {
  VAR_11->rq_db_mmap_key =
   FUNC_1(VAR_8, VAR_9, VAR_7,
       VAR_8->db_bar_addr + VAR_11->rq_db_offset,
       VAR_6, VAR_2);
  if (VAR_11->rq_db_mmap_key == VAR_1)
   return -VAR_4;

  VAR_11->rq_db_offset &= ~VAR_5;

  VAR_11->rq_mmap_key =
   FUNC_1(VAR_8, VAR_9, VAR_7,
       FUNC_2(VAR_7->rq_cpu_addr),
       VAR_7->rq_size, VAR_0);
  if (VAR_11->rq_mmap_key == VAR_1)
   return -VAR_4;

  VAR_11->rq_mmap_size = VAR_7->rq_size;
 }

 return 0;
}
