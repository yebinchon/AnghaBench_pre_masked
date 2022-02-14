
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val_bytes; scalar_t__ pad_bytes; scalar_t__ reg_bytes; int (* format_val ) (scalar_t__,unsigned int,int ) ;} ;
struct regmap {TYPE_1__ format; scalar_t__ work_buf; int bus; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,unsigned int,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2)
{
 struct regmap *VAR_3 = VAR_0;

 FUNC_0(!VAR_3->bus || !VAR_3->format.format_val);

 VAR_3->format.format_val(VAR_3->work_buf + VAR_3->format.reg_bytes
          + VAR_3->format.pad_bytes, VAR_2, 0);
 return FUNC_1(VAR_3, VAR_1,
          VAR_3->work_buf +
          VAR_3->format.reg_bytes +
          VAR_3->format.pad_bytes,
          VAR_3->format.val_bytes);
}
