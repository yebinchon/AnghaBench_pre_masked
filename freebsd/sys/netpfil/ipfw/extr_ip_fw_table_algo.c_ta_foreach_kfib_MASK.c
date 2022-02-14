
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int walktree_f_t ;
typedef int ta_foreach_f ;
struct table_info {int data; } ;
struct rib_head {int (* rnh_walktree ) (int *,int *,void*) ;int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rib_head*) ;
 int VAR_2 ;
 int FUNC_1 (struct rib_head*) ;
 struct rib_head* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,void*) ;
 int FUNC_4 (int *,int *,void*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, struct table_info *VAR_4, ta_foreach_f *VAR_5,
    void *VAR_6)
{
 VAR_2;
 struct rib_head *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_4->data, VAR_0);
 if (VAR_7 != ((void*)0)) {
  FUNC_0(VAR_7);
  VAR_8 = VAR_7->rnh_walktree(&VAR_7->head, (walktree_f_t *)VAR_5, VAR_6);
  FUNC_1(VAR_7);
 }

 VAR_7 = FUNC_2(VAR_4->data, VAR_1);
 if (VAR_7 != ((void*)0)) {
  FUNC_0(VAR_7);
  VAR_8 = VAR_7->rnh_walktree(&VAR_7->head, (walktree_f_t *)VAR_5, VAR_6);
  FUNC_1(VAR_7);
 }
}
