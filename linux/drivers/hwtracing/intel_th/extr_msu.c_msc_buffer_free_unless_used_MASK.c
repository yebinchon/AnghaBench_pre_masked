
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc {int buf_mutex; } ;


 int FUNC_0 (struct msc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct msc *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->buf_mutex);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->buf_mutex);

 return VAR_1;
}
