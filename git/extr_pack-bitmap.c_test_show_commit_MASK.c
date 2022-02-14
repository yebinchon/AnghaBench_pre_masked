
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct bitmap_test_data {int seen; int prg; int base; int bitmap_git; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct commit *VAR_0, void *VAR_1)
{
 struct bitmap_test_data *VAR_2 = VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->bitmap_git,
         &VAR_0->object.oid);
 if (VAR_3 < 0)
  FUNC_2("Object not in bitmap: %s\n", FUNC_4(&VAR_0->object.oid));

 FUNC_1(VAR_2->base, VAR_3);
 FUNC_3(VAR_2->prg, ++VAR_2->seen);
}
