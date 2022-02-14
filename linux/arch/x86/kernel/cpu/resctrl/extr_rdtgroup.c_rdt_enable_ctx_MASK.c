
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_fs_context {scalar_t__ enable_mba_mbps; scalar_t__ enable_cdpl3; scalar_t__ enable_cdpl2; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rdt_fs_context *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->enable_cdpl2)
  VAR_1 = FUNC_0();

 if (!VAR_1 && VAR_0->enable_cdpl3)
  VAR_1 = FUNC_1();

 if (!VAR_1 && VAR_0->enable_mba_mbps)
  VAR_1 = FUNC_2(1);

 return VAR_1;
}
