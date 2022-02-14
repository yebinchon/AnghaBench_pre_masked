
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int oid; } ;
struct bitmap {int dummy; } ;


 int FUNC_0 (struct bitmap*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct object*) ;

__attribute__((used)) static void FUNC_3(struct object *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct bitmap *VAR_3 = VAR_2;
 FUNC_0(VAR_3, FUNC_1(&VAR_0->oid));
 FUNC_2(VAR_0);
}
