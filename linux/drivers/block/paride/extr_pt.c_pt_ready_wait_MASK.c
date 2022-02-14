
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_unit {int last_sense; } ;


 char VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct pt_unit*,char*,int ,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct pt_unit *VAR_2, int VAR_3)
{
 char VAR_4[12] = { VAR_0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
 int VAR_5, VAR_6;

 VAR_5 = 0;
 while (VAR_5 < VAR_3) {
  VAR_2->last_sense = 0;
  FUNC_1(VAR_2, VAR_4, 0, ((void*)0), FUNC_0("test unit ready"));
  VAR_6 = VAR_2->last_sense;
  if (!VAR_6)
   return 0;
  if (!(((VAR_6 & 0xffff) == 0x0402) || ((VAR_6 & 0xff) == 6)))
   return VAR_6;
  VAR_5++;
  FUNC_2(VAR_1);
 }
 return 0x000020;
}
