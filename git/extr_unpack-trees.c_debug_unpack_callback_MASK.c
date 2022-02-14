
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int dummy; } ;
struct name_entry {int dummy; } ;


 int FUNC_0 (int,struct name_entry*) ;
 int FUNC_1 (struct traverse_info*) ;
 int FUNC_2 (char*,unsigned long,unsigned long,int) ;
 int FUNC_3 (char) ;

__attribute__((used)) static void FUNC_4(int VAR_0,
      unsigned long VAR_1,
      unsigned long VAR_2,
      struct name_entry *VAR_3,
      struct traverse_info *VAR_4)
{
 int VAR_5;
 FUNC_2("* unpack mask %lu, dirmask %lu, cnt %d ",
        VAR_1, VAR_2, VAR_0);
 FUNC_1(VAR_4);
 FUNC_3('\n');
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_0(VAR_5, VAR_3 + VAR_5);
}
