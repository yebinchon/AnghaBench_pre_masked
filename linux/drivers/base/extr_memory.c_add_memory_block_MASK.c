
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {int section_count; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct memory_block**,int ,int ) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 unsigned long VAR_1 ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct memory_block *VAR_5;
 unsigned long VAR_6;

 for (VAR_6 = VAR_2; VAR_6 < VAR_2 + VAR_1;
      VAR_6++)
  if (FUNC_2(VAR_6))
   VAR_4++;

 if (VAR_4 == 0)
  return 0;
 VAR_3 = FUNC_1(&VAR_5, FUNC_0(VAR_2),
    VAR_0);
 if (VAR_3)
  return VAR_3;
 VAR_5->section_count = VAR_4;
 return 0;
}
