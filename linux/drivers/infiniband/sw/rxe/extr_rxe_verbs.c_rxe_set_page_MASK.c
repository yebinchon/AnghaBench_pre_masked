
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rxe_phys_buf {int size; int addr; } ;
struct rxe_mem {size_t nbuf; size_t num_buf; struct rxe_map** map; } ;
struct rxe_map {struct rxe_phys_buf* buf; } ;
struct ib_mr {int page_size; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct rxe_mem* FUNC_0 (struct ib_mr*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ib_mr *VAR_2, u64 VAR_3)
{
 struct rxe_mem *VAR_4 = FUNC_0(VAR_2);
 struct rxe_map *VAR_5;
 struct rxe_phys_buf *VAR_6;

 if (FUNC_1(VAR_4->nbuf == VAR_4->num_buf))
  return -VAR_0;

 VAR_5 = VAR_4->map[VAR_4->nbuf / VAR_1];
 VAR_6 = &VAR_5->buf[VAR_4->nbuf % VAR_1];

 VAR_6->addr = VAR_3;
 VAR_6->size = VAR_2->page_size;
 VAR_4->nbuf++;

 return 0;
}
