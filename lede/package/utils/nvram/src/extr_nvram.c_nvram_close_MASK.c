
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; int length; int mmap; } ;
typedef TYPE_1__ nvram_handle_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(nvram_handle_t *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_3(VAR_0->mmap, VAR_0->length);
 FUNC_1(VAR_0->fd);
 FUNC_2(VAR_0);

 return 0;
}
