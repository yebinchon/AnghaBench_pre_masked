
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batch_options {scalar_t__ buffer_output; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void const*,int,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int,void const*,int) ;

__attribute__((used)) static void FUNC_3(struct batch_options *VAR_1, const void *VAR_2, int VAR_3)
{
 if (VAR_1->buffer_output) {
  if (FUNC_1(VAR_2, 1, VAR_3, VAR_0) != VAR_3)
   FUNC_0("unable to write to stdout");
 } else
  FUNC_2(1, VAR_2, VAR_3);
}
