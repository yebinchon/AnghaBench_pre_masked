
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fpn {int dummy; } ;
struct fpemu {int fe_cx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct fpemu*,struct fpn*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(struct fpemu *VAR_3, struct fpn *VAR_4, uint32_t *VAR_5, int VAR_6)
{
 uint32_t VAR_7[2];

 VAR_7[0] = FUNC_0(VAR_3, VAR_4, VAR_7);
 if (VAR_7[0] != VAR_2 && VAR_7[0] != 0)
  VAR_3->fe_cx |= VAR_0;
 else if (VAR_6 == 0 && VAR_7[0] != 0)
  VAR_3->fe_cx |= VAR_1;
 else
  *VAR_5 = VAR_7[1];

 return (0);
}
