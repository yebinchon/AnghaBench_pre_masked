
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ output_format_idx; int output_stdout; int load_from_disk; int read_stdin; int filenames_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (void)
{


  if (!FUNC_1 (VAR_1) || VAR_2.output_format_idx > 0)
    VAR_2.output_stdout = 1;

  if (!FUNC_1 (VAR_0))
    FUNC_2 ();

  if (!VAR_2.filenames_idx && !VAR_2.read_stdin && !VAR_2.load_from_disk)
    FUNC_0 ();
}
