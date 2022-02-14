
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list {int dummy; } ;
struct jit {int mem; } ;
typedef int page_t ;
struct TYPE_2__ {struct list* blocks; } ;


 TYPE_1__* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline struct list *FUNC_1(struct jit *VAR_0, page_t VAR_1, int VAR_2) {
    return &FUNC_0(VAR_0->mem, VAR_1)->blocks[VAR_2];
}
