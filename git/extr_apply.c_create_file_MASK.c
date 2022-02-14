
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {char* new_name; unsigned int new_mode; unsigned long resultsize; char* result; scalar_t__ conflicted_threeway; } ;
struct apply_state {scalar_t__ update_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct apply_state*,struct patch*) ;
 int FUNC_1 (struct apply_state*,char*,unsigned int,char*,unsigned long) ;
 scalar_t__ FUNC_2 (struct apply_state*,char*,unsigned int,char*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct apply_state *VAR_1, struct patch *VAR_2)
{
 char *VAR_3 = VAR_2->new_name;
 unsigned VAR_4 = VAR_2->new_mode;
 unsigned long VAR_5 = VAR_2->resultsize;
 char *VAR_6 = VAR_2->result;

 if (!VAR_4)
  VAR_4 = VAR_0 | 0644;
 if (FUNC_2(VAR_1, VAR_3, VAR_4, VAR_6, VAR_5))
  return -1;

 if (VAR_2->conflicted_threeway)
  return FUNC_0(VAR_1, VAR_2);
 else if (VAR_1->update_index)
  return FUNC_1(VAR_1, VAR_3, VAR_4, VAR_6, VAR_5);
 return 0;
}
