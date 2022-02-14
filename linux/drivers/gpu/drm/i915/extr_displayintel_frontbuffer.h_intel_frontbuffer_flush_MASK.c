
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_frontbuffer {int bits; } ;
typedef enum fb_op_origin { ____Placeholder_fb_op_origin } fb_op_origin ;


 int FUNC_0 (struct intel_frontbuffer*,int,unsigned int) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct intel_frontbuffer *VAR_0,
        enum fb_op_origin VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_0)
  return;

 VAR_2 = FUNC_1(&VAR_0->bits);
 if (!VAR_2)
  return;

 FUNC_0(VAR_0, VAR_1, VAR_2);
}
