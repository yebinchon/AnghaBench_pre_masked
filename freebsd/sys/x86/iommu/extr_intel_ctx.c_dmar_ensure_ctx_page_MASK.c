
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * vm_page_t ;
struct sf_buf {int dummy; } ;
struct dmar_unit {int ctx_obj; } ;
struct TYPE_4__ {int r1; } ;
typedef TYPE_1__ dmar_root_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dmar_unit*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,int ,int,struct sf_buf**) ;
 int * FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct sf_buf*) ;

__attribute__((used)) static void
FUNC_6(struct dmar_unit *VAR_7, int VAR_8)
{
 struct sf_buf *VAR_9;
 dmar_root_entry_t *VAR_10;
 vm_page_t VAR_11;




 VAR_11 = FUNC_3(VAR_7->ctx_obj, 1 + VAR_8, VAR_0);
 if (VAR_11 != ((void*)0))
  return;







 VAR_6;
 VAR_11 = FUNC_3(VAR_7->ctx_obj, 1 + VAR_8, VAR_2 |
     VAR_1);
 VAR_10 = FUNC_2(VAR_7->ctx_obj, 0, VAR_0, &VAR_9);
 VAR_10 += VAR_8;
 FUNC_4(&VAR_10->r1, VAR_4 | (VAR_3 &
     FUNC_0(VAR_11)));
 FUNC_1(VAR_7, VAR_10);
 FUNC_5(VAR_9);
 VAR_5;
}
