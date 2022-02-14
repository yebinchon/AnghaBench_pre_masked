
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gf100_gr_fuc {int * data; int size; } ;
struct TYPE_3__ {int subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct gf100_gr {TYPE_2__ base; } ;
struct firmware {int data; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gf100_gr*,char const*,struct gf100_gr_fuc*,int) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,char const*,struct firmware const**) ;
 int FUNC_3 (struct firmware const*) ;

int
FUNC_4(struct gf100_gr *VAR_3, const char *VAR_4,
   struct gf100_gr_fuc *VAR_5)
{
 const struct firmware *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_3->base.engine.subdev, VAR_4, &VAR_6);
 if (VAR_7) {
  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7);
  if (VAR_7)
   return -VAR_0;
  return 0;
 }

 VAR_5->size = VAR_6->size;
 VAR_5->data = FUNC_1(VAR_6->data, VAR_5->size, VAR_2);
 FUNC_3(VAR_6);
 return (VAR_5->data != ((void*)0)) ? 0 : -VAR_1;
}
