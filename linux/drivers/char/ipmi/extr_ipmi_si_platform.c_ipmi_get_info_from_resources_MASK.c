
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {scalar_t__ addr_space; scalar_t__ addr_data; scalar_t__ regspacing; } ;
struct resource {scalar_t__ start; } ;
struct platform_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct resource* FUNC_1 (struct platform_device*,int ,int) ;

__attribute__((used)) static struct resource *
FUNC_2(struct platform_device *VAR_5,
        struct si_sm_io *VAR_6)
{
 struct resource *VAR_7, *VAR_8;

 VAR_7 = FUNC_1(VAR_5, VAR_1, 0);
 if (VAR_7) {
  VAR_6->addr_space = VAR_3;
 } else {
  VAR_7 = FUNC_1(VAR_5, VAR_2, 0);
  if (VAR_7)
   VAR_6->addr_space = VAR_4;
 }
 if (!VAR_7) {
  FUNC_0(&VAR_5->dev, "no I/O or memory address\n");
  return ((void*)0);
 }
 VAR_6->addr_data = VAR_7->start;

 VAR_6->regspacing = VAR_0;
 VAR_8 = FUNC_1(VAR_5,
          (VAR_6->addr_space == VAR_3) ?
     VAR_1 : VAR_2,
          1);
 if (VAR_8) {
  if (VAR_8->start > VAR_6->addr_data)
   VAR_6->regspacing = VAR_8->start - VAR_6->addr_data;
 }

 return VAR_7;
}
