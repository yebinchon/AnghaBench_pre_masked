
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offline; } ;
struct memory_block {TYPE_1__ dev; } ;
struct drmem_lmb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct memory_block* FUNC_2 (struct drmem_lmb*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct drmem_lmb *VAR_1, bool VAR_2)
{
 struct memory_block *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 if (VAR_2 && VAR_3->dev.offline)
  VAR_4 = FUNC_1(&VAR_3->dev);
 else if (!VAR_2 && !VAR_3->dev.offline)
  VAR_4 = FUNC_0(&VAR_3->dev);
 else
  VAR_4 = 0;

 FUNC_3(&VAR_3->dev);

 return VAR_4;
}
