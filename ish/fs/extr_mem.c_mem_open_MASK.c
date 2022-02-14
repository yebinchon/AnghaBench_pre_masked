
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int * ops; } ;
struct dev_ops {int (* open ) (int,int,struct fd*) ;int fd; } ;


 int VAR_0 ;
 struct dev_ops** VAR_1 ;
 int FUNC_0 (int,int,struct fd*) ;

__attribute__((used)) static int FUNC_1(int VAR_2, int VAR_3, struct fd *VAR_4) {
    struct dev_ops *VAR_5 = VAR_1[VAR_3];
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }
    VAR_4->ops = &VAR_5->fd;
    if (!VAR_5->open)
        return 0;
    return VAR_5->open(VAR_2, VAR_3, VAR_4);
}
