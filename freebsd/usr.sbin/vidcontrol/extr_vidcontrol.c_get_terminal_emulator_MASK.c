
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct term_info {int ti_index; scalar_t__ ti_desc; scalar_t__ ti_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct term_info*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, struct term_info *VAR_2)
{
 VAR_2->ti_index = VAR_1;
 if (FUNC_0(0, VAR_0, VAR_2) == 0)
  return (1);
 FUNC_1((char *)VAR_2->ti_name, "unknown", sizeof(VAR_2->ti_name));
 FUNC_1((char *)VAR_2->ti_desc, "unknown", sizeof(VAR_2->ti_desc));
 return (0);
}
