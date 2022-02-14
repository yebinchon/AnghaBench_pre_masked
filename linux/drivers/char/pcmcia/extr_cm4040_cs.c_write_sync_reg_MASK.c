
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reader_dev {TYPE_2__* p_dev; } ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {int start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct reader_dev*) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_2(unsigned char VAR_1, struct reader_dev *VAR_2)
{
 int VAR_3 = VAR_2->p_dev->resource[0]->start;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 <= 0)
  return VAR_4;

 FUNC_1(VAR_1, VAR_3 + VAR_0);
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 <= 0)
  return VAR_4;

 return 1;
}
