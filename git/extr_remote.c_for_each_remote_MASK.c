
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {int dummy; } ;
typedef int (* each_remote_fn ) (struct remote*,void*) ;


 int FUNC_0 () ;
 struct remote** VAR_0 ;
 int VAR_1 ;

int FUNC_1(each_remote_fn VAR_2, void *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 FUNC_0();
 for (VAR_4 = 0; VAR_4 < VAR_1 && !VAR_5; VAR_4++) {
  struct remote *VAR_6 = VAR_0[VAR_4];
  if (!VAR_6)
   continue;
  VAR_5 = VAR_2(VAR_6, VAR_3);
 }
 return VAR_5;
}
