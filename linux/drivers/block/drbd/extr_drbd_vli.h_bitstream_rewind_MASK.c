
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitstream {int buf_len; int buf; int cur; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct bitstream *VAR_0)
{
 FUNC_0(&VAR_0->cur, VAR_0->buf);
 FUNC_1(VAR_0->buf, 0, VAR_0->buf_len);
}
