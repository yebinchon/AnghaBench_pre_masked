
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {int file; int line_prefix_length; int line_prefix; } ;


 int FUNC_0 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct diff_options *VAR_0)
{
 if (!VAR_0 || !VAR_0->line_prefix)
  return;

 FUNC_0(VAR_0->line_prefix,
        sizeof(char),
        VAR_0->line_prefix_length,
        VAR_0->file);
}
