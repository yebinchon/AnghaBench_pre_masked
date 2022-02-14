
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmio_rb_tree {int dummy; } ;
struct mmio_rb_range {int mr_end; int mr_base; } ;


 int VAR_0 ;
 struct mmio_rb_range* FUNC_0 (int ,struct mmio_rb_tree*,struct mmio_rb_range*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct mmio_rb_tree *VAR_2, struct mmio_rb_range *VAR_3)
{
 struct mmio_rb_range *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (VAR_4 != ((void*)0)) {






  return (VAR_0);
 }

 return (0);
}
