
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t u_int ;
struct mod_item {int size; struct fhashbhead* main_ptr; } ;
struct fhashbhead {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fhashbhead*) ;
 struct fhashbhead* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct mod_item*,int ,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, uint64_t *VAR_4)
{
 struct mod_item *VAR_5;
 struct fhashbhead *VAR_6;
 u_int VAR_7;

 VAR_5 = (struct mod_item *)VAR_3;

 FUNC_2(VAR_5, 0, sizeof(struct mod_item));
 VAR_5->size = *VAR_4;
 VAR_6 = FUNC_1(sizeof(struct fhashbhead) * VAR_5->size, VAR_0,
     VAR_1 | VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_5->size; VAR_7++)
  FUNC_0(&VAR_6[VAR_7]);

 VAR_5->main_ptr = VAR_6;

 return (0);
}
