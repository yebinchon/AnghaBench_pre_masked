
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* cb ) (void*) ;void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

int FUNC_2(int VAR_5, void (*VAR_6)(void *VAR_7), void *VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 if (VAR_5 >= VAR_0 || !VAR_6)
  return -VAR_2;

 VAR_10 = 0;
 FUNC_0(&VAR_4, VAR_9);
 if (VAR_3[VAR_5].cb) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_3[VAR_5].cb = VAR_6;
 VAR_3[VAR_5].data = VAR_8;

out:
 FUNC_1(&VAR_4, VAR_9);
 return VAR_10;
}
