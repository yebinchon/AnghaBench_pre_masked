
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap_range_node {int dummy; } ;
struct TYPE_4__ {int buf_size; int (* format_write ) (struct regmap*,unsigned int,unsigned int) ;} ;
struct regmap {TYPE_2__ format; int work_buf; int bus_context; TYPE_1__* bus; } ;
struct TYPE_3__ {int (* write ) (int ,int ,int ) ;} ;


 int FUNC_0 (int) ;
 struct regmap_range_node* FUNC_1 (struct regmap*,unsigned int) ;
 int FUNC_2 (struct regmap*,unsigned int*,struct regmap_range_node*,int) ;
 int FUNC_3 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct regmap*,unsigned int,int) ;
 int FUNC_6 (struct regmap*,unsigned int,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_0, unsigned int VAR_1,
           unsigned int VAR_2)
{
 int VAR_3;
 struct regmap_range_node *VAR_4;
 struct regmap *VAR_5 = VAR_0;

 FUNC_0(!VAR_5->bus || !VAR_5->format.format_write);

 VAR_4 = FUNC_1(VAR_5, VAR_1);
 if (VAR_4) {
  VAR_3 = FUNC_2(VAR_5, &VAR_1, VAR_4, 1);
  if (VAR_3 != 0)
   return VAR_3;
 }

 VAR_5->format.format_write(VAR_5, VAR_1, VAR_2);

 FUNC_6(VAR_5, VAR_1, 1);

 VAR_3 = VAR_5->bus->write(VAR_5->bus_context, VAR_5->work_buf,
         VAR_5->format.buf_size);

 FUNC_5(VAR_5, VAR_1, 1);

 return VAR_3;
}
