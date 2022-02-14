
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct processor_entry {int dummy; } ;


 struct processor_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct processor_entry*,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct processor_entry*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct processor_entry *VAR_3;

 while ((VAR_3 = FUNC_0(&VAR_2)) != ((void*)0)) {
  FUNC_1(&VAR_2, VAR_3, VAR_1);
  FUNC_3(VAR_3);
  VAR_0--;
 }

 FUNC_2(VAR_0 == 0);
 VAR_0 = 0;
}
