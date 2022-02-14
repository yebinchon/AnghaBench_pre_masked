
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_bytes; int pad_bytes; unsigned int (* parse_val ) (void*) ;int val_bytes; } ;
struct regmap {TYPE_1__ format; void* work_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct regmap*,unsigned int,void*,int ) ;
 unsigned int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, unsigned int VAR_2,
       unsigned int *VAR_3)
{
 int VAR_4;
 struct regmap *VAR_5 = VAR_1;
 void *VAR_6 = VAR_5->work_buf + VAR_5->format.reg_bytes +
  VAR_5->format.pad_bytes;

 if (!VAR_5->format.parse_val)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_5, VAR_2, VAR_6, VAR_5->format.val_bytes);
 if (VAR_4 == 0)
  *VAR_3 = VAR_5->format.parse_val(VAR_6);

 return VAR_4;
}
