
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct cf_setting {int freq; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cf_setting*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_5, struct cf_setting *VAR_6)
{
 uint64_t VAR_7;

 if (VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_0(VAR_6, VAR_0, sizeof(*VAR_6));

 VAR_7 = FUNC_1(VAR_4);


 VAR_7 = (VAR_7 >> 56) & 3;

 VAR_6->freq = 10000;
 if (VAR_7 == VAR_2)
  VAR_6->freq = 5000;
 else if (VAR_7 == VAR_3)
  VAR_6->freq = 2500;

 VAR_6->dev = VAR_5;

 return (0);
}
