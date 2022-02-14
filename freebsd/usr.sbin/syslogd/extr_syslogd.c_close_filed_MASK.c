
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filed {int f_file; int f_type; int fu_pipe_pid; int * fu_forw_addr; } ;







 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct filed *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_1->f_file == -1)
  return;

 switch (VAR_1->f_type) {
 case 130:
  if (VAR_1->fu_forw_addr != ((void*)0)) {
   FUNC_1(VAR_1->fu_forw_addr);
   VAR_1->fu_forw_addr = ((void*)0);
  }


 case 131:
 case 128:
 case 132:
  VAR_1->f_type = VAR_0;
  break;
 case 129:
  VAR_1->fu_pipe_pid = 0;
  break;
 }
 (void)FUNC_0(VAR_1->f_file);
 VAR_1->f_file = -1;
}
