
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_marker_queue {int lock; int head; } ;
struct vmw_marker {int head; int submitted; int seqno; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmw_marker* FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct vmw_marker_queue *VAR_2,
     uint32_t VAR_3)
{
 struct vmw_marker *VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);

 if (FUNC_5(!VAR_4))
  return -VAR_0;

 VAR_4->seqno = VAR_3;
 VAR_4->submitted = FUNC_1();
 FUNC_3(&VAR_2->lock);
 FUNC_2(&VAR_4->head, &VAR_2->head);
 FUNC_4(&VAR_2->lock);

 return 0;
}
