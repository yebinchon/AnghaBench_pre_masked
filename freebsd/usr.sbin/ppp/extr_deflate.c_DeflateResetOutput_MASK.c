
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deflate_state {int cx; scalar_t__ uncomp_rec; scalar_t__ seqno; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1)
{
  struct deflate_state *VAR_2 = (struct deflate_state *)VAR_1;

  VAR_2->seqno = 0;
  VAR_2->uncomp_rec = 0;
  FUNC_0(&VAR_2->cx);
  FUNC_1(VAR_0, "Deflate: Output channel reset\n");

  return 1;
}
