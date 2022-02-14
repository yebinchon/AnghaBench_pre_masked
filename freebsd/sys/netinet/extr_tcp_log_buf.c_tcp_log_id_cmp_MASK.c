
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_log_id_bucket {int tlb_id; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static __inline int
FUNC_2(struct tcp_log_id_bucket *VAR_1, struct tcp_log_id_bucket *VAR_2)
{
 FUNC_0(VAR_1 != ((void*)0), ("tcp_log_id_cmp: argument a is unexpectedly NULL"));
 FUNC_0(VAR_2 != ((void*)0), ("tcp_log_id_cmp: argument b is unexpectedly NULL"));
 return FUNC_1(VAR_1->tlb_id, VAR_2->tlb_id, VAR_0);
}
