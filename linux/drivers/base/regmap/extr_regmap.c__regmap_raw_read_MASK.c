
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap_range_node {int dummy; } ;
struct TYPE_4__ {unsigned int val_bytes; scalar_t__ pad_bytes; scalar_t__ reg_bytes; int (* format_reg ) (int ,unsigned int,int ) ;} ;
struct regmap {TYPE_2__ format; int work_buf; int bus_context; TYPE_1__* bus; int read_flag_mask; int reg_shift; } ;
struct TYPE_3__ {int (* read ) (int ,int ,scalar_t__,void*,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct regmap_range_node* FUNC_1 (struct regmap*,unsigned int) ;
 int FUNC_2 (struct regmap*,unsigned int*,struct regmap_range_node*,unsigned int) ;
 int FUNC_3 (struct regmap*,scalar_t__,int ) ;
 int FUNC_4 (int ,unsigned int,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,void*,unsigned int) ;
 int FUNC_6 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_7 (struct regmap*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct regmap *VAR_1, unsigned int VAR_2, void *VAR_3,
       unsigned int VAR_4)
{
 struct regmap_range_node *VAR_5;
 int VAR_6;

 FUNC_0(!VAR_1->bus);

 if (!VAR_1->bus || !VAR_1->bus->read)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_1, &VAR_2, VAR_5,
       VAR_4 / VAR_1->format.val_bytes);
  if (VAR_6 != 0)
   return VAR_6;
 }

 VAR_1->format.format_reg(VAR_1->work_buf, VAR_2, VAR_1->reg_shift);
 FUNC_3(VAR_1, VAR_1->format.reg_bytes,
          VAR_1->read_flag_mask);
 FUNC_7(VAR_1, VAR_2, VAR_4 / VAR_1->format.val_bytes);

 VAR_6 = VAR_1->bus->read(VAR_1->bus_context, VAR_1->work_buf,
        VAR_1->format.reg_bytes + VAR_1->format.pad_bytes,
        VAR_3, VAR_4);

 FUNC_6(VAR_1, VAR_2, VAR_4 / VAR_1->format.val_bytes);

 return VAR_6;
}
