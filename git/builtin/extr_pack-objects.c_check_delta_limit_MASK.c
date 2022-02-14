
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_entry {int dummy; } ;


 struct object_entry* FUNC_0 (struct object_entry*) ;
 struct object_entry* FUNC_1 (struct object_entry*) ;

__attribute__((used)) static unsigned int FUNC_2(struct object_entry *VAR_0, unsigned int VAR_1)
{
 struct object_entry *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = VAR_1;
 while (VAR_2) {
  const unsigned int VAR_4 = FUNC_2(VAR_2, VAR_1 + 1);
  if (VAR_3 < VAR_4)
   VAR_3 = VAR_4;
  VAR_2 = FUNC_1(VAR_2);
 }
 return VAR_3;
}
