
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sahara_dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static u32 FUNC_0(struct sahara_dev *VAR_10)
{
 u32 VAR_11 = VAR_2 | VAR_7 |
   VAR_4 | VAR_5 |
   VAR_3 | VAR_6;

 if (VAR_10->flags & VAR_0) {
  VAR_11 |= VAR_8;
  VAR_11 ^= VAR_6;
 }

 if (VAR_10->flags & VAR_1) {
  VAR_11 |= VAR_9;
  VAR_11 ^= VAR_6;
 }

 return VAR_11;
}
