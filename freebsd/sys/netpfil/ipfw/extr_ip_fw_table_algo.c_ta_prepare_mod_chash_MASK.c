
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mod_item {int size; int size6; struct chashbhead* main_ptr6; struct chashbhead* main_ptr; } ;
struct chashbhead {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct chashbhead*) ;
 struct chashbhead* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct mod_item*,int ,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, uint64_t *VAR_4)
{
 struct mod_item *VAR_5;
 struct chashbhead *VAR_6;
 int VAR_7;

 VAR_5 = (struct mod_item *)VAR_3;

 FUNC_2(VAR_5, 0, sizeof(struct mod_item));
 VAR_5->size = (*VAR_4 >> 16) & 0xFFFF;
 VAR_5->size6 = *VAR_4 & 0xFFFF;
 if (VAR_5->size > 0) {
  VAR_6 = FUNC_1(sizeof(struct chashbhead) * VAR_5->size,
      VAR_0, VAR_1 | VAR_2);
  for (VAR_7 = 0; VAR_7 < VAR_5->size; VAR_7++)
   FUNC_0(&VAR_6[VAR_7]);
  VAR_5->main_ptr = VAR_6;
 }

 if (VAR_5->size6 > 0) {
  VAR_6 = FUNC_1(sizeof(struct chashbhead) * VAR_5->size6,
      VAR_0, VAR_1 | VAR_2);
  for (VAR_7 = 0; VAR_7 < VAR_5->size6; VAR_7++)
   FUNC_0(&VAR_6[VAR_7]);
  VAR_5->main_ptr6 = VAR_6;
 }

 return (0);
}
