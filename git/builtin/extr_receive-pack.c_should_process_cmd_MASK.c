
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int skip_update; int error_string; } ;



__attribute__((used)) static int FUNC_0(struct command *VAR_0)
{
 return !VAR_0->error_string && !VAR_0->skip_update;
}
