
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class_instance; int class_class; } ;
typedef TYPE_1__ trayclient ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1) {
    trayclient *VAR_2 = *((trayclient **)VAR_0);
    trayclient *VAR_3 = *((trayclient **)VAR_1);

    int VAR_4 = FUNC_0(VAR_2->class_class, VAR_3->class_class);
    return VAR_4 != 0 ? VAR_4 : FUNC_0(VAR_2->class_instance, VAR_3->class_instance);
}
