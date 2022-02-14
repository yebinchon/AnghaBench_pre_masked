
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct videomode {int flags; } ;


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
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_0(struct videomode *VAR_12,
      u32 VAR_13)
{
 if (!(VAR_12->flags & (VAR_1 |
      VAR_0))) {
  if (VAR_13 & VAR_7)
   VAR_12->flags |= VAR_1;
  else if (VAR_13 & VAR_6)
   VAR_12->flags |= VAR_0;
 }

 if (!(VAR_12->flags & (VAR_3 |
      VAR_2))) {
  if (VAR_13 & VAR_9)
   VAR_12->flags |= VAR_3;
  else if (VAR_13 & VAR_8)
   VAR_12->flags |= VAR_2;
 }

 if (!(VAR_12->flags & (VAR_5 |
      VAR_4))) {
  if (VAR_13 & VAR_11)
   VAR_12->flags |= VAR_5;
  else if (VAR_13 & VAR_10)
   VAR_12->flags |= VAR_4;
 }
}
