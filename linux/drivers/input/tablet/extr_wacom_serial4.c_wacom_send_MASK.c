
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct serio {int dummy; } ;


 int FUNC_0 (struct serio*,scalar_t__ const) ;

__attribute__((used)) static int FUNC_1(struct serio *VAR_0, const u8 *VAR_1)
{
 int VAR_2 = 0;

 for (; !VAR_2 && *VAR_1; VAR_1++)
  VAR_2 = FUNC_0(VAR_0, *VAR_1);

 return VAR_2;
}
