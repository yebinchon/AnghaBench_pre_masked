
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dcp {int * completion; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct dcp *VAR_8 = VAR_7;
 uint32_t VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_8->base + VAR_3);
 VAR_9 &= VAR_5;
 if (!VAR_9)
  return VAR_2;


 FUNC_2(VAR_9, VAR_8->base + VAR_4);


 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  if (VAR_9 & (1 << VAR_10))
   FUNC_0(&VAR_8->completion[VAR_10]);

 return VAR_1;
}
