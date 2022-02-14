
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,char*,int,int,int,int,int) ;
 int FUNC_1 (struct pcd_unit*,int) ;
 int FUNC_2 (struct pcd_unit*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pcd_unit *VAR_3, int VAR_4, int VAR_5, char *VAR_6, char *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_8 = 0;
 while ((((VAR_9 = FUNC_2(VAR_3)) & VAR_4) || (VAR_5 && (!(VAR_9 & VAR_5))))
        && (VAR_8++ < VAR_2))
  FUNC_3(VAR_1);

 if ((VAR_9 & (VAR_0 & VAR_5)) || (VAR_8 > VAR_2)) {
  VAR_11 = FUNC_1(VAR_3, 7);
  VAR_10 = FUNC_1(VAR_3, 1);
  VAR_12 = FUNC_1(VAR_3, 2);
  if (VAR_8 > VAR_2)
   VAR_10 |= 0x100;
  if (VAR_6)
   FUNC_0("%s: %s %s: alt=0x%x stat=0x%x err=0x%x"
          " loop=%d phase=%d\n",
          VAR_3->name, VAR_6, VAR_7, VAR_9, VAR_11, VAR_10, VAR_8, VAR_12);
  return (VAR_11 << 8) + VAR_9;
 }
 return 0;
}
