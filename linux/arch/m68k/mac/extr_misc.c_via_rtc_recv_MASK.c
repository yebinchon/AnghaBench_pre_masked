
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static __u8 FUNC_0(void)
{
 int VAR_5, VAR_6;
 __u8 VAR_7;

 VAR_6 = VAR_4[VAR_2] & ~VAR_0;



 VAR_4[VAR_3] &= ~VAR_1;



 VAR_7 = 0;
 for (VAR_5 = 0 ; VAR_5 < 8 ; VAR_5++) {
  VAR_4[VAR_2] = VAR_6;
  VAR_4[VAR_2] = VAR_6 | VAR_0;
  VAR_7 = (VAR_7 << 1) | (VAR_4[VAR_2] & VAR_1);
 }



 VAR_4[VAR_3] |= VAR_1;

 return VAR_7;
}
