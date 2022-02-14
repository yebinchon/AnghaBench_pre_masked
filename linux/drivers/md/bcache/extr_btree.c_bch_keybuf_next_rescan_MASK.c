
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keybuf_key {int dummy; } ;
struct keybuf {int last_scanned; } ;
struct cache_set {int dummy; } ;
struct bkey {int dummy; } ;
typedef int keybuf_pred_fn ;


 struct keybuf_key* FUNC_0 (struct keybuf*) ;
 int FUNC_1 (struct cache_set*,struct keybuf*,struct bkey*,int *) ;
 scalar_t__ FUNC_2 (int *,struct bkey*) ;
 int FUNC_3 (char*) ;

struct keybuf_key *FUNC_4(struct cache_set *VAR_0,
       struct keybuf *VAR_1,
       struct bkey *VAR_2,
       keybuf_pred_fn *VAR_3)
{
 struct keybuf_key *VAR_4;

 while (1) {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4)
   break;

  if (FUNC_2(&VAR_1->last_scanned, VAR_2) >= 0) {
   FUNC_3("scan finished");
   break;
  }

  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 }

 return VAR_4;
}
