
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_entry {scalar_t__ suspect; } ;


 int FUNC_0 (struct blame_entry***,struct blame_entry*) ;
 int FUNC_1 (struct blame_entry***,struct blame_entry*,struct blame_entry*) ;

__attribute__((used)) static void FUNC_2(struct blame_entry ***VAR_0,
   struct blame_entry ***VAR_1,
   struct blame_entry *VAR_2,
   struct blame_entry *VAR_3)
{
 if (VAR_2[0].suspect && VAR_2[2].suspect) {

  FUNC_1(VAR_1, VAR_3, &VAR_2[0]);


  FUNC_0(VAR_1, &VAR_2[2]);


  FUNC_0(VAR_0, &VAR_2[1]);
 }
 else if (!VAR_2[0].suspect && !VAR_2[2].suspect)




  FUNC_1(VAR_0, VAR_3, &VAR_2[1]);
 else if (VAR_2[0].suspect) {

  FUNC_1(VAR_1, VAR_3, &VAR_2[0]);
  FUNC_0(VAR_0, &VAR_2[1]);
 }
 else {

  FUNC_1(VAR_0, VAR_3, &VAR_2[1]);
  FUNC_0(VAR_1, &VAR_2[2]);
 }
}
