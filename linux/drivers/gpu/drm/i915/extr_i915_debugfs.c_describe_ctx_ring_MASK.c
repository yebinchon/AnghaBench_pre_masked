
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct intel_ring {int emit; int tail; int head; int space; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, struct intel_ring *VAR_1)
{
 FUNC_0(VAR_0, " (ringbuffer, space: %d, head: %u, tail: %u, emit: %u)",
     VAR_1->space, VAR_1->head, VAR_1->tail, VAR_1->emit);
}
