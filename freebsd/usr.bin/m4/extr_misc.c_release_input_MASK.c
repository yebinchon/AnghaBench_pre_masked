
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_file {scalar_t__ file; int c; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;

void
FUNC_3(struct input_file *VAR_2)
{
 if (FUNC_2(VAR_2->file))
  FUNC_0(1, "Fatal error reading from %s\n", VAR_2->name);
 if (VAR_2->file != VAR_1)
     FUNC_1(VAR_2->file);
 VAR_2->c = VAR_0;




}
