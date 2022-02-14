
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {scalar_t__ v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (unsigned long,int) ;
 unsigned long FUNC_3 (unsigned long,unsigned long,int) ;
 struct hash_pte* VAR_2 ;
 long FUNC_4 (unsigned long,int,int) ;
 int FUNC_5 (unsigned long,int,int,int,int ) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_3, int VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 long VAR_8;
 struct hash_pte *VAR_9;

 VAR_7 = FUNC_2(VAR_3, VAR_5);
 VAR_6 = FUNC_3(VAR_3, VAR_7, VAR_5);

 VAR_8 = FUNC_4(VAR_6, VAR_4, VAR_5);
 if (VAR_8 == -1)
  return -VAR_0;

 VAR_9 = VAR_2 + VAR_8;

 FUNC_0(!(FUNC_1(VAR_9->v) & VAR_1));


 VAR_9->v = 0;


 FUNC_5(VAR_6, VAR_4, VAR_4, VAR_5, 0);
 return 0;
}
