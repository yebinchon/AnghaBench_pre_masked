
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {unsigned long nr_segments; int cmdline_buf; scalar_t__ cmdline_buf_len; scalar_t__ file_mode; int head; int start; int type; } ;


 int FUNC_0 (struct kimage const*,unsigned long) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(const struct kimage *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1("kexec kimage info:\n");
 FUNC_1("  type:        %d\n", VAR_0->type);
 FUNC_1("  start:       %lx\n", VAR_0->start);
 FUNC_1("  head:        %lx\n", VAR_0->head);
 FUNC_1("  nr_segments: %lu\n", VAR_0->nr_segments);

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_segments; VAR_1++)
  FUNC_0(VAR_0, VAR_1);







}
