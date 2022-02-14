
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_flags; int extra_len; int ioprio; int nr_phys_segments; int special_vec; int __data_len; int __sector; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_1, struct request *VAR_2)
{
 VAR_1->__sector = FUNC_1(VAR_2);
 VAR_1->__data_len = FUNC_0(VAR_2);
 if (VAR_2->rq_flags & VAR_0) {
  VAR_1->rq_flags |= VAR_0;
  VAR_1->special_vec = VAR_2->special_vec;
 }
 VAR_1->nr_phys_segments = VAR_2->nr_phys_segments;
 VAR_1->ioprio = VAR_2->ioprio;
 VAR_1->extra_len = VAR_2->extra_len;
}
