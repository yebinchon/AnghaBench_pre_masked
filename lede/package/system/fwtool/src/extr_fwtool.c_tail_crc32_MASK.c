
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct data_buf {int cur_len; scalar_t__ cur; scalar_t__ prev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_1(struct data_buf *VAR_2, uint32_t VAR_3)
{
 if (VAR_2->prev)
  VAR_3 = FUNC_0(VAR_3, VAR_2->prev, VAR_0, VAR_1);

 return FUNC_0(VAR_3, VAR_2->cur, VAR_2->cur_len, VAR_1);
}
