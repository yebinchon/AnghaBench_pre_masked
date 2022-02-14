
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int nr_mblks; } ;
struct dmz_mblock {int page; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dmz_mblock*) ;

__attribute__((used)) static void FUNC_3(struct dmz_metadata *VAR_0, struct dmz_mblock *VAR_1)
{
 FUNC_0(VAR_1->page, 0);
 FUNC_2(VAR_1);

 FUNC_1(&VAR_0->nr_mblks);
}
