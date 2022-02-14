
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct decon_context {int out_type; scalar_t__ addr; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct decon_context*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 struct decon_context *VAR_10 = VAR_9;
 u32 VAR_11;

 VAR_11 = FUNC_1(VAR_10->addr + VAR_0);
 VAR_11 &= VAR_4 | VAR_5;

 if (VAR_11) {
  FUNC_2(VAR_11, VAR_10->addr + VAR_0);
  if (VAR_10->out_type & VAR_2) {
   VAR_11 = FUNC_1(VAR_10->addr + VAR_1);
   VAR_11 &= VAR_6 | VAR_7;
   if (VAR_11 ==
       (VAR_6 | VAR_7))
    return VAR_3;
  }
  FUNC_0(VAR_10);
 }

 return VAR_3;
}
