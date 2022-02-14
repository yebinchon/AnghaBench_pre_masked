
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int oid; } ;
struct bitmap_test_data {int seen; int prg; int base; int bitmap_git; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct object *VAR_0, const char *VAR_1,
        void *VAR_2)
{
 struct bitmap_test_data *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->bitmap_git, &VAR_0->oid);
 if (VAR_4 < 0)
  FUNC_2("Object not in bitmap: %s\n", FUNC_4(&VAR_0->oid));

 FUNC_1(VAR_3->base, VAR_4);
 FUNC_3(VAR_3->prg, ++VAR_3->seen);
}
