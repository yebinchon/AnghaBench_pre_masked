
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct delta_info {unsigned long size; unsigned int nr; struct delta_info* next; void* delta; int base_offset; int base_oid; } ;
typedef int off_t ;


 struct delta_info* VAR_0 ;
 int FUNC_0 (int *,struct object_id const*) ;
 struct delta_info* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_1, const struct object_id *VAR_2,
         off_t VAR_3,
         void *VAR_4, unsigned long VAR_5)
{
 struct delta_info *VAR_6 = FUNC_1(sizeof(*VAR_6));

 FUNC_0(&VAR_6->base_oid, VAR_2);
 VAR_6->base_offset = VAR_3;
 VAR_6->size = VAR_5;
 VAR_6->delta = VAR_4;
 VAR_6->nr = VAR_1;
 VAR_6->next = VAR_0;
 VAR_0 = VAR_6;
}
