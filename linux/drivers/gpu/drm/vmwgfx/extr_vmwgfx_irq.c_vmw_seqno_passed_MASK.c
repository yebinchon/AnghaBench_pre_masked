
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vmw_fifo_state {int capabilities; } ;
struct vmw_private {scalar_t__ last_read_seqno; int marker_seq; struct vmw_fifo_state fifo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vmw_private*,scalar_t__) ;
 int FUNC_3 (struct vmw_private*,struct vmw_fifo_state*) ;

bool FUNC_4(struct vmw_private *VAR_2,
    uint32_t VAR_3)
{
 struct vmw_fifo_state *VAR_4;
 bool VAR_5;

 if (FUNC_1(VAR_2->last_read_seqno - VAR_3 < VAR_1))
  return 1;

 VAR_4 = &VAR_2->fifo;
 FUNC_3(VAR_2, VAR_4);
 if (FUNC_1(VAR_2->last_read_seqno - VAR_3 < VAR_1))
  return 1;

 if (!(VAR_4->capabilities & VAR_0) &&
     FUNC_2(VAR_2, VAR_3))
  return 1;






 VAR_5 = ((FUNC_0(&VAR_2->marker_seq) - VAR_3)
        > VAR_1);

 return VAR_5;
}
