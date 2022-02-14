
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atom_str {unsigned short str_len; struct atom_str* next_atom; scalar_t__* str_dat; } ;


 int VAR_0 ;
 struct atom_str** VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (char const*,unsigned short) ;
 struct atom_str* FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__*,char const*,unsigned short) ;
 int FUNC_3 (char const*,scalar_t__*,unsigned short) ;

__attribute__((used)) static struct atom_str *FUNC_4(const char *VAR_4, unsigned short VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4, VAR_5) % VAR_2;
 struct atom_str *VAR_7;

 for (VAR_7 = VAR_1[VAR_6]; VAR_7; VAR_7 = VAR_7->next_atom)
  if (VAR_7->str_len == VAR_5 && !FUNC_3(VAR_4, VAR_7->str_dat, VAR_5))
   return VAR_7;

 VAR_7 = FUNC_1(&VAR_3, sizeof(struct atom_str) + VAR_5 + 1);
 VAR_7->str_len = VAR_5;
 FUNC_2(VAR_7->str_dat, VAR_4, VAR_5);
 VAR_7->str_dat[VAR_5] = 0;
 VAR_7->next_atom = VAR_1[VAR_6];
 VAR_1[VAR_6] = VAR_7;
 VAR_0++;
 return VAR_7;
}
