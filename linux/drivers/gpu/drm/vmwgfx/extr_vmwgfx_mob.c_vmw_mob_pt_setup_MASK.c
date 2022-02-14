
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_sg_table {int dummy; } ;
struct vmw_piter {int dummy; } ;
struct vmw_mob {int pt_level; int pt_root_page; struct ttm_buffer_object* pt_bo; } ;
struct ttm_buffer_object {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ttm_buffer_object*,int,int,int *) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 struct vmw_sg_table* FUNC_4 (struct ttm_buffer_object*) ;
 unsigned long FUNC_5 (struct vmw_piter*,unsigned long,struct vmw_piter*) ;
 int FUNC_6 (struct vmw_piter*) ;
 int FUNC_7 (struct vmw_piter*) ;
 int FUNC_8 (struct vmw_piter*,struct vmw_sg_table const*,int ) ;

__attribute__((used)) static void FUNC_9(struct vmw_mob *VAR_0,
        struct vmw_piter VAR_1,
        unsigned long VAR_2)
{
 unsigned long VAR_3 = 0;
 struct ttm_buffer_object *VAR_4 = VAR_0->pt_bo;
 struct vmw_piter VAR_5;
 struct vmw_piter VAR_6;
 const struct vmw_sg_table *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, 0, 1, ((void*)0));
 FUNC_0(VAR_8 != 0);

 VAR_7 = FUNC_4(VAR_4);
 FUNC_8(&VAR_6, VAR_7, 0);
 FUNC_0(!FUNC_7(&VAR_6));
 VAR_0->pt_level = 0;
 while (FUNC_1(VAR_2 > 1)) {
  ++VAR_0->pt_level;
  FUNC_0(VAR_0->pt_level > 2);
  VAR_5 = VAR_6;
  VAR_3 = FUNC_5(&VAR_1, VAR_2,
      &VAR_6);
  VAR_1 = VAR_5;
  VAR_2 = VAR_3;
 }

 VAR_0->pt_root_page = FUNC_6(&VAR_5);
 FUNC_3(VAR_4);
}
