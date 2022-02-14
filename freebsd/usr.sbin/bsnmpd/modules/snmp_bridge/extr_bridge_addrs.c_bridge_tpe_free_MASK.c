
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_entry {int dummy; } ;
struct tp_entries {int dummy; } ;


 struct tp_entry* FUNC_0 (struct tp_entries*) ;
 int FUNC_1 (struct tp_entries*,struct tp_entry*,int ) ;
 int FUNC_2 (struct tp_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct tp_entries *VAR_1)
{
 struct tp_entry *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
