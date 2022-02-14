
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct push_cas_option {scalar_t__ nr; struct push_cas* entry; int alloc; } ;
struct push_cas {int refname; } ;


 int FUNC_0 (struct push_cas*,scalar_t__,int ) ;
 int FUNC_1 (struct push_cas*,int ,int) ;
 int FUNC_2 (char const*,size_t) ;

__attribute__((used)) static struct push_cas *FUNC_3(struct push_cas_option *VAR_0,
          const char *VAR_1,
          size_t VAR_2)
{
 struct push_cas *VAR_3;
 FUNC_0(VAR_0->entry, VAR_0->nr + 1, VAR_0->alloc);
 VAR_3 = &VAR_0->entry[VAR_0->nr++];
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->refname = FUNC_2(VAR_1, VAR_2);
 return VAR_3;
}
