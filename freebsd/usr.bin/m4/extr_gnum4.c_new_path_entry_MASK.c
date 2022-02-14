
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_entry {scalar_t__ next; int name; } ;


 int FUNC_0 (int,char*) ;
 struct path_entry* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static struct path_entry *
FUNC_3(const char *VAR_0)
{
 struct path_entry *VAR_1;

 VAR_1 = FUNC_1(sizeof(struct path_entry));
 if (!VAR_1)
  FUNC_0(1, "out of memory");
 VAR_1->name = FUNC_2(VAR_0);
 VAR_1->next = 0;
 return VAR_1;
}
