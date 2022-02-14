
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_setting {scalar_t__* spec; } ;
typedef long register_t ;
typedef int device_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,long) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(device_t VAR_8, const struct cf_setting *VAR_9)
{
 register_t VAR_10;

 if (VAR_9 == ((void*)0))
  return (VAR_0);

 if (VAR_9->spec[1] < 0 || VAR_9->spec[1] >= VAR_7)
  return (VAR_0);

 VAR_10 = ((long)VAR_9->spec[0] << VAR_2) & VAR_1;
 VAR_10 |= ((long)VAR_9->spec[0] << VAR_4) & VAR_3;
 VAR_10 |= VAR_5;

 FUNC_1(VAR_6, VAR_10);
 FUNC_2(); FUNC_0();

 return (0);
}
