
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty {TYPE_2__* driver; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* write ) (struct tty*,char const*,size_t,int) ;} ;


 int FUNC_0 (struct tty*,char const*,size_t,int) ;

__attribute__((used)) static void FUNC_1(struct tty *VAR_0, const char *VAR_1, size_t VAR_2) {
    VAR_0->driver->ops->write(VAR_0, VAR_1, VAR_2, 0);
}
