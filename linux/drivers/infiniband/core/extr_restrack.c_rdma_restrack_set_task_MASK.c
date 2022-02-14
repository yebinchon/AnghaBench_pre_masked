
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_restrack_entry {char const* kern_name; scalar_t__ task; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct rdma_restrack_entry *VAR_1,
       const char *VAR_2)
{
 if (VAR_2) {
  VAR_1->kern_name = VAR_2;
  return;
 }

 if (VAR_1->task)
  FUNC_1(VAR_1->task);
 FUNC_0(VAR_0);
 VAR_1->task = VAR_0;
}
