
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {scalar_t__ old_mode; scalar_t__ new_mode; char* new_name; } ;


 int FUNC_0 (char*,int,int,...) ;

__attribute__((used)) static void FUNC_1(struct patch *VAR_0, int VAR_1)
{
 if (VAR_0->old_mode && VAR_0->new_mode && VAR_0->old_mode != VAR_0->new_mode) {
  if (VAR_1)
   FUNC_0(" mode change %06o => %06o %s\n",
          VAR_0->old_mode, VAR_0->new_mode, VAR_0->new_name);
  else
   FUNC_0(" mode change %06o => %06o\n",
          VAR_0->old_mode, VAR_0->new_mode);
 }
}
