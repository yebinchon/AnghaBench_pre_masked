
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int * ops; } ;
struct dev_ops {int (* open ) (int,int,struct fd*) ;int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dev_ops** VAR_2 ;
 struct dev_ops** VAR_3 ;
 int FUNC_0 (int,int,struct fd*) ;

int FUNC_1(int VAR_4, int VAR_5, int VAR_6, struct fd *VAR_7) {
    struct dev_ops *VAR_8 = (VAR_6 == VAR_0 ? VAR_2 : VAR_3)[VAR_4];
    if (VAR_8 == ((void*)0))
        return VAR_1;
    VAR_7->ops = &VAR_8->fd;
    if (!VAR_8->open)
        return 0;
    return VAR_8->open(VAR_4, VAR_5, VAR_7);
}
