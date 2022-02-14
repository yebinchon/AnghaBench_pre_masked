
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlanstatfoo_p {int ntotal; int total; } ;
struct bsdstat {int dummy; } ;


 int FUNC_0 (struct wlanstatfoo_p*,int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct bsdstat *VAR_0)
{
 struct wlanstatfoo_p *VAR_1 = (struct wlanstatfoo_p *) VAR_0;

 FUNC_0(VAR_1, &VAR_1->total, &VAR_1->ntotal);
}
