
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int (* read ) (void*,size_t,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (void*,size_t,int ) ;

__attribute__((used)) static ssize_t FUNC_3(void *VAR_3, size_t VAR_4, loff_t VAR_5)
{
 ssize_t VAR_6 = -VAR_0;

 FUNC_0(&VAR_1);
 if (VAR_2)
  VAR_6 = VAR_2->read(VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_1);

 return VAR_6;
}
