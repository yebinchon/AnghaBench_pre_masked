
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int ordered; } ;
struct prefix_ref_iterator {int trim; int prefix; struct ref_iterator* iter0; struct ref_iterator base; } ;


 int FUNC_0 (struct ref_iterator*,int *,int ) ;
 int VAR_0 ;
 struct prefix_ref_iterator* FUNC_1 (int,int) ;
 int FUNC_2 (char const*) ;

struct ref_iterator *FUNC_3(struct ref_iterator *VAR_1,
            const char *VAR_2,
            int VAR_3)
{
 struct prefix_ref_iterator *VAR_4;
 struct ref_iterator *VAR_5;

 if (!*VAR_2 && !VAR_3)
  return VAR_1;

 VAR_4 = FUNC_1(1, sizeof(*VAR_4));
 VAR_5 = &VAR_4->base;

 FUNC_0(VAR_5, &VAR_0, VAR_1->ordered);

 VAR_4->iter0 = VAR_1;
 VAR_4->prefix = FUNC_2(VAR_2);
 VAR_4->trim = VAR_3;

 return VAR_5;
}
