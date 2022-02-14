
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intsrc {TYPE_1__* is_pic; } ;
struct TYPE_2__ {int (* pic_disable_source ) (struct intsrc*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct intsrc*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct intsrc *VAR_2;

 VAR_2 = VAR_1;
 VAR_2->is_pic->pic_disable_source(VAR_2, VAR_0);
}
