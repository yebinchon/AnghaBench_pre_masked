
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keybuf_key {int node; } ;
struct keybuf {int freelist; int keys; } ;


 int FUNC_0 (int *,struct keybuf_key*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct keybuf *VAR_0, struct keybuf_key *VAR_1)
{
 FUNC_1(&VAR_1->node, &VAR_0->keys);
 FUNC_0(&VAR_0->freelist, VAR_1);
}
