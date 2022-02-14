
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_buffer {int page; struct admhcd* ahcd; } ;
struct admhcd {int lock; int ed_head; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t FUNC_0 (struct admhcd*,int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct debug_buffer *VAR_1)
{
 struct admhcd *VAR_2;
 size_t VAR_3;
 unsigned long VAR_4;

 VAR_2 = VAR_1->ahcd;

 FUNC_1(&VAR_2->lock, VAR_4);
 VAR_3 = FUNC_0(VAR_2, VAR_1->page, VAR_0, VAR_2->ed_head);
 FUNC_2(&VAR_2->lock, VAR_4);

 return VAR_3;
}
