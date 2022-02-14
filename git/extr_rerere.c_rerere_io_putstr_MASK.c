
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rerere_io {int wrerror; scalar_t__ output; } ;


 int FUNC_0 (char const*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, struct rerere_io *VAR_1)
{
 if (VAR_1->output)
  FUNC_0(VAR_0, VAR_1->output, &VAR_1->wrerror);
}
