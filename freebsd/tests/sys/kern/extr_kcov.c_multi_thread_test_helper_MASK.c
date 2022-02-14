
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multi_thread_data {size_t mode; int thread; int * buf; int fd; } ;


 int FUNC_0 (int,char*,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ,size_t) ;
 char** VAR_1 ;
 size_t FUNC_4 (char**) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void *
FUNC_6(void *VAR_2)
{
 struct multi_thread_data *VAR_3 = VAR_2;

 FUNC_0(FUNC_3(VAR_3->fd, VAR_0, VAR_3->mode) == 0,
     "Unable to enable kcov %s in thread %d",
     VAR_3->mode < FUNC_4(VAR_1) ? VAR_1[VAR_3->mode] : "unknown mode",
     VAR_3->thread);

 FUNC_2(&VAR_3->buf[0], 0);
 FUNC_5(0);
 FUNC_0(FUNC_1(&VAR_3->buf[0]) != 0,
     "No records found in thread %d", VAR_3->thread);

 return (((void*)0));
}
