
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct texture_object {int mem; int image; } ;
struct demo {int device; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct demo *VAR_0,
                                       struct texture_object *VAR_1) {

    FUNC_0(VAR_0->device, VAR_1->image, ((void*)0));
    FUNC_1(VAR_0->device, VAR_1->mem, ((void*)0));
}
