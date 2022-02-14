
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* uma_keg_t ;
struct TYPE_5__ {scalar_t__ uk_free; char* uk_name; int uk_pages; int uk_hash; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, int VAR_1, void *VAR_2)
{
 uma_keg_t VAR_3;

 VAR_3 = (uma_keg_t)VAR_0;
 FUNC_0(VAR_3);
 if (VAR_3->uk_free != 0) {
  FUNC_4("Freed UMA keg (%s) was not empty (%d items). "
      " Lost %d pages of memory.\n",
      VAR_3->uk_name ? VAR_3->uk_name : "",
      VAR_3->uk_free, VAR_3->uk_pages);
 }
 FUNC_2(VAR_3);

 FUNC_3(&VAR_3->uk_hash);

 FUNC_1(VAR_3);
}
