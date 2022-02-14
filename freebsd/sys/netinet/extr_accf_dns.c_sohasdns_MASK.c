
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {scalar_t__ sb_hiwat; scalar_t__ sb_mbcnt; scalar_t__ sb_mbmax; } ;
struct socket {struct sockbuf so_rcv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sockbuf*) ;
 scalar_t__ FUNC_1 (struct sockbuf*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_3, void *VAR_4, int VAR_5)
{
 struct sockbuf *VAR_6 = &VAR_3->so_rcv;


 if (FUNC_0(VAR_6) >= VAR_6->sb_hiwat || VAR_6->sb_mbcnt >= VAR_6->sb_mbmax)
  goto ready;


 if (FUNC_1(VAR_6) == VAR_0)
  return (VAR_2);

ready:
 return (VAR_1);
}
