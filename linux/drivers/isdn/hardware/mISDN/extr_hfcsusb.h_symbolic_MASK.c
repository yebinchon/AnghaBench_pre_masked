
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfcusb_symbolic_list {char const* name; int const num; } ;



__attribute__((used)) static inline const char *
FUNC_0(struct hfcusb_symbolic_list VAR_0[], const int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++)
  if (VAR_0[VAR_2].num == VAR_1)
   return VAR_0[VAR_2].name;
 return "<unknown USB Error>";
}
