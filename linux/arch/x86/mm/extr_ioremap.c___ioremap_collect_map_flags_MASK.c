
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct ioremap_desc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*) ;
 int FUNC_1 (struct resource*) ;

__attribute__((used)) static int FUNC_2(struct resource *VAR_2, void *VAR_3)
{
 struct ioremap_desc *VAR_4 = VAR_3;

 if (!(VAR_4->flags & VAR_1))
  VAR_4->flags |= FUNC_1(VAR_2);

 if (!(VAR_4->flags & VAR_0))
  VAR_4->flags |= FUNC_0(VAR_2);

 return ((VAR_4->flags & (VAR_1 | VAR_0)) ==
          (VAR_1 | VAR_0));
}
