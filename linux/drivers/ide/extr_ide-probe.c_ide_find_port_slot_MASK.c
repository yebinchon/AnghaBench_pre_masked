
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ide_port_info {int host_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(const struct ide_port_info *VAR_6)
{
 int VAR_7 = -VAR_0;
 u8 VAR_8 = (VAR_6 && (VAR_6->host_flags & VAR_1)) ? 0 : 1;
 u8 VAR_9 = (VAR_6 && (VAR_6->host_flags & VAR_2)) ? 1 : 0;
 FUNC_1(&VAR_4);
 if (VAR_8) {
  if ((VAR_5 | VAR_9) != (1 << VAR_3) - 1)
   VAR_7 = FUNC_0(VAR_5 | VAR_9);
 } else {
  if ((VAR_5 | 3) != (1 << VAR_3) - 1)
   VAR_7 = FUNC_0(VAR_5 | 3);
  else if ((VAR_5 & 3) != 3)
   VAR_7 = FUNC_0(VAR_5);
 }
 if (VAR_7 >= 0)
  VAR_5 |= (1 << VAR_7);
 FUNC_2(&VAR_4);

 return VAR_7;
}
