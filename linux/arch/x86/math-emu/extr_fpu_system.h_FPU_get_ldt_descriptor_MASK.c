
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct desc_struct {int dummy; } ;
struct TYPE_8__ {TYPE_3__* mm; } ;
struct TYPE_5__ {int lock; TYPE_2__* ldt; } ;
struct TYPE_7__ {TYPE_1__ context; } ;
struct TYPE_6__ {unsigned int nr_entries; struct desc_struct* entries; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline struct desc_struct FUNC_2(unsigned VAR_1)
{
 static struct desc_struct VAR_2;
 struct desc_struct VAR_3 = VAR_2;
 return VAR_3;
}
