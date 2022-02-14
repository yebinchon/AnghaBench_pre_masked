
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct adis {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct adis*,int ,int *) ;
 int FUNC_2 (struct adis*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct adis *VAR_2, bool VAR_3)
{
 uint16_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 &= ~VAR_0;
 VAR_4 |= FUNC_0(VAR_3);

 return FUNC_2(VAR_2, VAR_1, VAR_4);
}
