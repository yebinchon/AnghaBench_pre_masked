
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {int * ops; } ;
struct dev_ops {int (* open ) (int,int,struct fd*) ;int fd; } ;
struct TYPE_2__ {struct dev_ops** devs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int,int,struct fd*) ;

__attribute__((used)) static int FUNC_2(int VAR_4, int VAR_5, int VAR_6, struct fd *VAR_7) {
    FUNC_0(VAR_4 == VAR_0);
    FUNC_0(VAR_5 == VAR_1);

    struct dev_ops *VAR_8 = VAR_3.devs[VAR_6];
    if (VAR_8 == ((void*)0)) {
        return VAR_2;
    }
    VAR_7->ops = &VAR_8->fd;


    if (!VAR_8->open)
        return 0;
    return VAR_8->open(VAR_5, VAR_6, VAR_7);
}
