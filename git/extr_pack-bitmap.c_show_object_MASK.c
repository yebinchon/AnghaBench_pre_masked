
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int oid; } ;
struct bitmap_show_data {int base; int bitmap_git; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct object*,char const*) ;

__attribute__((used)) static void FUNC_3(struct object *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct bitmap_show_data *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->bitmap_git, &VAR_0->oid);

 if (VAR_4 < 0)
  VAR_4 = FUNC_2(VAR_3->bitmap_git, VAR_0,
        VAR_1);

 FUNC_1(VAR_3->base, VAR_4);
}
