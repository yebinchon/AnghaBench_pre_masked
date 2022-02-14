
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned long,unsigned int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned int FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_4(VAR_5, VAR_4) << 8;
 VAR_7 |= FUNC_4(VAR_5, VAR_3);

 FUNC_1("chip ID at %lx is %.4x\n", VAR_5, VAR_7);

 if ((VAR_7 & VAR_2) !=
     VAR_1) {
  FUNC_0("not an our chip\n");
  VAR_6 = -VAR_0;
 }

 FUNC_3(VAR_5);

 return VAR_6;
}
