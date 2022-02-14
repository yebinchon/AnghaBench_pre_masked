
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long index; int lru; } ;
struct gmap {int guest_table_lock; int crst_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long*,unsigned long) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct gmap *VAR_6, unsigned long *VAR_7,
       unsigned long VAR_8, unsigned long VAR_9)
{
 struct page *VAR_10;
 unsigned long *VAR_11;


 VAR_10 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_10)
  return -VAR_1;
 VAR_11 = (unsigned long *) FUNC_4(VAR_10);
 FUNC_2(VAR_11, VAR_8);
 FUNC_5(&VAR_6->guest_table_lock);
 if (*VAR_7 & VAR_3) {
  FUNC_3(&VAR_10->lru, &VAR_6->crst_list);
  *VAR_7 = (unsigned long) VAR_11 | VAR_4 |
   (*VAR_7 & VAR_5);
  VAR_10->index = VAR_9;
  VAR_10 = ((void*)0);
 }
 FUNC_6(&VAR_6->guest_table_lock);
 if (VAR_10)
  FUNC_0(VAR_10, VAR_0);
 return 0;
}
