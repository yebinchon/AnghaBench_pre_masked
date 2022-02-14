
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deinit_cb {int flags; int prefix; } ;
struct cache_entry {int name; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct cache_entry *VAR_0,
    void *VAR_1)
{
 struct deinit_cb *VAR_2 = VAR_1;
 FUNC_0(VAR_0->name, VAR_2->prefix, VAR_2->flags);
}
